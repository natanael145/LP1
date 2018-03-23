class sapo {
	private:
		int id;
		int distpercorrida;
		int qtPulos;
		
	public:
		static int distTotal;
		static int getdistTotal();
		sapo();
		sapo(int sapoID);
		void setDistPercorrida(int d);
		int getDistPercorrida();
		int getID();				
		void IncNumPulos();
		int getnumPulos();
		int *valordospulos = new int[sapo::distTotal];
		bool existe(int v,sapo *sapos);
		void infos(sapo *sapos);			
		void pular(sapo *sapos);
	};
