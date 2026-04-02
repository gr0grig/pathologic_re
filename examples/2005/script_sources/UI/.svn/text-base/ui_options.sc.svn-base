include ui_load_save_base.sci

const string c_strVideoWnd = "video";
const string c_strAudioWnd = "audio";
const string c_strControlsWnd = "controls";

const string c_strGammaScrollbarWnd = "gamma_scrollbar";
const string c_strShadowsCheckboxWnd = "shadow_check";
const string c_strApplyButtonWnd = "apply";
const string c_strMasterScrollbarWnd = "master_scrollbar";
const string c_strMusicScrollbarWnd = "music_scrollbar";
const string c_strVoiceScrollbarWnd = "voice_scrollbar";
const string c_strSoundsScrollbarWnd = "sounds_scrollbar";
const string c_strSensivityScrollbarWnd = "sensivity_scrollbar";
const string c_strInvertMouseCheckboxWnd = "invert_mouse_check";

const int c_iVideo = 0;
const int c_iAudio = 1;
const int c_iControls = 2;

// gamma
const float c_fGammaMin = 0.5;
const float c_fGammaMax = 3.0;

// sensivity
const float c_fSensivityMin = 0.1;
const float c_fSensivityMax = 5.0;

maintask UI_Options
{
	var object wndBorder, wndCurrentPage;
	var int iSelectedCategory;
	
	var float fGamma, fVolMaster, fVolMusic, fVolVoice, fVolSounds, fSensivity;
	var float fInitialGamma, fInitialMaster, fInitialMusic, fInitialVoice, fInitialSounds, fInitialSensivity;
	var bool bShadows, bInvertMouse;
	var bool bInitialShadows, bInitialInvertMouse;
	
	void init(void) {
		LoadParameters();
		@CreateWindow("options_border.xml", false, wndBorder);
		iSelectedCategory = -1;
		UpdateTabButtons(c_iVideo);
		@CaptureKeyboard();
		@ProcessEvents();
	}
	

	void OnChar(int wChar) {
		ReturnParameters();
		@SendMessageToParent(1);
	}	
	
	int GammaToScroll(float fGamma) {
		return 100 * (fGamma - c_fGammaMin) / (c_fGammaMax - c_fGammaMin);
	}
	
	float ScrollToGamma(int iScroll) {
		return c_fGammaMin + (c_fGammaMax - c_fGammaMin) * iScroll / 100;
	}
	
	int SensivityToScroll(float fSensivity) {
		return 100 * (fSensivity - c_fSensivityMin) / (c_fSensivityMax - c_fSensivityMin);
	}
	
	float ScrollToSensivity(int iScroll) {
		return c_fSensivityMin + (c_fSensivityMax - c_fSensivityMin) * iScroll / 100;
	}	
	
	void LoadParameters() {
		@GetGammaCorrection(fGamma);
		fInitialGamma = fGamma;
		@IsShadowsEnabled(bInitialShadows);
		bShadows = bInitialShadows;
		
		@GetVolMaster(fVolMaster);
		fInitialMaster = fVolMaster;
		@GetVolMusic(fVolMusic);
		fInitialMusic = fVolMusic;
		@GetVolVoice(fVolVoice);
		fInitialVoice = fVolVoice;
		@GetVolSounds(fVolSounds);
		fInitialSounds = fVolSounds;
		
		@GetMouseSensivity(fInitialSensivity);
		fSensivity = fInitialSensivity;
		@IsMouseInverted(bInitialInvertMouse);
		bInvertMouse = bInitialInvertMouse;
	}
	
	void ApplyParameters() {
		@SetGammaCorrection(fGamma);
		@EnableShadows(bShadows);
		
		@SetVolMaster(fVolMaster);
		@SetVolMusic(fVolMusic);
		@SetVolVoice(fVolVoice);
		@SetVolSounds(fVolSounds);
		
		@SetMouseSensivity(fSensivity);	
		@InvertMouse(bInvertMouse);
		
		@SaveConfig();
		@WriteBinds();
	}
	
	void ReturnParameters() {
		@SetGammaCorrection(fInitialGamma);
		@EnableShadows(bInitialShadows);
		@SetVolMaster(fInitialMaster);
		@SetVolMusic(fInitialMusic);
		@SetVolVoice(fInitialVoice);
		@SetVolSounds(fInitialSounds);
		@SetMouseSensivity(fInitialSensivity);	
		@InvertMouse(bInitialInvertMouse);
	}
	
	void RestoreParameters(int iCategory) {
		if (iCategory == c_iVideo) {
			@SendMessage(GammaToScroll(fGamma), c_strGammaScrollbarWnd);
			@SendMessage(bShadows ? 1 : 0, c_strShadowsCheckboxWnd);
		}
		else 
		if (iCategory == c_iAudio) {
			@SendMessage(100 * fVolMaster, c_strMasterScrollbarWnd);
			@SendMessage(100 * fVolMusic, c_strMusicScrollbarWnd);
			@SendMessage(100 * fVolVoice, c_strVoiceScrollbarWnd);
			@SendMessage(100 * fVolSounds, c_strSoundsScrollbarWnd);
		}
		else 
		if (iCategory == c_iControls) {
			@SendMessage(SensivityToScroll(fSensivity), c_strSensivityScrollbarWnd);
			@SendMessage(bInvertMouse ? 1 : 0, c_strInvertMouseCheckboxWnd);
		}
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "key_form") {
			// restoring input
			@CaptureKeyboard();
		}
		else
		if (strSender == c_strApplyButtonWnd) {
			disable OnMessage;
			ApplyParameters();
			@SendMessageToParent(1);
		}
		else
		if (strSender == c_strVideoWnd) {
			UpdateTabButtons(c_iVideo);
			return;
		}
		else
		if (strSender == c_strAudioWnd) {
			UpdateTabButtons(c_iAudio);
			return;
		}
		else
		if (strSender == c_strControlsWnd) {
			UpdateTabButtons(c_iControls);
			return;
		}
		
		if (iSelectedCategory == c_iVideo) {
			if (strSender == c_strGammaScrollbarWnd) {
				fGamma = ScrollToGamma(iMessage);
				@SetGammaCorrection(fGamma);
			}
			else 
			if (strSender == c_strShadowsCheckboxWnd) {
				bShadows = (iMessage != 0);
			}
		}
		else
		if (iSelectedCategory == c_iAudio) {
			if (strSender == c_strMasterScrollbarWnd) {
				fVolMaster = iMessage / 100.0;
				@SetVolMaster(fVolMaster);
			}
			else 
			if (strSender == c_strMusicScrollbarWnd) {
				fVolMusic = iMessage / 100.0;
				@SetVolMusic(fVolMusic);
			}
			else 
			if (strSender == c_strVoiceScrollbarWnd) {
				fVolVoice = iMessage / 100.0;
				@SetVolVoice(fVolVoice);
			}
			else 
			if (strSender == c_strSoundsScrollbarWnd) {
				fVolSounds = iMessage / 100.0;
				@SetVolSounds(fVolSounds);
			}
		}
		else 
		if (iSelectedCategory == c_iControls) {
			if (strSender == c_strSensivityScrollbarWnd) {
				fSensivity = ScrollToSensivity(iMessage);
			}
			else 
			if (strSender == c_strInvertMouseCheckboxWnd) {
				bInvertMouse = (iMessage != 0);
			}	
		}		
	}
	
	void UpdateTabButtons(int iCategory)
	{
		if (iSelectedCategory == iCategory)
			return;
		iSelectedCategory = iCategory;
		
		if (wndCurrentPage)
			wndCurrentPage->DestroyWindow();
			
		if (iCategory == c_iVideo) {
			@CreateWindow("video_page.xml", false, wndCurrentPage);
			@SendMessage(1, c_strVideoWnd);
			@SendMessage(0, c_strAudioWnd);
			@SendMessage(0, c_strControlsWnd);
		}
		else 
		if (iCategory == c_iAudio) {
			@CreateWindow("audio_page.xml", false, wndCurrentPage);
			@SendMessage(0, c_strVideoWnd);
			@SendMessage(1, c_strAudioWnd);
			@SendMessage(0, c_strControlsWnd);
		}
		else
		if (iCategory == c_iControls) {
			@SendMessage(0, c_strVideoWnd);
			@SendMessage(0, c_strAudioWnd);
			@SendMessage(1, c_strControlsWnd);
			@CreateWindow("control_page.xml", false, wndCurrentPage);
		}
		
		RestoreParameters(iCategory);
	}	
}
