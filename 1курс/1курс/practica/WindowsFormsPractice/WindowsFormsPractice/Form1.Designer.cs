namespace WindowsFormsPractice
{
    partial class Integral
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series2 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series3 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series4 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series5 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Series series6 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.button1 = new System.Windows.Forms.Button();
            this.aBox = new System.Windows.Forms.TextBox();
            this.tPromez = new System.Windows.Forms.Label();
            this.bBox = new System.Windows.Forms.TextBox();
            this.xPromez = new System.Windows.Forms.Label();
            this.dBox = new System.Windows.Forms.TextBox();
            this.cBox = new System.Windows.Forms.TextBox();
            this.Nrazb = new System.Windows.Forms.Label();
            this.nBox = new System.Windows.Forms.TextBox();
            this.table = new System.Windows.Forms.TableLayoutPanel();
            this.n5 = new System.Windows.Forms.Label();
            this.n10 = new System.Windows.Forms.Label();
            this.n20 = new System.Windows.Forms.Label();
            this.n50 = new System.Windows.Forms.Label();
            this.usern = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.table.SuspendLayout();
            this.SuspendLayout();
            // 
            // chart1
            // 
            this.chart1.BorderlineColor = System.Drawing.Color.WhiteSmoke;
            chartArea1.AxisX.Title = "Значение X";
            chartArea1.AxisX.TitleFont = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            chartArea1.AxisY.Title = "Значение определённого интеграла";
            chartArea1.AxisY.TitleFont = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            chartArea1.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chart1.Legends.Add(legend1);
            this.chart1.Location = new System.Drawing.Point(12, 38);
            this.chart1.Name = "chart1";
            this.chart1.RightToLeft = System.Windows.Forms.RightToLeft.No;
            series1.BorderWidth = 2;
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series1.Color = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(0)))));
            series1.Legend = "Legend1";
            series1.Name = "n=5";
            series2.BorderWidth = 2;
            series2.ChartArea = "ChartArea1";
            series2.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series2.Color = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            series2.Legend = "Legend1";
            series2.Name = "n=10";
            series3.BorderWidth = 2;
            series3.ChartArea = "ChartArea1";
            series3.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series3.Color = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            series3.Legend = "Legend1";
            series3.Name = "n=20";
            series4.BorderWidth = 2;
            series4.ChartArea = "ChartArea1";
            series4.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series4.Color = System.Drawing.Color.Red;
            series4.Legend = "Legend1";
            series4.Name = "n=50";
            series5.BorderWidth = 2;
            series5.ChartArea = "ChartArea1";
            series5.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series5.Color = System.Drawing.Color.Cyan;
            series5.Legend = "Legend1";
            series5.Name = "user N";
            series6.BorderWidth = 3;
            series6.ChartArea = "ChartArea1";
            series6.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series6.Color = System.Drawing.Color.Black;
            series6.Legend = "Legend1";
            series6.Name = "Точное";
            this.chart1.Series.Add(series1);
            this.chart1.Series.Add(series2);
            this.chart1.Series.Add(series3);
            this.chart1.Series.Add(series4);
            this.chart1.Series.Add(series5);
            this.chart1.Series.Add(series6);
            this.chart1.Size = new System.Drawing.Size(891, 479);
            this.chart1.TabIndex = 0;
            this.chart1.Text = "chart1";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(919, 481);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(468, 46);
            this.button1.TabIndex = 1;
            this.button1.Text = "Вычислить";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // aBox
            // 
            this.aBox.Location = new System.Drawing.Point(1005, 57);
            this.aBox.Name = "aBox";
            this.aBox.Size = new System.Drawing.Size(41, 22);
            this.aBox.TabIndex = 2;
            // 
            // tPromez
            // 
            this.tPromez.AutoSize = true;
            this.tPromez.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.9F);
            this.tPromez.Location = new System.Drawing.Point(916, 38);
            this.tPromez.Name = "tPromez";
            this.tPromez.Size = new System.Drawing.Size(314, 18);
            this.tPromez.TabIndex = 3;
            this.tPromez.Text = "Введите промежуток интегрирования t: [a,b]";
            // 
            // bBox
            // 
            this.bBox.Location = new System.Drawing.Point(1082, 57);
            this.bBox.Name = "bBox";
            this.bBox.Size = new System.Drawing.Size(41, 22);
            this.bBox.TabIndex = 4;
            // 
            // xPromez
            // 
            this.xPromez.AutoSize = true;
            this.xPromez.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.9F);
            this.xPromez.Location = new System.Drawing.Point(916, 93);
            this.xPromez.Name = "xPromez";
            this.xPromez.Size = new System.Drawing.Size(289, 18);
            this.xPromez.TabIndex = 5;
            this.xPromez.Text = "Введите промежутки изменения x: [c,d]: ";
            // 
            // dBox
            // 
            this.dBox.Location = new System.Drawing.Point(1082, 123);
            this.dBox.Name = "dBox";
            this.dBox.Size = new System.Drawing.Size(41, 22);
            this.dBox.TabIndex = 7;
            // 
            // cBox
            // 
            this.cBox.Location = new System.Drawing.Point(1005, 123);
            this.cBox.Name = "cBox";
            this.cBox.Size = new System.Drawing.Size(41, 22);
            this.cBox.TabIndex = 6;
            // 
            // Nrazb
            // 
            this.Nrazb.AutoSize = true;
            this.Nrazb.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.9F);
            this.Nrazb.Location = new System.Drawing.Point(916, 151);
            this.Nrazb.Name = "Nrazb";
            this.Nrazb.Size = new System.Drawing.Size(212, 18);
            this.Nrazb.TabIndex = 8;
            this.Nrazb.Text = "Введите число разбиений N: ";
            // 
            // nBox
            // 
            this.nBox.Location = new System.Drawing.Point(1134, 150);
            this.nBox.Name = "nBox";
            this.nBox.Size = new System.Drawing.Size(41, 22);
            this.nBox.TabIndex = 9;
            // 
            // table
            // 
            this.table.BackColor = System.Drawing.SystemColors.Control;
            this.table.CellBorderStyle = System.Windows.Forms.TableLayoutPanelCellBorderStyle.Single;
            this.table.ColumnCount = 2;
            this.table.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 17.34475F));
            this.table.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 82.65524F));
            this.table.Controls.Add(this.n5, 0, 1);
            this.table.Controls.Add(this.n10, 0, 2);
            this.table.Controls.Add(this.n20, 0, 3);
            this.table.Controls.Add(this.n50, 0, 4);
            this.table.Controls.Add(this.usern, 0, 5);
            this.table.Controls.Add(this.label1, 0, 0);
            this.table.Controls.Add(this.label2, 1, 0);
            this.table.Controls.Add(this.label3, 1, 1);
            this.table.Controls.Add(this.label4, 1, 2);
            this.table.Controls.Add(this.label5, 1, 3);
            this.table.Controls.Add(this.label6, 1, 4);
            this.table.Controls.Add(this.label7, 1, 5);
            this.table.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F);
            this.table.ForeColor = System.Drawing.SystemColors.ControlText;
            this.table.Location = new System.Drawing.Point(919, 188);
            this.table.Margin = new System.Windows.Forms.Padding(13);
            this.table.Name = "table";
            this.table.RowCount = 6;
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 55.42169F));
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 44.57831F));
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 45F));
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 42F));
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 41F));
            this.table.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 43F));
            this.table.Size = new System.Drawing.Size(468, 291);
            this.table.TabIndex = 10;
            // 
            // n5
            // 
            this.n5.AutoSize = true;
            this.n5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.n5.Location = new System.Drawing.Point(11, 74);
            this.n5.Margin = new System.Windows.Forms.Padding(10);
            this.n5.Name = "n5";
            this.n5.Size = new System.Drawing.Size(40, 20);
            this.n5.TabIndex = 7;
            this.n5.Text = "N=5";
            // 
            // n10
            // 
            this.n10.AutoSize = true;
            this.n10.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.n10.Location = new System.Drawing.Point(11, 125);
            this.n10.Margin = new System.Windows.Forms.Padding(10);
            this.n10.Name = "n10";
            this.n10.Size = new System.Drawing.Size(49, 20);
            this.n10.TabIndex = 8;
            this.n10.Text = "N=10";
            // 
            // n20
            // 
            this.n20.AutoSize = true;
            this.n20.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.n20.Location = new System.Drawing.Point(11, 171);
            this.n20.Margin = new System.Windows.Forms.Padding(10);
            this.n20.Name = "n20";
            this.n20.Size = new System.Drawing.Size(49, 20);
            this.n20.TabIndex = 9;
            this.n20.Text = "N=20";
            // 
            // n50
            // 
            this.n50.AutoSize = true;
            this.n50.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.n50.Location = new System.Drawing.Point(11, 214);
            this.n50.Margin = new System.Windows.Forms.Padding(10);
            this.n50.Name = "n50";
            this.n50.Size = new System.Drawing.Size(49, 20);
            this.n50.TabIndex = 10;
            this.n50.Text = "N=50";
            // 
            // usern
            // 
            this.usern.AutoSize = true;
            this.usern.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.usern.Location = new System.Drawing.Point(11, 256);
            this.usern.Margin = new System.Windows.Forms.Padding(10);
            this.usern.Name = "usern";
            this.usern.Size = new System.Drawing.Size(21, 20);
            this.usern.TabIndex = 11;
            this.usern.Text = "N";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.9F);
            this.label1.Location = new System.Drawing.Point(26, 14);
            this.label1.Margin = new System.Windows.Forms.Padding(25, 13, 13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(24, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "N";
            this.label1.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.8F);
            this.label2.Location = new System.Drawing.Point(95, 14);
            this.label2.Margin = new System.Windows.Forms.Padding(13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(207, 22);
            this.label2.TabIndex = 1;
            this.label2.Text = "Максимальная невязка";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.label3.Location = new System.Drawing.Point(91, 73);
            this.label3.Margin = new System.Windows.Forms.Padding(9);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(18, 20);
            this.label3.TabIndex = 2;
            this.label3.Tag = "lb";
            this.label3.Text = "0";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.label4.Location = new System.Drawing.Point(91, 124);
            this.label4.Margin = new System.Windows.Forms.Padding(9);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(18, 20);
            this.label4.TabIndex = 3;
            this.label4.Tag = "lb";
            this.label4.Text = "0";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.label5.Location = new System.Drawing.Point(91, 170);
            this.label5.Margin = new System.Windows.Forms.Padding(9);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(18, 20);
            this.label5.TabIndex = 4;
            this.label5.Tag = "lb";
            this.label5.Text = "0";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.label6.Location = new System.Drawing.Point(91, 213);
            this.label6.Margin = new System.Windows.Forms.Padding(9);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(18, 20);
            this.label6.TabIndex = 5;
            this.label6.Tag = "lb";
            this.label6.Text = "0";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.8F);
            this.label7.Location = new System.Drawing.Point(91, 255);
            this.label7.Margin = new System.Windows.Forms.Padding(9);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(18, 20);
            this.label7.TabIndex = 6;
            this.label7.Tag = "lb";
            this.label7.Text = "0";
            // 
            // Integral
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1390, 529);
            this.Controls.Add(this.table);
            this.Controls.Add(this.nBox);
            this.Controls.Add(this.Nrazb);
            this.Controls.Add(this.dBox);
            this.Controls.Add(this.cBox);
            this.Controls.Add(this.xPromez);
            this.Controls.Add(this.bBox);
            this.Controls.Add(this.tPromez);
            this.Controls.Add(this.aBox);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.chart1);
            this.Name = "Integral";
            this.Text = "Вычисление интеграла";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.table.ResumeLayout(false);
            this.table.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox aBox;
        private System.Windows.Forms.Label tPromez;
        private System.Windows.Forms.TextBox bBox;
        private System.Windows.Forms.Label xPromez;
        private System.Windows.Forms.TextBox dBox;
        private System.Windows.Forms.TextBox cBox;
        private System.Windows.Forms.Label Nrazb;
        private System.Windows.Forms.TextBox nBox;
        private System.Windows.Forms.TableLayoutPanel table;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label n5;
        private System.Windows.Forms.Label n10;
        private System.Windows.Forms.Label n20;
        private System.Windows.Forms.Label n50;
        private System.Windows.Forms.Label usern;
        public System.Windows.Forms.Label label3;
        public System.Windows.Forms.Label label4;
        public System.Windows.Forms.Label label5;
        public System.Windows.Forms.Label label6;
        public System.Windows.Forms.Label label7;
    }
}

