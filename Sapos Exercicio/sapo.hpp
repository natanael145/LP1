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
		int setID(int numid);
		int getID();		
		void atribuiID(sapo *sapos);		
		void IncNumPulos();
		int getnumPulos();
		void startcorrida(sapo *sapos);
		int *valordospulos = new int[sapo::distTotal];
		bool existe(int v,sapo *sapos);
		void infos(sapo *sapos);	
		void vervencedor(sapo *sapos);	
		void printavencedor(int vencedor_);	
	};
