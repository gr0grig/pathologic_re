include ui_events.sci
include ui_std.sci

const float c_fRepThreshold = 0.3;
const float c_fPeriod = 4.0;
const int c_iPeriodCount = 1;
const float c_fHelpTime = 1.0;
const float c_fPropPeriod = 2.0;

const int c_iMail		= 2;
const int c_iDiary		= 3;
const int c_iRepUp		= 4;
const int c_iRepDown	= 5;

const float c_fHelpColR = 1.0;
const float c_fHelpColG = 1.0;
const float c_fHelpColB = 1.0;

const float c_fAmountColR = 1.0;
const float c_fAmountColG = 1.0;
const float c_fAmountColB = 1.0;

int GetVisirCharge(void) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return 0;
	
	int iCharge;
	player->GetProperty("vcharge", iCharge);
	return iCharge;
}

bool IsVisirOn(void) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return false;
	
	bool bOn;
	player->IsVisirOn(bOn);
	return bOn;
}

int GetVisirLevel(void) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return 0;
	
	int iLevel;
	player->GetProperty("visir", iLevel);
	return iLevel;
}

bool IsPlayerHandsOn(void) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return false;
	
	bool bHolster;
	player->IsWeaponHolstered(bHolster);
	return !bHolster;
}

float GetPlayerWalkDistance(void) {
	object player;
	@FindActor(player, "player");
	if (!player)
		return 0;
	
	bool bHas;
	player->HasProperty("walk_distance", bHas);
	if (!bHas)
		return 0;
	
	int iDist;
	player->GetProperty("walk_distance", iDist);
	return iDist / 1000.0;
	
}

maintask UI_PlayerStat
{
	var object wndVisir, wndDC, images;
	var object play_list, play_list_time, dc_play_list;
	var object add_play_list, add_play_list_amount, add_play_list_time, images;
	var int iHelpTextID;
	var float fHelpTextTime;
	var int iWindowSizeX, iWindowSizeY;
	var object properties, values, new_values, prop_times, prop_ampl, prop_inv;
	
	void init(void) {
		disable OnGameMessage;
		
		@GetWindowSize(iWindowSizeX, iWindowSizeY);
		iHelpTextID = -1;
		
		if (IsVisirOn()) {
			@CreateWindow("visir.xml", false, wndVisir);
			@SendMessage(GetVisirCharge(), "charge");
			UpdateVisirLevel();		
		}
		
		@CreateIntVector(dc_play_list);
		@CreateStringVector(images);
		@CreateIntVector(play_list);
		@CreateFloatVector(play_list_time);
		@CreateIntVector(add_play_list);
		@CreateIntVector(add_play_list_amount);
		@CreateFloatVector(add_play_list_time);

		disable OnUpdate;
		disable OnDraw;
		while (true) { // waiting player to init
			object player;
			@FindActor(player, "player");
			if (player)
				break;
			@UISync();
		}
		enable OnUpdate;
		enable OnDraw;
		
		InitNervobars();
		
		enable OnGameMessage;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void AddDCPlayListEntry(int iCommand) {
		dc_play_list->add(iCommand);
		int iSize;
		dc_play_list->size(iSize);
		for (int i = 0; i < iSize - 1; ++i) {
			int iVal;
			dc_play_list->get(iVal, i);
			if (iVal == iCommand) {
				dc_play_list->remove(i);
				return;
			}
		}
	}
	
	void RemoveDCPlayListEntry(void) {
		dc_play_list->remove(0);
	}

	
	void AddPlayListEntry(int iCommand) {
		int iSize;
		play_list->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iPCommand;
			play_list->get(iPCommand, i);
			if (iCommand == iPCommand) {
				play_list_time->set(i, c_fPeriod * c_iPeriodCount);
				return;
			}
		}
	
		play_list->add(iCommand);
		play_list_time->add(c_fPeriod * c_iPeriodCount);
	}
	
	void RemovePlayListEntry(void) {
		play_list->remove(0);
		play_list_time->remove(0);
	}
	
	void UpdatePlayList(float fDeltaTime) {
		int iSize;
		play_list->size(iSize);
		if (!iSize)
			return;
			
		float fTime;
		play_list_time->get(fTime, 0);
		fTime -= fDeltaTime;
		if (fTime > 0)
			play_list_time->set(0, fTime);
		else
			RemovePlayListEntry();
	}
	
	void DrawPlayList(void) {
		int iSize;
		play_list->size(iSize);
		if (!iSize)
			return;
		
		int iCommand;
		play_list->get(iCommand, 0);
		float fTime;
		play_list_time->get(fTime, 0);
		float fAngle = 3.1415 * 2.0 * fTime / c_fPeriod;
		
		if (iCommand == c_iMail) {
			@Blit("mail", 20, iWindowSizeY - 130, 0.5 - 0.5 * cos(fAngle));
		}
		else
		if (iCommand == c_iDiary) {
			@Blit("diary", 20, iWindowSizeY - 130, 0.5 - 0.5 * cos(fAngle));
		}
		else
		if (iCommand == c_iRepUp) {
			@Blit("rep_up", 20, iWindowSizeY - 100, 0.5 - 0.5 * cos(fAngle));
		}
		else
		if (iCommand == c_iRepDown) {
			@Blit("rep_down", 20, iWindowSizeY - 100, 0.5 - 0.5 * cos(fAngle));
		}
	}
	
	// add playlist
	void AddAddPlayListEntry(int iItemID, int iItemAmount) {
		add_play_list->add(iItemID);
		add_play_list_amount->add(iItemAmount);
		add_play_list_time->add(c_fPeriod);
		
		string strImage;
		@GetInvItemSprite(strImage, iItemID);
		@LoadImage(strImage);
		images->add(strImage);
	}	
	
	void RemoveAddPlayListEntry(int i) {
		add_play_list->remove(i);
		add_play_list_time->remove(i);
		add_play_list_amount->remove(i);
	}	
	
	void UpdateAddPlayList(float fDeltaTime) {
		int iSize;
		add_play_list->size(iSize);
		if (!iSize)
			return;
			
		for (int i = 0; i < iSize; ++i) {
			float fTime;
			add_play_list_time->get(fTime, i);
			fTime -= fDeltaTime;
			if (fTime > 0)
				add_play_list_time->set(i, fTime);
			else {
				RemoveAddPlayListEntry(i);
				iSize--; i--;
			}
		}
		
		if (iSize == 0) {
			int iSize;
			images->size(iSize);
			for (int i = 0; i < iSize; ++i) {
				string strName;
				images->get(strName, i);
				@ReleaseImage(strName);
			}
			images->clear();		
		}
	}	
	
	void UpdateDCPlayList(float fDeltaTime) {
		int iSize;
		dc_play_list->size(iSize);
		if (!iSize)
			return;
		
		if (wndDC)
			return;
			
		int iEntry;
		dc_play_list->get(iEntry, 0);
		
		if (iEntry == c_iWM_DayChange) {
			@CreateWindow("daychange.xml", false, wndDC);
		}
		else {
			@CreateWindow("daychangereal.xml", false, wndDC);
		}
		
		RemoveDCPlayListEntry();
	}		
	
	void DrawAddPlayList(void) {
		if (iHelpTextID != -1)
			return;
	
		int iSize;
		add_play_list->size(iSize);
		if (!iSize)
			return;
		
		for (int i = 0; i < iSize; ++i) {
			int iItemID, iItemAmount;
			add_play_list->get(iItemID, i);
			add_play_list_amount->get(iItemAmount, i);
			float fTime;
			add_play_list_time->get(fTime, i);
			float fAlpha = sqrt(fTime / c_fPeriod);
			DrawItem(iItemID, iItemAmount, i, fAlpha);
		}
	}	
	
	void OnGameMessage(int id, object data) {
		if (id == c_iWM_QSave) {
			iHelpTextID = c_iTID_QSave;
			fHelpTextTime = c_fHelpTime;		
		}
		else
		if (id == c_iWM_HelpMessage) {
			if (data) {
				int iSize;
				data->size(iSize);
				if (iSize == 1) {
					data->get(iHelpTextID, 0);
					fHelpTextTime = c_fHelpTime;
				}
			}
		}
		else
		if (id == c_iWM_PlayerVisirOn) {
			if (!wndVisir)
				@CreateWindow("visir.xml", false, wndVisir);
			@SendMessage(GetVisirCharge(), "charge");
			UpdateVisirLevel();
		}
		else
		if (id == c_iWM_PlayerVisirOff) {
			if (wndVisir)
				wndVisir->DestroyWindow();
		}
		else
		if (id == c_iWM_PlayerAddItem) {
			int iItemID, iItemAmount;
			data->get(iItemID, 0);
			data->get(iItemAmount, 1);
			AddAddPlayListEntry(iItemID, iItemAmount);
		}
		else
		if (id == c_iWM_PlayerRemoveItem) {
			int iItemID, iItemAmount;
			data->get(iItemID, 0);
			data->get(iItemAmount, 1);
		}
		else		
		if (id == c_iWM_DayChange) {
			AddDCPlayListEntry(c_iWM_DayChange);
		}
		else		
		if (id == c_iWM_RealDayChange) {
			AddDCPlayListEntry(c_iWM_RealDayChange);
		}
		else 
		if (id == c_iWM_PlayerMail) {
			AddPlayListEntry(c_iMail);
			@PlaySound("mail");
			@Trace("HasMail");
		}
		else
		if (id == c_iWM_PlayerDiary) {
			AddPlayListEntry(c_iDiary);
			@PlaySound("diary");
			@Trace("HasDiary");
		}
		else
		if (id == c_iWM_PlayerReputationUp) {
			//AddPlayListEntry(c_iRepUp);
			@PlaySound("rep_up");
			@Trace("ReputationUP");		
		}
		else
		if (id == c_iWM_PlayerReputationDown) {
			//AddPlayListEntry(c_iRepDown);
			@PlaySound("rep_down");
			@Trace("ReputationDown");		
		}
		else
		if (id == c_iWM_PlayerTirednessChange) {
			OnNewNervobarProps("tiredness", true);
		}
		else
		if (id == c_iWM_PlayerHungerChange) {
			OnNewNervobarProps("hunger", true);
		}
		else 
		if (id == c_iWM_PlayerImmunityChange) {
			OnNewNervobarProps("immunity", true);
		}
		else 
		if (id == c_iWM_PlayerDiseaseChange) {
			OnNewNervobarProps("disease", true);
		}
		else
		if (id == c_iWM_PlayerHealthChange) {
			OnNewNervobarProps("health", true);
		}		
		else
		if (id == c_iWM_PlayerReputationChange) {
			OnNewNervobarProps("repuatation", true);
		}	
		else 
		if (id == c_iWM_PlayerPropChange) {
			string strProp;
			data->get(strProp, 0);
			OnNewNervobarProps(strProp, false);
		}	
	}
	
	void OnUpdate(float fDeltaTime) {
		UpdatePlayList(fDeltaTime);
		UpdateAddPlayList(fDeltaTime);
		UpdateDCPlayList(fDeltaTime);
		UpdateVisirLevel();
		UpdateNervobars(fDeltaTime);
		UpdateHelp(fDeltaTime);
	}
	
	void UpdateVisirLevel() {
		int iLevel = GetVisirLevel();
		for (int i = 0; i < 4; ++i) {
			@SendMessage((i < iLevel) ? 1 : 0, ("vlevel" + (i + 1)));
		}
		@SendMessage(GetVisirCharge(), "charge");
	}
	
	void DrawItem(int iItemID, int iItemAmount, int iPos, float fAlpha) {
		string strImage;
		@GetInvItemSprite(strImage, iItemID);
		int x = 40 + iPos * 60;
		int y = 40;
		@Blit("slot", x, y, fAlpha);
		@Blit(strImage, x + 1, y + 1, fAlpha);
		if (iItemAmount > 1) {
			@Print("default", x + 2, y + 35, iItemAmount, c_fAmountColR, c_fAmountColG, c_fAmountColB, fAlpha);
		}		
	}
	
	void DrawHelp(void) {
		if (iHelpTextID == -1)
			return;
			
		string strHelp;
		@GetStringByID(strHelp, iHelpTextID);
		float fAlpha = sin(3.14 * fHelpTextTime / c_fHelpTime / 2.0);
		@Print("help", 10, 10, strHelp, c_fHelpColR, c_fHelpColG, c_fHelpColB, fAlpha);
	}
	
	void UpdateHelp(float fDeltaTime) {
		if (iHelpTextID == -1)
			return;
		
		fHelpTextTime -= fDeltaTime;
		if (fHelpTextTime <= 0)
			iHelpTextID = -1;
	}
	
	void InitNervobars(void) {
		@CreateStringVector(properties);
		@CreateFloatVector(values);
		@CreateFloatVector(new_values);
		@CreateFloatVector(prop_times);
		@CreateFloatVector(prop_ampl);
		@CreateBoolVector(prop_inv);
		
		object player;
		@FindActor(player, "player");
		if (player) {
			properties->add("health");
			prop_inv->add(false);
			properties->add("hunger");
			prop_inv->add(true);
			properties->add("tiredness");
			prop_inv->add(true);
			properties->add("immunity");
			prop_inv->add(false);
			properties->add("disease");
			prop_inv->add(true);
			properties->add("reputation");
			prop_inv->add(false);

			int iSize;
			properties->size(iSize);
			for (int i = 0; i < iSize; ++i) {
				string strProp;
				properties->get(strProp, i);
				
				float fVal;
				player->GetProperty(strProp, fVal);
				values->add(fVal);
				new_values->add(fVal);
				prop_times->add(0);
				prop_ampl->add(0);
			}
		}
		else {
			@Trace("BAD PLAYER!");
		}
	}
	
	void OnNewNervobarProps(string _strProp, bool bShow) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return;
			
		int iSize;
		properties->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string strProp;
			properties->get(strProp, i);
			if (strProp == _strProp) {
				float fOldProp;
				new_values->get(fOldProp, i, );
			
				float fNewProp;
				player->GetProperty(strProp, fNewProp);
				
				if (fOldProp == fNewProp)
					return;
				
				new_values->set(i, fNewProp);
				
				if (bShow) {
					float fProp;
					values->get(fProp, i);
					prop_times->set(i, c_fPropPeriod);
					float fAmp = 10.0 * (fProp - fNewProp);
					if (fAmp < 0)
						fAmp *= -1.0;
					if (fAmp < 0.2)
						fAmp = 0.2;
					else
					if (fAmp > 1.0)
						fAmp = 1.0;
					prop_ampl->set(i, fAmp);
				}
				break;
			}
		}
	}
	
	void UpdateNervobars(float fDeltaTime) {
		int iSize;
		properties->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			float fTime;
			prop_times->get(fTime, i);
			if (fTime > 0)
				fTime -= fDeltaTime;
			if (fTime < 0)
				fTime = 0;
			prop_times->set(i, fTime);
		}
	}
	
	void DrawVerticalNervobar(void) {
		return;
		float fDist = GetPlayerWalkDistance();
		
		float fWidth = 59;
		float fHeight = 400;
		
		if (iWindowSizeX == 800) {
			fWidth = 59;
			fHeight = 400;
		}
		else
		if (iWindowSizeX == 1024) {
			fWidth = 75;
			fHeight = 512;
		}
		else
		if (iWindowSizeX == 1280) {
			fWidth = 99;
			fHeight = 680;
		}
		
		int y = (iWindowSizeY - fHeight) / 2;
		
//		@BlitClipped("nerv_v", 0, y, 0, y, fWidth, fHeight);
		
//		@BlitClipped("nerv_v_b", 0, y, 0, y, fWidth, fHeight);
		float fNewHeight = fHeight * (1 - fDist);
		@BlitClipped("nerv_v", 0, y, 0, y + fNewHeight, fWidth, fHeight - fNewHeight);
		
	}
	
	void DrawNervobar(void) {
		float fY = 20;//iWindowSizeY - 150;
		float fX = 20;
		
		int iSize;
		properties->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string strProp;
			properties->get(strProp, i);
			float fProperty;
			new_values->get(fProperty, i);
			
			float fAmp;
			prop_ampl->get(fAmp, i);
			float fTime;
			prop_times->get(fTime, i);

			bool bInv;
			prop_inv->get(bInv, i);
			
			float fAlphaBase;
			
			// conditions
			if (strProp == "health") {
				if (fProperty <= 0.33)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			else
			if (strProp == "immunity") {
				if (fProperty < 0.5)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			else
			if (strProp == "tiredness") {
				if (fProperty >= 0.66)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			else
			if (strProp == "hunger") {
				if (fProperty >= 0.66)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			else
			if (strProp == "reputation") {
				if (fProperty <= 0.66)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			else
			if (strProp == "disease") {
				if (fProperty >= 0.33)
					fAlphaBase = 1;
				else {
					if (fTime == 0)
						continue;
					fAlphaBase = 0.2;
				}
			}
			// end conditions			
			
			float fAlpha;
			if (fTime > 0)
				fAlpha = sin(fTime / c_fPropPeriod * 3.1415 / 2);
			else
				fAlpha = fAlphaBase;
				
			
			if (fAlpha > 1)
				fAlpha = 1;
				
			if (fAlpha < 0)
				fAlpha = 0;
				
			float fWidth = 256;
			float fMargin = 64;
			@BlitClipped("nerv_b", iWindowSizeX - fWidth - fX, fY, iWindowSizeX - fWidth - fX, fY, fWidth, 43, fAlpha);
			float fNewWidth = (fWidth - fMargin) * fProperty + fMargin;
			@BlitClipped("nerv_r", iWindowSizeX - fWidth - fX, fY, iWindowSizeX - fWidth - fX, fY, fNewWidth, 43, fAlpha);
			@BlitClipped(strProp, iWindowSizeX - fWidth - fX, fY, iWindowSizeX - fWidth - fX, fY, fWidth, 43, fAlpha);
			
			//@Print("default", iWindowSizeX - fWidth - 50 - fX, fY, strProp, fAlpha, 0, 0, fAlpha);
				
			fY += 25;
		}
	}

	void OnDraw() {
		if (IsPlayerHandsOn() && (!wndDC))
			@Blit("cross", iWindowSizeX / 2 - 1, iWindowSizeY / 2 - 1);
			
		DrawPlayList();
		DrawAddPlayList();
		DrawNervobar();
		DrawVerticalNervobar();
		DrawHelp();
	}
}
