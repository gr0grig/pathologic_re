include ui_std.sci
include player_base.sci

const float c_fMaxSleepTime = 6;

maintask UI_Dream
{
	var bool m_bSleeping;
	var float m_fSleepTime, m_fInitSleepTime;

	void init(void) {
		@CaptureKeyboard();
		
		m_fInitSleepTime = c_fMaxSleepTime;
		m_bSleeping = false;
		
		UpdateStats();
		@SendMessage(100 * m_fInitSleepTime / c_fMaxSleepTime, "dream_progress");
		
		// text messages
		@SendMessage(c_iTID_PD_Health, "health_text");
		@SendMessage(c_iTID_PD_Immunity, "immunity_text");
		@SendMessage(c_iTID_PD_Hunger, "hunger_text");
		@SendMessage(c_iTID_PD_Tiredness, "tiredness_text");
		@SendMessage(c_iTID_PD_Infection, "infection_text");
		
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@CaptureKeyboard();
		@ProcessEvents();
	}
	
	void OnDestroyWindow() {
		object player;
		@GetPlayer(player);
		player->SetProperty("sleeping", false);
		
		object data;
		@CreateFloatVector(data);
		data->add(0);
		@SendWorldWndMessage(c_iWM_PlayerTirednessChange, data);
		@SendWorldWndMessage(c_iWM_PlayerHungerChange, data);
		@SendWorldWndMessage(c_iWM_PlayerImmunityChange, data);
		@SendWorldWndMessage(c_iWM_PlayerDiseaseChange, data);
		@SendWorldWndMessage(c_iWM_PlayerHealthChange, data);
		@SendWorldWndMessage(c_iWM_PlayerReputationChange, data);
	}
	
	void StartSleeping() {
		object player;
		@GetPlayer(player);
		player->SetProperty("sleeping", true);
		@BeginPlayerUpdate();
		m_fSleepTime = 0;
	}
	
	void UpdateGameTime() {
		// TEST ME (commented)
		//float fTimeScale;
		//@GetGameTimeScale(fTimeScale);
		//@AdvanceGameTime(m_fSleepTime * fTimeScale * c_fSleepTimeScale);
	}
	
	void UpdateStats() {
		float fVal;
		@GetPlayerHealth(fVal);
		@SendMessage(100 * fVal, "health");
		
		if (fVal <= 0) {
			UpdateGameTime();
			@DestroyWindow();
			return;
		}
		
		@GetPlayerImmunity(fVal);
		@SendMessage(100 * fVal, "immunity");
		
		@GetPlayerHunger(fVal);
		@SendMessage(100 * fVal, "hunger");
		
		@GetPlayerTiredness(fVal);
		@SendMessage(100 * fVal, "tiredness");
		
		@GetPlayerDisease(fVal);
		@SendMessage(100 * fVal, "infection");
	}
	
	void OnUpdate(float fDeltaTime) 
	{
		if (!m_bSleeping)
			return;
			
		float fTimeScale;
		@GetGameTimeScale(fTimeScale);
		// TEST ME
		@AdvanceGameTime(fDeltaTime * fTimeScale * c_fSleepTimeScale);
			
		UpdateStats();
		m_fSleepTime += fDeltaTime;
		
		if (c_fSleepTimeScale * m_fSleepTime * fTimeScale > m_fInitSleepTime) {
			UpdateGameTime();
			@DestroyWindow();
		}
		
		int iProgress = 100 * (m_fInitSleepTime - c_fSleepTimeScale * m_fSleepTime * fTimeScale) / c_fMaxSleepTime;
		@SendMessage(iProgress, "dream_progress");
	}
	
	void OnChar(int wChar)
	{
		if (m_bSleeping) {
			UpdateGameTime();
		}	
		@DestroyWindow();
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "dream_button") {
			if (m_bSleeping) {
				UpdateGameTime();
				@DestroyWindow();
			}
			else {
				m_bSleeping = true;
				StartSleeping();
			}
		}
		else if (strSender == "button_plus") {
			if (m_bSleeping) return;
		
			m_fInitSleepTime += 1;
			if (m_fInitSleepTime > c_fMaxSleepTime) {
				m_fInitSleepTime = c_fMaxSleepTime;
			}
			else {
				int iTime = m_fInitSleepTime / 1;
				m_fInitSleepTime = iTime * 1;
			}
			@SendMessage(100 * m_fInitSleepTime / c_fMaxSleepTime, "dream_progress");
		}
		else if (strSender == "button_minus") {
			if (m_bSleeping) return;
			
			m_fInitSleepTime -= 1;
			if (m_fInitSleepTime < 1) {
				m_fInitSleepTime = 1;
			}
			else {
				int iTime = m_fInitSleepTime / 1;
				m_fInitSleepTime = iTime * 1;
			}	
			@SendMessage(100 * m_fInitSleepTime / c_fMaxSleepTime, "dream_progress");
		}
	}
}
