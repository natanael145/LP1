class sapo {
	private:
		int id;
		int chegouprimeiro;		
		int distpercorrida;
		int qtPulos;
		
	public:
		static int distTotal;
		static int getdistTotal();
		sapo();
		void setChegouPrimeiro(int winner);		
		int getChegouPrimeiro();
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
		void printavencedor();	
		void pular(sapo *sapos);
	};
