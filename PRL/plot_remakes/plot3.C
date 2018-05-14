{
const int n = 4;

TGraphErrors *ghar[n];
TGraphErrors *gosi[n];

TCanvas *can = new TCanvas("can", "can", 10, 10, 900, 600);
can->Divide(2, 2, 0.0001, 0.0001);
can->cd(1);

for(int i = 0; i < n; i++) {
  ghar[i] = new TGraphErrors();
  gosi[i] = new TGraphErrors();

  ifstream numbersFile(Form("numbers3.%i.txt", i+1));
  for(int k = 0; k < 3; k++) {
  	float x, yhar, yosi, xagain, ehar, eosi;
  	numbersFile >> x >> yhar >> yosi >> xagain >> ehar >> eosi;
  
  	ghar[i]->SetPoint(ghar[i]->GetN(), x-0.003, yhar); // artificial offset
  	ghar[i]->SetPointError(ghar[i]->GetN()-1, 0.0, fabs(ehar - yhar));
  
  	gosi[i]->SetPoint(gosi[i]->GetN(), x+0.003, yosi); // artificial offset
  	gosi[i]->SetPointError(gosi[i]->GetN()-1, 0.0, fabs(eosi - yosi));
  }
  numbersFile.close();

  can->cd(i+1);
  can->cd(i+1)->SetTopMargin(0.04);
  can->cd(i+1)->SetBottomMargin(0.18);
  can->cd(i+1)->SetLeftMargin(0.12);
  can->cd(i+1)->SetRightMargin(0.06);
  can->cd(i+1)->SetGrid();

  ghar[i]->GetXaxis()->SetRangeUser(0.2, 0.55);
  ghar[i]->GetXaxis()->SetTitle("P_{h #perp}^{2} (GeV^{2})");
  ghar[i]->GetXaxis()->SetTitleSize(0.06);
  ghar[i]->GetXaxis()->SetLabelSize(0.06);
  ghar[i]->GetYaxis()->SetRangeUser(-0.2, 0.15);
  ghar[i]->GetYaxis()->SetLabelSize(0.06);
  ghar[i]->SetMarkerStyle(22);
  ghar[i]->SetMarkerColor(kRed);
  ghar[i]->SetLineColor(kRed);
  ghar[i]->SetLineWidth(2);
  ghar[i]->Draw("AP");
  
  gosi[i]->SetMarkerStyle(23);
  gosi[i]->SetMarkerColor(kBlue);
  gosi[i]->SetLineColor(kBlue);
  gosi[i]->SetLineWidth(2);
  gosi[i]->Draw("P same");

  TLine *zline = new TLine(0.2, 0, 0.55, 0);
  zline->Draw();
}

can->cd(1);
TLegend *leg = new TLegend(0.55, 0.65, 0.9, 0.94);
leg->AddEntry(ghar[0], "CLAS E1-f (#pi+)", "lep");
leg->AddEntry(gosi[0], "CLAS E1-6 (#pi+)", "lep");
leg->Draw();

TPaveText *t1 = new TPaveText(0.15, 0.79, 0.32, 0.94, "ndc");
t1->SetBorderSize(1);
t1->SetFillColor(kWhite);
t1->AddText("A_{UU}^{cos #phi_{h}}");

TPaveText *t2 = new TPaveText(0.15, 0.79, 0.32, 0.94, "ndc");
t2->SetBorderSize(1);
t2->SetFillColor(kWhite);
t2->AddText("A_{UU}^{cos 2 #phi_{h}}");

TPaveText *tL = new TPaveText(0.15, 0.22, 0.8, 0.31, "ndc");
tL->SetBorderSize(1);
tL->SetFillColor(kWhite);
tL->AddText("0.25 < x < 0.28, 1.9 < Q^{2} < 2.2 GeV^{2}, 0.29 < z < 0.32");

TPaveText *tR = new TPaveText(0.15, 0.22, 0.8, 0.31, "ndc");
tR->SetBorderSize(1);
tR->SetFillColor(kWhite);
tR->AddText("0.25 < x < 0.28, 1.9 < Q^{2} < 2.2 GeV^{2}, 0.32 < z < 0.35");

can->cd(1);
t1->Draw();
tL->Draw();
can->cd(2);
t1->Draw();
tR->Draw();
can->cd(3);
t2->Draw();
tL->Draw();
can->cd(4);
t2->Draw();
tR->Draw();

can->SaveAs("osipenkoComparisonVPT2_2zBins.png");

}
