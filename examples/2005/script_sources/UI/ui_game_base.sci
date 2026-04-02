include ui_std.sci
include ui_video.sci
include ui_text_res.sci
include ui_keys.sci
include ../game_ext.sci

const int c_iDankoNameID = 1;

const int c_iDanko = 1;
const int c_iBurah = 2;
const int c_iKlara = 3;
const int c_iLoad = 4;
const int c_iSave = 5;
const int c_iContinue = 6;
const int c_iNewGame = 7;
const int c_iCredits = 8;

task UI_GameBase
{
	// ABSTRACT 
	//object CreateMenuButtons(void) = 0;
	
	var int xsize, ysize;
	var int iGameStart;
	var object wndButtons, wndLogo, wndPers, wndLoad, wndSave, wndOptions, save_object;
	var string strLoadFile;
	
	object CreateLogo(void) {
		object wnd;
		@CreateWindow("game_logo.xml", false, wnd);
		return wnd;
	}
	
	void init(bool bPersonageMode) {
		@CaptureKeyboard();
		iGameStart = 0;
		@GetWindowSize(xsize, ysize);
		@SetCursor("default");
		@SetBackground("default");
		
		@PlaySound("menumusic");
		@ShowCursor(true);
		
		if (bPersonageMode) {
			@CreateWindow("game_choose_pers.xml", false, wndPers);
		}
		else {
			wndButtons = CreateMenuButtons();
			wndLogo = CreateLogo();
		}
		
		while (!iGameStart) {
			@ProcessEvents();
		}
		
		WindowCleanup();
		
		if (iGameStart == c_iDanko) {
			@PauseSound("menumusic");
			TIntro{c_iDanko};
			TVideo{"intro_danko.wmv", true};
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_danko.xml", "player_danko.xml");
		}
		else
		if (iGameStart == c_iBurah) {
			@PauseSound("menumusic");
			TIntro{c_iBurah};
			TVideo{"intro_burah.wmv", true};
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
		}
		else
		if (iGameStart == c_iKlara) {
			@PauseSound("menumusic");
			TIntro{c_iKlara};
			TVideo{"intro_klara.wmv", true};
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_klara.xml", "player_klara.xml");
		}
		else 
		if (iGameStart == c_iLoad) {
			@PauseSound("menumusic");
			@Trace("Loading : " + strLoadFile);
			@RemoveWorld();
			@UISync();		
			@DestroyWindow();
			bool bSuccess;
			@LoadGame(bSuccess, strLoadFile);
		}
		else 
		if (iGameStart == c_iSave) {
			if (!save_object) {
				bool bSuccess;
				@DestroyWindow();
				@SaveGame(bSuccess);
			}
			else {
				@DestroyWindow();
				bool bSuccess;
				string file;
				save_object->GetFileName(file);
				@SaveGame(bSuccess, file);
			}
		}
		else 
		if (iGameStart == c_iNewGame) {
			@RemoveWorld();
			@UISync();		
			@DestroyWindow();
			@NewGame("world_intro.xml", "player_intro.xml");
			//@NewGame("world_final.xml", "player_final.xml");
		}
	}
	
	void OnChar(int wChar) {
		if (wChar == VK_ESCAPE) {
			WindowToInitialState();
		}
	}
		
	void OnMessage(int iMessage, string strSender, object data) {
		//@Trace("Message from: " + strSender + " imessage = " + iMessage);
		if (strSender == "newgame") {
			iGameStart = c_iNewGame;
			@StopEventProcessing();
		}
		else
		if (strSender == "quitgame") {
			@UITrace("Quit game");
			@Quit();
			return;
		}
		else
		if (strSender == "loadgame") {
			WindowCleanup();
			@CreateWindow("load.xml", false, wndLoad);
			return;
		}
		else
		if (strSender == "savegame") {
			WindowCleanup();
			@CreateWindow("save.xml", false, wndSave);
			return;
		}
		else		
		if (strSender == "gameoptions") {
			WindowCleanup();
			@CreateWindow("options.xml", false, wndOptions);
			return;
		}
		else
		if (strSender == "continue") {
			iGameStart = c_iContinue;
			@StopEventProcessing();		
			return;
		}
		else
		if (strSender == "credits") {
			WindowCleanup();
			TIntro{c_iCredits};
			wndButtons = CreateMenuButtons();
			wndLogo = CreateLogo();
			@ShowCursor(true);
		}
		else
		if (strSender == "danko") {
			if (iMessage == 0) {
				iGameStart = c_iDanko;
				@StopEventProcessing();
			}
			else if (iMessage == 1) {
				@SendMessage(c_iTID_DankoDescName, "player_name");
				@SendMessage(c_iTID_DankoDesc, "player_desc");
			}
			else if (iMessage == 2) {
				@SendMessage(-1, "player_name");
				@SendMessage(-1, "player_desc");
			}	
			return;
		}
		else
		if (strSender == "burah") {
			if (iMessage == 0) {
				iGameStart = c_iBurah;
				@StopEventProcessing();
			}
			else if (iMessage == 1) {
				@SendMessage(c_iTID_BurahDescName, "player_name");
				@SendMessage(c_iTID_BurahDesc, "player_desc");
			}
			else if (iMessage == 2) {
				@SendMessage(-1, "player_name");
				@SendMessage(-1, "player_desc");
			}			
			return;
		}
		else
		if (strSender == "klara") {
			//if (!IsDankoCompletionRegistered() && !IsBurahCompletionRegistered())
				//return;
				
			if (iMessage == 0) {
				iGameStart = c_iKlara;
				@StopEventProcessing();
			}
			else if (iMessage == 1) {
				@SendMessage(c_iTID_KlaraDescName, "player_name");
				@SendMessage(c_iTID_KlaraDesc, "player_desc");
			}
			else if (iMessage == 2) {
				@SendMessage(-1, "player_name");
				@SendMessage(-1, "player_desc");
			}
			return;
		}	
		else 
		if (strSender == "load") {
			if (iMessage == 0) {
				iGameStart = c_iLoad;
				data->GetFileName(strLoadFile);
				@StopEventProcessing();
			}
			else {
				WindowToInitialState();
			}
			return;
		}	
		else 
		if (strSender == "save") {
			if (iMessage == 0) {
				iGameStart = c_iSave;
				save_object = data;
				@StopEventProcessing();
			}
			else {
				WindowToInitialState();
			}
			return;
		}	
		else		
		if (strSender == "options") {
			WindowToInitialState();
			return;
		}
	}
	
	void WindowToInitialState() {
		WindowCleanup();
		wndButtons = CreateMenuButtons();
		wndLogo = CreateLogo();
	}
	
	void WindowCleanup() {
		if (wndButtons)
			wndButtons->DestroyWindow();
		if (wndLogo)
			wndLogo->DestroyWindow();
		if (wndPers)
			wndPers->DestroyWindow();
		if (wndLoad)
			wndLoad->DestroyWindow();
		if (wndSave)
			wndSave->DestroyWindow();
		if (wndOptions)
			wndOptions->DestroyWindow();
		@CaptureKeyboard();
	}
}

task TIntro {
	var object wndIntro;
	void init(int iPlayer) {
		@CreateWindow("intro.xml", false, wndIntro);
		@SendMessage(iPlayer, "intro");
		@ProcessEvents();
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "intro") {
			wndIntro->DestroyWindow();
			@StopEventProcessing();
		}	
	}
}