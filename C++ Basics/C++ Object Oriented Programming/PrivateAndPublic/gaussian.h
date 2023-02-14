class Gaussian
{

	public:

		float mu, sigma2;
		
		// constructor functions
		Gaussian ();
		Gaussian (float, float);

		// functions to evaluate 
		float evaluate (float);
		Gaussian mul (Gaussian);
		Gaussian add (Gaussian);
};