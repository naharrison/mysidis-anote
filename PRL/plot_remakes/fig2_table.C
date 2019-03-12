// breaking down sys error into % for each contribution (e- selection, pi selection, acc, rc, sector)

{
int xBin = 1;
int QQBin = 1;
int zBin = 8;
string pi = "pip";

TFile *MAcAccFile = new TFile("/Users/naharrison/mysidis-histos/MAcAcc.root", "READ");
TFile *sysFile = new TFile("/Users/naharrison/master/mysidis/shortScripts/phi_h/Total_systematics_details.root", "READ");
TFile *sysFile2 = new TFile("/Users/naharrison/mysidis-histos/Total_systematics.root", "READ");

for(int ipt = 9; ipt <= 15; ipt++) {

  TH1F *hM = (TH1F*) MAcAccFile->Get( Form("%s_M_it2_hap2_BiSc5_x%iQQ%iz%iPT2%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  TH1F *hAcAcc = (TH1F*) MAcAccFile->Get( Form("%s_AcAcc_it2_hap2_BiSc5_x%iQQ%iz%iPT2%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  float M = hM->GetBinContent(1);
  float Mstat = hM->GetBinError(1);
  float Ac = hAcAcc->GetBinContent(1);
  float Acstat = hAcAcc->GetBinError(1);
  float Acc = hAcAcc->GetBinContent(2);
  float Accstat = hAcAcc->GetBinError(2);
  //cout << M << " " << Mstat << " " << Ac << " " << Acstat << " " << Acc << " " << Accstat << endl;


  TH1F *htotalsys = (TH1F*) sysFile2->Get( Form("hMAcAccSys_%s_%i_%i_%i_%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  float Msystotal = htotalsys->GetBinContent(1);
  float Acsystotal = htotalsys->GetBinContent(2);
  float Accsystotal = htotalsys->GetBinContent(3);

  
  // 14 sources of sys. error:
  TH1F *hMsys = (TH1F*) sysFile->Get( Form("hSysM_%s_%i_%i_%i_%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  TH1F *hAcsys = (TH1F*) sysFile->Get( Form("hSysAc_%s_%i_%i_%i_%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  TH1F *hAccsys = (TH1F*) sysFile->Get( Form("hSysAcc_%s_%i_%i_%i_%i", pi.c_str(), xBin, QQBin, zBin, ipt) );
  float Msys[14];
  float Acsys[14];
  float Accsys[14];
  for(int s = 0; s < 14; s++) {
    Msys[s] = hMsys->GetBinContent(s+1);
    Acsys[s] = hAcsys->GetBinContent(s+1);
    Accsys[s] = hAccsys->GetBinContent(s+1);
    //cout << s << " " << Msys[s] << " " << Acsys[s] << " " << Accsys[s] << endl;
  }



  float M_eselection = Msys[0] + Msys[1] + Msys[2] + Msys[3] + Msys[4] + Msys[5] + Msys[6] + Msys[7];
  float M_piselection = Msys[8] + Msys[9] + Msys[10];
  float Mtotal = M_eselection + M_piselection + Msys[11] + Msys[12] + Msys[13];

  float M_eselection_frac = M_eselection/Mtotal;
  float M_piselection_frac = M_piselection/Mtotal;
  float M_acc_frac = Msys[11]/Mtotal;
  float M_rc_frac = Msys[12]/Mtotal;
  float M_sector_frac = Msys[13]/Mtotal;


  float Ac_eselection = Acsys[0] + Acsys[1] + Acsys[2] + Acsys[3] + Acsys[4] + Acsys[5] + Acsys[6] + Acsys[7];
  float Ac_piselection = Acsys[8] + Acsys[9] + Acsys[10];
  float Actotal = Ac_eselection + Ac_piselection + Acsys[11] + Acsys[12] + Acsys[13];

  float Ac_eselection_frac = Ac_eselection/Actotal;
  float Ac_piselection_frac = Ac_piselection/Actotal;
  float Ac_acc_frac = Acsys[11]/Actotal;
  float Ac_rc_frac = Acsys[12]/Actotal;
  float Ac_sector_frac = Acsys[13]/Actotal;


  float Acc_eselection = Accsys[0] + Accsys[1] + Accsys[2] + Accsys[3] + Accsys[4] + Accsys[5] + Accsys[6] + Accsys[7];
  float Acc_piselection = Accsys[8] + Accsys[9] + Accsys[10];
  float Acctotal = Acc_eselection + Acc_piselection + Accsys[11] + Accsys[12] + Accsys[13];

  float Acc_eselection_frac = Acc_eselection/Acctotal;
  float Acc_piselection_frac = Acc_piselection/Acctotal;
  float Acc_acc_frac = Accsys[11]/Acctotal;
  float Acc_rc_frac = Accsys[12]/Acctotal;
  float Acc_sector_frac = Accsys[13]/Acctotal;


  //cout << M_eselection_frac << " " << M_piselection_frac << " " << M_acc_frac << " " << M_rc_frac << " " << M_sector_frac << endl;
  //cout << Ac_eselection_frac << " " << Ac_piselection_frac << " " << Ac_acc_frac << " " << Ac_rc_frac << " " << Ac_sector_frac << endl;
  //cout << Acc_eselection_frac << " " << Acc_piselection_frac << " " << Acc_acc_frac << " " << Acc_rc_frac << " " << Acc_sector_frac << endl;

  //cout << M << "+/-" << Mstat <<  "+/-" << Msystotal << " " ;
  //cout << Ac << "+/-" << Acstat <<  "+/-" << Acsystotal << " " ;
  //cout << Acc << "+/-" << Accstat <<  "+/-" << Accsystotal << " " ;
  //cout << " (" << M_eselection_frac << "," << Ac_eselection_frac << "," << Acc_eselection_frac << ")" ;
  //cout << " (" << M_piselection_frac << "," << Ac_piselection_frac << "," << Acc_piselection_frac << ")" ;
  //cout << " (" << M_acc_frac << "," << Ac_acc_frac << "," << Acc_acc_frac << ")" ;
  //cout << " (" << M_rc_frac << "," << Ac_rc_frac << "," << Acc_rc_frac << ")" ;
  //cout << " (" << M_sector_frac << "," << Ac_sector_frac << "," << Acc_sector_frac << ")" ;
  //cout << endl;

  // if you want the transpose of this, copy and paste it into a spread sheet
  // then copy it again -> paste transpose
  cout << ipt << " " ;
  cout << fixed << setprecision(1);
  cout << M << " " << Mstat <<  " " << Msystotal << " " ;
  cout << setprecision(3);
  cout << Ac << " " << Acstat <<  " " << Acsystotal << " " ;
  cout << Acc << " " << Accstat <<  " " << Accsystotal ;
  cout << setprecision(0);
  cout << " (" << 100*M_eselection_frac << "," << 100*Ac_eselection_frac << "," << 100*Acc_eselection_frac << ")" ;
  cout << " (" << 100*M_piselection_frac << "," << 100*Ac_piselection_frac << "," << 100*Acc_piselection_frac << ")" ;
  cout << " (" << 100*M_acc_frac << "," << 100*Ac_acc_frac << "," << 100*Acc_acc_frac << ")" ;
  cout << " (" << 100*M_rc_frac << "," << 100*Ac_rc_frac << "," << 100*Acc_rc_frac << ")" ;
  cout << " (" << 100*M_sector_frac << "," << 100*Ac_sector_frac << "," << 100*Acc_sector_frac << ")" ;
  cout << endl;

}



// \begin{table}
// \begin{center}
// \begin{tabular}{ |c|c|c| }
//   \hline
//   $P_{h\perp}^2$ $\text{GeV}^2$ & 0.45 - 0.5 & 0.5 - 0.55 \\
//   \hline
//   $A_0$ & 857.296 & 10 \\
//   \hline
//   $A_0$ stat. err. & 13.44 & 10 \\
//   \hline
//   $A_0$ sys. err. & 122.43 & 10 \\
//   \hline
// \end{tabular}
// \end{center}
// \caption{A table o data}
// \label{tab:A0AcAcc_PT2bins_x1QQ1z8}
// \end{table}



}

