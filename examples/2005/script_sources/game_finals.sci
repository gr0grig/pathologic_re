include std.sci
include game_ext.sci

const int c_iFinalNeutral = 0;
const int c_iFinalTermits = 1;
const int c_iFinalUtopists = 2;
const int c_iFinalSmirenniks = 3;
const int c_iFinalEmpty = 4;

void SetFinal(int iFinal) {
	@SetVariable("game_final", iFinal);
}

int GetFinal(void) {
	int iFinal;
	@GetVariable("game_final", iFinal);
	return iFinal;
}

void PlayFinalMovie(void) {

	RegisterGameCompletion();

	int iPlayer = GetPlayer();
	int iFinal = GetFinal();
	bool bChilds = false;
	bool bTheater = false;
	
	if (iPlayer == c_iBranchDanko) {
		int iVal;
		@GetVariable("d12q01ChildsAreVisited", iVal);
		bChilds = (iVal != 0);
		@GetVariable("d12q01TheaterIsVisited", iVal);
		bTheater = (iVal != 0);
	}
	else
	if (iPlayer == c_iBranchBurah) {
		int iVal;
		@GetVariable("b12q01ChildsAreVisited", iVal);
		bChilds = (iVal != 0);
		@GetVariable("b12q01TheaterIsVisited", iVal);
		bTheater = (iVal != 0);
	}
	else
	if (iPlayer == c_iBranchKlara) {
		int iVal;
		@GetVariable("k12q01ChildsAreVisited", iVal);
		bChilds = (iVal != 0);
		@GetVariable("k12q01TheaterIsVisited", iVal);
		bTheater = (iVal != 0);
	}
			
	bool bMyFinal = false;
	if ((iPlayer == c_iBranchDanko) && (iFinal == c_iFinalUtopists))
		bMyFinal = true;
		
	if ((iPlayer == c_iBranchBurah) && (iFinal == c_iFinalTermits))
		bMyFinal = true;

	if ((iPlayer == c_iBranchKlara) && (iFinal == c_iFinalSmirenniks))
		bMyFinal = true;

	bool bChudo = false;
	if ((iFinal == c_iFinalEmpty) && (!bChilds) && (!bTheater))
		bChudo = true;
		
	if ((!bMyFinal) && (bChilds) && (!bTheater))
		bChudo = true;

	if ((bMyFinal) && (bChilds) && (bTheater))
		bChudo = true;
	
	@Trace("PlayFinalMovie");
	if (GetFinal() == c_iFinalTermits) {
		@Trace("fin_termit");
		if (bChudo)
			@GameOver("gameover_termit_chudo.xml");
		else
			@GameOver("gameover_termit.xml");
	}
	else
	if (GetFinal() == c_iFinalUtopists) {
		@Trace("fin_utop");
		if (bChudo)
			@GameOver("gameover_utopist_chudo.xml");
		else
			@GameOver("gameover_utopist.xml");
	}
	else
	if (GetFinal() == c_iFinalSmirenniks) {
		@Trace("fin_smiren");
		if (bChudo)
			@GameOver("gameover_smirennik_chudo.xml");
		else
			@GameOver("gameover_smirennik.xml");
	}
	else {
		@Trace("fin_beda");
		if (bChudo)
			@GameOver("gameover_beda_chudo.xml");
		else
			@GameOver("gameover_beda.xml");
	}
}