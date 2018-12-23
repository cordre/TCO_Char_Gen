using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CharGen
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        int gender = 0;
        int curRace = 1;
        public MainWindow()
        {
            InitializeComponent();
        }

        private void ButtonNextRace_Click(object sender, RoutedEventArgs e)
        {

        }

        private void ButtonPrevRace_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
