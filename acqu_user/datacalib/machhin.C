void machhin(){
   
  FILE* File1;
  FILE* File2;
  char Line0[1024];
  char Line1[1024];

  File1 = fopen("/home/wettig/acqu/acqu_user/datacalib/CB_NaI_uncal.dat","r");
  File2 = fopen("/home/wettig/acqu/acqu_user/datacalib/CB_NaI_uncal_neu.dat","w");
  fclose(File2);
   
  for(Int_t t=0; t<2283; t++){
        
    fgets(&Line0[0], 1023, File1);
    fgets(&Line1[0], 1023, File1);
        
    File2 = fopen("/home/wettig/acqu/acqu_user/datacalib/CB_NaI_uncal_neu.dat","a");
    fprintf(File2,"%s", Line0);
    fclose(File2);
  }
 
}

