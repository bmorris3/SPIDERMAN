double **generate_planet(int n_layers);
void map_model(double **planet,int n_layers,double lambda0, double phi0, double u1, double u2,int brightness_model,double *brightness_params,double **bb_g);
double *call_map_model(double la,double lo,double lambda0, double phi0,int brightness_model,double *brightness_params,double **bb_g,int make_grid, double theta1, double theta2, double r1, double r2);