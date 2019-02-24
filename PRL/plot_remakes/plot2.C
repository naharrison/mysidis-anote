{
TFile *tf = new TFile("fig2.root", "READ");
TCanvas *can = new TCanvas("can", "can", 5, 5, 800, 800);
can->Divide(3, 4, 0.001, 0.001);

float fontsize = 0.1;
float topmargin = 0.00;
float bottommargin = 0;
float leftmargin = 0.17;
float rightmargin = 0.01;


// 116
can->cd(1)->SetTopMargin(topmargin);
can->cd(1)->SetBottomMargin(bottommargin);
can->cd(1)->SetLeftMargin(leftmargin);
can->cd(1)->SetRightMargin(rightmargin);
can->cd(1)->SetGrid();

hpipM_116->SetTitle("");
hpipM_116->GetXaxis()->SetNdivisions(505);
hpipM_116->GetYaxis()->SetNdivisions(505);
hpipM_116->GetXaxis()->SetTitleSize(fontsize);
hpipM_116->GetXaxis()->SetLabelSize(fontsize);
hpipM_116->GetYaxis()->SetLabelSize(0.1);
hpipM_116->GetYaxis()->SetRangeUser(-2000, 12200);
hpipM_116->Draw("E1");
hpimM_116->Draw("same E1");
grpipSys_M_116->Draw("E3 same");
grpimSys_M_116->Draw("E3 same");



can->cd(2)->SetTopMargin(topmargin);
can->cd(2)->SetBottomMargin(bottommargin);
can->cd(2)->SetLeftMargin(leftmargin);
can->cd(2)->SetRightMargin(rightmargin);
can->cd(2)->SetGrid();

hpipAc_116->SetTitle("");
hpipAc_116->GetXaxis()->SetNdivisions(505);
hpipAc_116->GetYaxis()->SetNdivisions(505);
hpipAc_116->GetXaxis()->SetTitleSize(fontsize);
hpipAc_116->GetXaxis()->SetLabelSize(fontsize);
hpipAc_116->GetYaxis()->SetLabelSize(0.1);
hpipAc_116->GetYaxis()->SetRangeUser(-0.35, 0.3);
hpipAc_116->Draw("E1");
hpimAc_116->Draw("same E1");
grpipSys_Ac_116->Draw("E3 same");
grpimSys_Ac_116->Draw("E3 same");



can->cd(3)->SetTopMargin(topmargin);
can->cd(3)->SetBottomMargin(bottommargin);
can->cd(3)->SetLeftMargin(leftmargin);
can->cd(3)->SetRightMargin(rightmargin);
can->cd(3)->SetGrid();

hpipAcc_116->SetTitle("");
hpipAcc_116->GetXaxis()->SetNdivisions(505);
hpipAcc_116->GetYaxis()->SetNdivisions(505);
hpipAcc_116->GetXaxis()->SetTitleSize(fontsize);
hpipAcc_116->GetXaxis()->SetLabelSize(fontsize);
hpipAcc_116->GetYaxis()->SetLabelSize(0.1);
hpipAcc_116->GetYaxis()->SetRangeUser(-0.24, 0.35);
hpipAcc_116->Draw("E1");
hpimAcc_116->Draw("same E1");
grpipSys_Acc_116->Draw("E3 same");
grpimSys_Acc_116->Draw("E3 same");



// 117
can->cd(4)->SetTopMargin(topmargin);
can->cd(4)->SetBottomMargin(bottommargin);
can->cd(4)->SetLeftMargin(leftmargin);
can->cd(4)->SetRightMargin(rightmargin);
can->cd(4)->SetGrid();

hpipM_117->SetTitle("");
hpipM_117->GetXaxis()->SetNdivisions(505);
hpipM_117->GetYaxis()->SetNdivisions(505);
hpipM_117->GetXaxis()->SetTitleSize(fontsize);
hpipM_117->GetXaxis()->SetLabelSize(fontsize);
hpipM_117->GetYaxis()->SetLabelSize(0.1);
hpipM_117->GetYaxis()->SetRangeUser(-1000, 8400);
hpipM_117->Draw("E1");
hpimM_117->Draw("same E1");
grpipSys_M_117->Draw("E3 same");
grpimSys_M_117->Draw("E3 same");



can->cd(5)->SetTopMargin(topmargin);
can->cd(5)->SetBottomMargin(bottommargin);
can->cd(5)->SetLeftMargin(leftmargin);
can->cd(5)->SetRightMargin(rightmargin);
can->cd(5)->SetGrid();

hpipAc_117->SetTitle("");
hpipAc_117->GetXaxis()->SetNdivisions(505);
hpipAc_117->GetYaxis()->SetNdivisions(505);
hpipAc_117->GetXaxis()->SetTitleSize(fontsize);
hpipAc_117->GetXaxis()->SetLabelSize(fontsize);
hpipAc_117->GetYaxis()->SetLabelSize(0.1);
hpipAc_117->GetYaxis()->SetRangeUser(-0.45, 0.25);
hpipAc_117->Draw("E1");
hpimAc_117->Draw("same E1");
grpipSys_Ac_117->Draw("E3 same");
grpimSys_Ac_117->Draw("E3 same");



can->cd(6)->SetTopMargin(topmargin);
can->cd(6)->SetBottomMargin(bottommargin);
can->cd(6)->SetLeftMargin(leftmargin);
can->cd(6)->SetRightMargin(rightmargin);
can->cd(6)->SetGrid();

hpipAcc_117->SetTitle("");
hpipAcc_117->GetXaxis()->SetNdivisions(505);
hpipAcc_117->GetYaxis()->SetNdivisions(505);
hpipAcc_117->GetXaxis()->SetTitleSize(fontsize);
hpipAcc_117->GetXaxis()->SetLabelSize(fontsize);
hpipAcc_117->GetYaxis()->SetLabelSize(0.1);
hpipAcc_117->GetYaxis()->SetRangeUser(-0.24, 0.44);
hpipAcc_117->Draw("E1");
hpimAcc_117->Draw("same E1");
grpipSys_Acc_117->Draw("E3 same");
grpimSys_Acc_117->Draw("E3 same");



// 118
can->cd(7)->SetTopMargin(topmargin);
can->cd(7)->SetBottomMargin(bottommargin);
can->cd(7)->SetLeftMargin(leftmargin);
can->cd(7)->SetRightMargin(rightmargin);
can->cd(7)->SetGrid();

hpipM_118->SetTitle("");
hpipM_118->GetXaxis()->SetNdivisions(505);
hpipM_118->GetYaxis()->SetNdivisions(505);
hpipM_118->GetXaxis()->SetTitleSize(fontsize);
hpipM_118->GetXaxis()->SetLabelSize(fontsize);
hpipM_118->GetYaxis()->SetLabelSize(0.1);
hpipM_118->GetYaxis()->SetRangeUser(-1000, 7900);
hpipM_118->Draw("E1");
hpimM_118->Draw("same E1");
grpipSys_M_118->Draw("E3 same");
grpimSys_M_118->Draw("E3 same");



can->cd(8)->SetTopMargin(topmargin);
can->cd(8)->SetBottomMargin(bottommargin);
can->cd(8)->SetLeftMargin(leftmargin);
can->cd(8)->SetRightMargin(rightmargin);
can->cd(8)->SetGrid();

hpipAc_118->SetTitle("");
hpipAc_118->GetXaxis()->SetNdivisions(505);
hpipAc_118->GetYaxis()->SetNdivisions(505);
hpipAc_118->GetXaxis()->SetTitleSize(fontsize);
hpipAc_118->GetXaxis()->SetLabelSize(fontsize);
hpipAc_118->GetYaxis()->SetLabelSize(0.1);
hpipAc_118->GetYaxis()->SetRangeUser(-0.39, 0.25);
hpipAc_118->Draw("E1");
hpimAc_118->Draw("same E1");
grpipSys_Ac_118->Draw("E3 same");
grpimSys_Ac_118->Draw("E3 same");



can->cd(9)->SetTopMargin(topmargin);
can->cd(9)->SetBottomMargin(bottommargin);
can->cd(9)->SetLeftMargin(leftmargin);
can->cd(9)->SetRightMargin(rightmargin);
can->cd(9)->SetGrid();

hpipAcc_118->SetTitle("");
hpipAcc_118->GetXaxis()->SetNdivisions(505);
hpipAcc_118->GetYaxis()->SetNdivisions(505);
hpipAcc_118->GetXaxis()->SetTitleSize(fontsize);
hpipAcc_118->GetXaxis()->SetLabelSize(fontsize);
hpipAcc_118->GetYaxis()->SetLabelSize(0.1);
hpipAcc_118->GetYaxis()->SetRangeUser(-0.24, 0.28);
hpipAcc_118->Draw("E1");
hpimAcc_118->Draw("same E1");
grpipSys_Acc_118->Draw("E3 same");
grpimSys_Acc_118->Draw("E3 same");



// 119
bottommargin = 0.27;
can->cd(10)->SetTopMargin(topmargin);
can->cd(10)->SetBottomMargin(bottommargin);
can->cd(10)->SetLeftMargin(leftmargin);
can->cd(10)->SetRightMargin(rightmargin);
can->cd(10)->SetGrid();

hpipM_119->SetTitle("");
hpipM_119->GetXaxis()->SetNdivisions(505);
hpipM_119->GetYaxis()->SetNdivisions(505);
hpipM_119->GetXaxis()->SetTitleSize(fontsize);
hpipM_119->GetXaxis()->SetLabelSize(fontsize);
hpipM_119->GetYaxis()->SetLabelSize(0.1);
hpipM_119->GetYaxis()->SetRangeUser(-1000, 6400);
hpipM_119->Draw("E1");
hpimM_119->Draw("same E1");
grpipSys_M_119->Draw("E3 same");
grpimSys_M_119->Draw("E3 same");



can->cd(11)->SetTopMargin(topmargin);
can->cd(11)->SetBottomMargin(bottommargin);
can->cd(11)->SetLeftMargin(leftmargin);
can->cd(11)->SetRightMargin(rightmargin);
can->cd(11)->SetGrid();

hpipAc_119->SetTitle("");
hpipAc_119->GetXaxis()->SetNdivisions(505);
hpipAc_119->GetYaxis()->SetNdivisions(505);
hpipAc_119->GetXaxis()->SetTitleSize(fontsize);
hpipAc_119->GetXaxis()->SetLabelSize(fontsize);
hpipAc_119->GetYaxis()->SetLabelSize(0.1);
hpipAc_119->GetYaxis()->SetRangeUser(-0.39, 0.25);
hpipAc_119->Draw("E1");
hpimAc_119->Draw("same E1");
grpipSys_Ac_119->Draw("E3 same");
grpimSys_Ac_119->Draw("E3 same");



can->cd(12)->SetTopMargin(topmargin);
can->cd(12)->SetBottomMargin(bottommargin);
can->cd(12)->SetLeftMargin(leftmargin);
can->cd(12)->SetRightMargin(rightmargin);
can->cd(12)->SetGrid();

hpipAcc_119->SetTitle("");
hpipAcc_119->GetXaxis()->SetNdivisions(505);
hpipAcc_119->GetYaxis()->SetNdivisions(505);
hpipAcc_119->GetXaxis()->SetTitleSize(fontsize);
hpipAcc_119->GetXaxis()->SetLabelSize(fontsize);
hpipAcc_119->GetYaxis()->SetLabelSize(0.1);
hpipAcc_119->GetYaxis()->SetRangeUser(-0.38, 0.38);
hpipAcc_119->Draw("E1");
hpimAcc_119->Draw("same E1");
grpipSys_Acc_119->Draw("E3 same");
grpimSys_Acc_119->Draw("E3 same");











}
