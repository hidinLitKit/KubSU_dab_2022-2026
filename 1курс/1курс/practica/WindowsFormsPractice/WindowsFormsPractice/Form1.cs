using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsPractice
{
    public partial class Integral : Form
    {
        public struct Coords
        {
            public double X;
            public double Y;
            public Coords(double x, double y)
            {
                X = x;
                Y = y;
            }

        }
        static double IntegralFunc(double x, double t)
        {
            return 1 / (Math.Sqrt(1 + Math.Exp(x * t)));
        }

        static double PervoobrFunc(double x)
        {
            return (-Math.Log(Math.Sqrt(Math.Exp(x) + 1) + 1) +
                         Math.Log(Math.Sqrt(Math.Exp(x) + 1) - 1) +
                         Math.Log(Math.Sqrt(2) + 1) - Math.Log(Math.Sqrt(2) - 1)) / x;
        }

        public Integral()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
           
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a, b, c, d, N;
            
            List<Coords> Iaccur = new List<Coords>();
            List<double> Xval = new List<double>();
            List<double> maxNevy = new List<double>();

            //List<List<double>> table = new List<List<double>>();

            foreach (TextBox tb in this.Controls.OfType<TextBox>())
            {
                if (tb.Text.Trim() == string.Empty)
                {
                    MessageBox.Show("Пожалуйста, заполните все поля!");
                    return;
                }
            }
           
            a = Convert.ToDouble(this.aBox.Text); //Введите промежуток интегрирования t: [a,b]
            b = Convert.ToDouble(this.bBox.Text); //[0;1]
            c = Convert.ToDouble(this.cBox.Text); // Введите промежутки изменения x: [c,d]:
            d = Convert.ToDouble(this.dBox.Text); // [0;2]
            N = Convert.ToDouble(this.nBox.Text); //число разбений
            
            //Заполнение значений x
            for (int i = 0; i <= 20; i++)
            {
                Xval.Add(c + i * (Convert.ToDouble(d - c) / 20));
            }

            //Заполнение координатных точек для графика точного вычисления
            foreach (double x in Xval)
            {
                if (x == 0) Iaccur.Add(new Coords(x, 1 / Math.Sqrt(2)));
                else Iaccur.Add(new Coords(x, PervoobrFunc(x)));
            }

            for( int i = 0; i<=20;i++)
            {
                List<double> temp = new List<double>() { };
                /*table.Insert(i, temp);
                //table[i].Add(Xval[i]);
                //table[i].Add(Iaccur[i].Y); */
            }

            //построение графиков
            int graph = 0;
            List<double> l = new List<double> { 5, 10, 20, 50, N };
            foreach (double n in l)
            { 
                List<Coords> Iapprox = new List<Coords>(); //Координаты приближенного интеграла
                List<double> Tval = new List<double>(); //значения t для N

                double h = (double)(b - a) / n;

                for (int i = 0; i < n; i++)
                {
                    Tval.Add(a + i * h);
                }

                foreach (double x in Xval)
                {
                    double summ = 0.0;
                    foreach (double t in Tval)
                    {
                        summ += IntegralFunc(x, t);
                    }
                    Iapprox.Add(new Coords(x, h * summ));
                }
                //Вычисление максимальной невязки
                List<double> nevy = new List<double>();
                for(int i= 0; i <=20; i++)
                {
                    nevy.Add(Math.Abs(Iapprox[i].Y - Iaccur[i].Y));
                    
                }
                maxNevy.Add(nevy.Max());

                //Вывод графика
                this.chart1.Series[graph].Points.Clear();
                for(int i = 0;i<=20;i++)
                {
                    this.chart1.Series[graph].Points.AddXY(Iapprox[i].X, Iapprox[i].Y);
                    //table[i].Add(Iapprox[i].Y);
                }

                //Вывод максимальной невязки
                this.table.GetControlFromPosition(1, graph + 1).Text = Convert.ToString(maxNevy[graph]);

                Iapprox.Clear();
                Tval.Clear();
                graph++;
            }

            //Построение графика точного
            this.chart1.Series[5].Points.Clear();
            for (int i = 0; i <= 20; i++)
            {
                this.chart1.Series[5].Points.AddXY(Iaccur[i].X, Iaccur[i].Y);

            }
            double minY = Iaccur.Min(p => p.Y);
            chart1.ChartAreas[0].AxisY.Minimum = minY;

            /*using (System.IO.StreamWriter writer = new System.IO.StreamWriter("D:/Downloads/practice/pract.txt"))
            //{
            //    foreach (List<double> innerList in table)
            //    {
            //        foreach (double ld in innerList)
            //        {
            //            writer.Write(ld.ToString() + " ");
            //        }
            //        writer.WriteLine();
            //    }
            }*/
        }
    }
}
