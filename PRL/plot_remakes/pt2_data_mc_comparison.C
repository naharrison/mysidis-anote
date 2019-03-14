{
gStyle->SetOptStat(0);
gStyle->SetTitleSize(0.08, "t");
TGaxis::SetMaxDigits(3);

TFile *data = new TFile("/Users/naharrison/mysidis-histos/data.s1.n11625.BiSc5.MoCo11.__0000000000000000__.root", "READ");
TFile *mc = new TFile("/Users/naharrison/mysidis-histos/MonteCarlo_v12.it2.s1.n32255.BiSc5.__0000000000000000__.root", "READ");

// pip, data/mc:
TH2F *dpip00 = (TH2F*) data->Get("rec_pip_PT2vsz_x0QQ0");
TH2F *dpip01 = (TH2F*) data->Get("rec_pip_PT2vsz_x0QQ1");
TH2F *dpip10 = (TH2F*) data->Get("rec_pip_PT2vsz_x1QQ0");
TH2F *dpip11 = (TH2F*) data->Get("rec_pip_PT2vsz_x1QQ1");
TH2F *dpip20 = (TH2F*) data->Get("rec_pip_PT2vsz_x2QQ0");
TH2F *dpip21 = (TH2F*) data->Get("rec_pip_PT2vsz_x2QQ1");
TH2F *dpip30 = (TH2F*) data->Get("rec_pip_PT2vsz_x3QQ0");
TH2F *dpip31 = (TH2F*) data->Get("rec_pip_PT2vsz_x3QQ1");
TH2F *dpip40 = (TH2F*) data->Get("rec_pip_PT2vsz_x4QQ0");
TH2F *dpip = new TH2F("dpip", "dpip", 200, 0, 1.05, 200, 0, 1.1);
dpip->Add(dpip00);
dpip->Add(dpip01);
dpip->Add(dpip10);
dpip->Add(dpip11);
dpip->Add(dpip20);
dpip->Add(dpip21);
dpip->Add(dpip30);
dpip->Add(dpip31);
dpip->Add(dpip40);
TH1D *dpip1 = dpip->ProjectionY();
dpip1->SetTitle("#pi+");
dpip1->Scale(1.0/dpip1->Integral(1, 200));

TH2F *mcpip00 = (TH2F*) mc->Get("rec_pip_PT2vsz_x0QQ0");
TH2F *mcpip01 = (TH2F*) mc->Get("rec_pip_PT2vsz_x0QQ1");
TH2F *mcpip10 = (TH2F*) mc->Get("rec_pip_PT2vsz_x1QQ0");
TH2F *mcpip11 = (TH2F*) mc->Get("rec_pip_PT2vsz_x1QQ1");
TH2F *mcpip20 = (TH2F*) mc->Get("rec_pip_PT2vsz_x2QQ0");
TH2F *mcpip21 = (TH2F*) mc->Get("rec_pip_PT2vsz_x2QQ1");
TH2F *mcpip30 = (TH2F*) mc->Get("rec_pip_PT2vsz_x3QQ0");
TH2F *mcpip31 = (TH2F*) mc->Get("rec_pip_PT2vsz_x3QQ1");
TH2F *mcpip40 = (TH2F*) mc->Get("rec_pip_PT2vsz_x4QQ0");
TH2F *mcpip = new TH2F("mcpip", "mcpip", 200, 0, 1.05, 200, 0, 1.1);
mcpip->Add(mcpip00);
mcpip->Add(mcpip01);
mcpip->Add(mcpip10);
mcpip->Add(mcpip11);
mcpip->Add(mcpip20);
mcpip->Add(mcpip21);
mcpip->Add(mcpip30);
mcpip->Add(mcpip31);
mcpip->Add(mcpip40);
TH1D *mcpip1 = mcpip->ProjectionY();
mcpip1->SetTitle("#pi+");
mcpip1->Scale(1.0/mcpip1->Integral(1, 200));


// pim data/mc:
TH2F *dpim00 = (TH2F*) data->Get("rec_pim_PT2vsz_x0QQ0");
TH2F *dpim01 = (TH2F*) data->Get("rec_pim_PT2vsz_x0QQ1");
TH2F *dpim10 = (TH2F*) data->Get("rec_pim_PT2vsz_x1QQ0");
TH2F *dpim11 = (TH2F*) data->Get("rec_pim_PT2vsz_x1QQ1");
TH2F *dpim20 = (TH2F*) data->Get("rec_pim_PT2vsz_x2QQ0");
TH2F *dpim21 = (TH2F*) data->Get("rec_pim_PT2vsz_x2QQ1");
TH2F *dpim30 = (TH2F*) data->Get("rec_pim_PT2vsz_x3QQ0");
TH2F *dpim31 = (TH2F*) data->Get("rec_pim_PT2vsz_x3QQ1");
TH2F *dpim40 = (TH2F*) data->Get("rec_pim_PT2vsz_x4QQ0");
TH2F *dpim = new TH2F("dpim", "dpim", 200, 0, 1.05, 200, 0, 1.1);
dpim->Add(dpim00);
dpim->Add(dpim01);
dpim->Add(dpim10);
dpim->Add(dpim11);
dpim->Add(dpim20);
dpim->Add(dpim21);
dpim->Add(dpim30);
dpim->Add(dpim31);
dpim->Add(dpim40);
TH1D *dpim1 = dpim->ProjectionY();
dpim1->SetTitle("#pi-");
dpim1->Scale(1.0/dpim1->Integral(1, 200));

TH2F *mcpim00 = (TH2F*) mc->Get("rec_pim_PT2vsz_x0QQ0");
TH2F *mcpim01 = (TH2F*) mc->Get("rec_pim_PT2vsz_x0QQ1");
TH2F *mcpim10 = (TH2F*) mc->Get("rec_pim_PT2vsz_x1QQ0");
TH2F *mcpim11 = (TH2F*) mc->Get("rec_pim_PT2vsz_x1QQ1");
TH2F *mcpim20 = (TH2F*) mc->Get("rec_pim_PT2vsz_x2QQ0");
TH2F *mcpim21 = (TH2F*) mc->Get("rec_pim_PT2vsz_x2QQ1");
TH2F *mcpim30 = (TH2F*) mc->Get("rec_pim_PT2vsz_x3QQ0");
TH2F *mcpim31 = (TH2F*) mc->Get("rec_pim_PT2vsz_x3QQ1");
TH2F *mcpim40 = (TH2F*) mc->Get("rec_pim_PT2vsz_x4QQ0");
TH2F *mcpim = new TH2F("mcpim", "mcpim", 200, 0, 1.05, 200, 0, 1.1);
mcpim->Add(mcpim00);
mcpim->Add(mcpim01);
mcpim->Add(mcpim10);
mcpim->Add(mcpim11);
mcpim->Add(mcpim20);
mcpim->Add(mcpim21);
mcpim->Add(mcpim30);
mcpim->Add(mcpim31);
mcpim->Add(mcpim40);
TH1D *mcpim1 = mcpim->ProjectionY();
mcpim1->SetTitle("#pi-");
mcpim1->Scale(1.0/mcpim1->Integral(1, 200));


// Draw:
TCanvas *can = new TCanvas("can", "can", 5, 5, 800, 400);
can->Divide(2, 1, 0.0001, 0.0001);
float fontsize = 0.075;
float topmargin = 0.10;
float bottommargin = 0.17;
float leftmargin = 0.10;
float rightmargin = 0.06;


can->cd(1);
can->cd(1)->SetGrid();
can->cd(1)->SetTopMargin(topmargin);
can->cd(1)->SetBottomMargin(bottommargin);
can->cd(1)->SetLeftMargin(leftmargin);
can->cd(1)->SetRightMargin(rightmargin);

dpip1->GetXaxis()->SetRangeUser(0, 0.5);
dpip1->GetXaxis()->SetTitle("P_{hT}^{2}");
dpip1->GetXaxis()->SetTitleSize(fontsize);
dpip1->GetXaxis()->SetLabelSize(fontsize);
dpip1->GetYaxis()->SetLabelSize(fontsize);
dpip1->SetLineWidth(3);
dpip1->Draw("hist");
mcpip1->SetLineWidth(3);
mcpip1->SetLineColor(kRed);
mcpip1->Draw("hist same");


can->cd(2);
can->cd(2)->SetGrid();
can->cd(2)->SetTopMargin(topmargin);
can->cd(2)->SetBottomMargin(bottommargin);
can->cd(2)->SetLeftMargin(leftmargin);
can->cd(2)->SetRightMargin(rightmargin);

mcpim1->GetXaxis()->SetRangeUser(0, 0.5);
mcpim1->GetXaxis()->SetTitle("P_{hT}^{2}");
mcpim1->GetXaxis()->SetTitleSize(fontsize);
mcpim1->GetXaxis()->SetLabelSize(fontsize);
mcpim1->GetYaxis()->SetLabelSize(fontsize);
mcpim1->SetLineWidth(3);
mcpim1->SetLineColor(kRed);
mcpim1->Draw("hist");
dpim1->SetLineWidth(3);
dpim1->Draw("hist same");


}
