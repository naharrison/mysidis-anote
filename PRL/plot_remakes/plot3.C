{
const int n = 4;

TGraphErrors *graph[n];// = new TGraphErrors();
TGraphErrors *graph2[n];// = new TGraphErrors();

TCanvas *can = new TCanvas("can", "can", 10, 10, 750, 550);
can->Divide(2, 2, 0.0001, 0.0001);
can->cd(1);

for(int i = 0; i < n; i++) {
  graph[i] = new TGraphErrors();
  graph2[i] = new TGraphErrors();

  ifstream numbersFile(Form("numbers3.%i.txt", i+1));
  for(int k = 0; k < 3; k++) {
  	float x, yhar, yosi, xagain, ehar, eosi;
  	numbersFile >> x >> yhar >> yosi >> xagain >> ehar >> eosi;
  
  	graph[i]->SetPoint(graph[i]->GetN(), x, yhar);
  	graph[i]->SetPointError(graph[i]->GetN()-1, 0.0, fabs(ehar - yhar));
  
  	graph2[i]->SetPoint(graph2[i]->GetN(), x, yosi);
  	graph2[i]->SetPointError(graph2[i]->GetN()-1, 0.0, fabs(eosi - yosi));
  }
  numbersFile.close();

  can->cd(i+1);
  can->cd(i+1)->SetGrid();

  graph[i]->SetTitle("My Graph");
  graph[i]->GetXaxis()->SetTitle("P_{h #perp}^{2} (GeV^{2})");
  graph[i]->GetYaxis()->SetTitle("y axis");
  graph[i]->SetMarkerStyle(22);
  graph[i]->SetMarkerColor(kBlue);
  graph[i]->Draw("AP");
  
  graph2[i]->SetMarkerStyle(23);
  graph2[i]->SetMarkerColor(kRed);
  graph2[i]->Draw("P same");
}

}
