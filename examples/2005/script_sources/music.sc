include std.sci
include citymanager_base.sci

string ChooseRandomAgress(string cat) {
	int iCount;
	for (iCount = 0; ; ++iCount) {
		bool bHas;
		@HasMusicValue(bHas, cat, "agressive" + (iCount + 1));
		if (!bHas)
			break;
	}
	if (iCount) {
		int iMusic;
		@irand(iMusic, iCount);
		string music;
		@GetMusicValue(music, cat, "agressive" + (iMusic + 1));
		return music;
	}
	return "";
}

maintask TMusicPlayer
{
	var string m_strCategory;
	var string m_strCurMusic;
	var string m_strAgressMusic;

	void init(void) {
		@sync();
		@SetTimer(0, 15);
		for (;;) {
			if (PlayMusic(false)) {
				@WaitForMusicEnd1();
			}
			else {
				@Sleep(1);
			}
		}
	}
	
	void OnTimer(int id) {
		if (id == 0) {
			@Trace("Music time limit reached");
			if (m_strCurMusic != "") {
				string cat = GetCategory();
				if (m_strCategory == cat) {
					if (CurrentMusicInSet(cat))
						return;
				}
				else if (m_strCategory != "horror" && cat != "horror") {
					if (CurrentMusicInSet(cat))
						return;
				}
				PlayMusic(true);
			}
		}
	}
	
	string GetCategory(void) {
		bool bHas;
		@HasMusicAttribute(bHas, "id");
		if (bHas) {
			string IdString;
			@GetMusicAttribute(IdString, "id");
			int id;
			@_strtoi(id, IdString);
			int iState;
			@GetVariable(GetRegionStateName(id - 1), iState);
			iState &= 3;
			if (iState == c_iRegionDiseased || iState == c_iRegionClosed) {
				return "horror";
			}
			else {
				float fTime;
				@GetGameTime(fTime);
				fTime %= 24;
				return (fTime >= 9 && fTime <= 19)? "day" : "night";
			}
		}
		return "general";
	}

	bool PlayMusic(bool bSwitch) {
		m_strCategory = GetCategory();
		bool bHas;
		@HasMusicValue(bHas, m_strCategory, "music");
		if (bHas) {
			string music;
			@GetMusicValue(music, m_strCategory, "music");
			PlayMusic(m_strCategory, music, bSwitch);
			return true;
		}
		PlayMusic(m_strCategory, "", bSwitch);
		return false;
	}
	
	void PlayMusic(string cat, string music, bool bSwitch) {
		m_strCurMusic = music;
		if (music != "") {
			@Trace("Playing: '" + music + "' from category: " + cat);
			if (bSwitch)
				@SwitchMusic1(music);
			else
				@PlayMusic1(music);
		}

		m_strAgressMusic = ChooseRandomAgress(cat);
		@Trace("Chosen agressive: " + m_strAgressMusic);
	}
	
	bool CurrentMusicInSet(string cat) {
		bool bHas;
		@HasMusicValue(bHas, cat, "music");
		if (bHas) {
			string music;
			@GetMusicValue(music, cat, "music");
			return m_strCurMusic == music;
		}
		return false;
	}
	
	void CancelActivity(void) {
		@KillTimer(0);
	}
	
	void OnMusicChange(string type) {
		if (type == "attack") {
			if (m_strAgressMusic != "") {
				CancelActivity();
				TAttackMode{m_strAgressMusic};
				@SetTimer(0, 15);
			}
		}
		else {
			CancelActivity();
			TForcedMusic{type};
		}
	}
	
	void OnRegionChange(void) {
		if (!CurrentMusicInSet(GetCategory())) {
			@StopMusic1();
		}
	}
}

task TAttackMode
{
	var bool m_bStop;
	var object m_CurScene;

	void init(string music) {
		@SetTimer(1, 10);
		m_bStop = false;
		@GetActiveScene(m_CurScene);
		@SwitchMusic1(music, true);
		@WaitForMusicEnd1();
		while (!m_bStop) {
			@PlayMusic1(music, true);
			@WaitForMusicEnd1();
		}
	}

	void OnMusicChange(string type) {
		if (type == "attack") {
			@SetTimer(1, 10);
			m_bStop = false;
		}
		else if (type != "") {
			CancelActivity();
			TForcedMusic{type};
		}
	}
	
	void OnTimer(int id) {
		if (id == 1) {
			@FadeMusic1(2);
			@KillTimer(1);
			m_bStop = true;
		}
	}
	
	void CancelActivity(void) {
		m_bStop = true;
		@KillTimer(1);
	}

	void OnRegionChange(void) {
		object scene;
		@GetActiveScene(scene);
		if (m_CurScene != scene) {
			m_bStop = true;
			@StopMusic1();
		}
	}
}

task TForcedMusic
{
	void init(string music) {
		@PlayMusic1(music);
		@WaitForMusicEnd1();
	}

	void OnMusicChange(string type) {
		if (type == "") {
			@FadeMusic1(1);
		}
	}
}
