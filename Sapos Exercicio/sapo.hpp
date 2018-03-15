class sapo {
	private:
		int id;
		int distInicial = 0;		
		int distpercorrida;
		int qtPulos;
	public:
		static int distTotal;
		static int getdistTotal();
		int getdistInicial();
		void setDistPercorrida(int d);
		int getDistPercorrida();
		int IncNumPulos();
		int numPulos();
		void pulo();
	
	};
