{
gStyle->SetOptStat(0);

TH1F *hpip = new TH1F("hpip", "M_{X} for #pi+ SIDIS Events", 150, 0.5, 3.0);
hpip->GetXaxis()->SetTitle("M_{X} (GeV)");
hpip->GetXaxis()->SetTitleSize(0.06);
hpip->GetXaxis()->SetLabelSize(0.06);
hpip->GetYaxis()->SetLabelSize(0.06);
hpip->SetLineWidth(2);
TH1F *hpim = new TH1F("hpim", "M_{X} for #pi- SIDIS Events", 150, 0.5, 3.0);
hpim->GetXaxis()->SetTitle("M_{X} (GeV)");
hpim->GetXaxis()->SetTitleSize(0.06);
hpim->GetXaxis()->SetLabelSize(0.06);
hpim->GetYaxis()->SetLabelSize(0.06);
hpim->SetLineWidth(2);

TCanvas *can = new TCanvas("can", "can", 10, 10, 800, 500);
can->Divide(2, 1, 0.0001, 0.0001);
can->cd(1);

ifstream numbersFile("numbers1.1.txt");
for(int i = 0; i < 193; i++) {
  float x, y;
  numbersFile >> x >> y;
  hpip->SetBinContent(hpip->GetXaxis()->FindBin(x), y);
}
numbersFile.close();
can->cd(1);
can->cd(1)->SetTopMargin(0.08);
can->cd(1)->SetBottomMargin(0.18);
can->cd(1)->SetLeftMargin(0.12);
can->cd(1)->SetRightMargin(0.06);
can->cd(1)->SetGrid();
hpip->Draw();

TLine *l1 = new TLine(1.35, 0, 1.35, hpip->GetMaximum());
l1->SetLineColor(kRed);
l1->SetLineWidth(2);
l1->Draw();

ifstream numbersFile2("numbers1.2.txt");
for(int i = 0; i < 313; i++) {
  float x, y;
  numbersFile2 >> x >> y;
  hpim->SetBinContent(hpim->GetXaxis()->FindBin(x), y);
}
numbersFile2.close();
can->cd(2);
can->cd(2)->SetTopMargin(0.08);
can->cd(2)->SetBottomMargin(0.18);
can->cd(2)->SetLeftMargin(0.16);
can->cd(2)->SetRightMargin(0.06);
can->cd(2)->SetGrid();
hpim->Draw();

TLine *l2 = new TLine(1.35, 0, 1.35, hpim->GetMaximum());
l2->SetLineColor(kRed);
l2->SetLineWidth(2);
l2->Draw();

can->SaveAs("missingMassCut.png");

}
