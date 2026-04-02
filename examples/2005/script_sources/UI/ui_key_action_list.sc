include ui_std.sci
include ui_key_actions.sci
include ui_keys.sci
include ui_text_res.sci
include ui_scrollable_list_base.sci

const float c_fTextR = 142.0 / 255.0;
const float c_fTextG = 142.0 / 255.0;
const float c_fTextB = 142.0 / 255.0;

const float c_fInvTextR = 64.0 / 255.0;
const float c_fInvTextG = 64.0 / 255.0;
const float c_fInvTextB = 64.0 / 255.0;

const int c_iItemHeight = 17;

maintask UI_KeyActionList : UI_ScrollableListBase
{
	var object actions, action_text, action_keys, keys, key_names;
	var int iEnterKey;
	var bool bInputLocked, bNoKeysDown;

	void init(void) {
		@SetNeedUpdate(true);
		bInputLocked = false;
		bNoKeysDown = false;
		iEnterKey = -1;
		InitActions();
		super.init();
	}
	
	int GetItemCount(void) {
		int iSize;
		actions->size(iSize);
		return iSize;
	}
	
	int GetItemHeight(void) { 
		return c_iItemHeight;
	}
	
	bool IsInputLocked(void) {
		return bInputLocked;
	}
	
	void LockInput(int iItem) {
		iEnterKey = iItem;
		bInputLocked = true;
		bNoKeysDown = false;
		@CaptureKeyboard();
		@CaptureMouse();
	}
	
	void OnUpdate(float fDeltaTime) {
		if (!IsInputLocked())
			return;
		
		object state;
		@GetKeyboardState(state);
		if (!state) {
			@Trace("GetKeyboardState fail");
			return;
		}
		
		for (int i = 0; i < 256; ++i) {
			bool bValid;
			@IsValidVirtualKey(bValid, i);
			if (bValid) {
				int iState;
				state->GetKeyState(iState, i);
				if (iState & 128) { // key is down
					if (bNoKeysDown)
						ReleaseInput(i);
						
					return;
				}
			}
			
		}
		
		bNoKeysDown = true;
	}
	
	void ReleaseInput(int iVirtKey) {
		if (iVirtKey != -1 && iVirtKey != VK_ESCAPE) {
			bool bValid;
			@IsValidVirtualKey(bValid, iVirtKey);
			if (bValid) {
				int iAction;
				actions->get(iAction, iEnterKey);
				@Unbind(iVirtKey);
				
				object a_keys;
				action_keys->get(a_keys, iEnterKey);
				int iSize;
				a_keys->size(iSize);
				for (int i = 0; i < iSize; ++i) {
					int iKeyIndex, iVKey;
					a_keys->get(iKeyIndex, i);
					keys->get(iVKey, iKeyIndex);
					@Unbind(iVKey);
				}
				@Bind(iVirtKey, iAction);
				InitActions();
			}
			else {
				@Trace("wrong key code");
			}
		}

		iEnterKey = -1;
		bInputLocked = false;
		bNoKeysDown = false;
		
		@ReleaseKeyboard();
		@ReleaseMouse();
		
		@SendMessageToParent(1);
	}
	
	void OnItemLButtonDown(int iItem, int x, int y) {
		if (iEnterKey == -1) {
			LockInput(iItem);
		}
		else {
		}
	}

	void OnLButtonDown(int x, int y) {
		if (!IsInputLocked())
			super.OnLButtonDown(x,y);
	}
	
	void OnRButtonDown(int x, int y) {
		if (!IsInputLocked()) {
			super.OnRButtonDown(x,y);
		}
	}
	// end input catching
	
	
	void OnLButtonUp(int x, int y) {
		if (!IsInputLocked())
			super.OnLButtonUp(x,y);
	}
	
	void OnRButtonUp(int x, int y) {
		if (!IsInputLocked())
			super.OnRButtonUp(x,y);
	}	
	

	void OnMouseWheel(int x, int y, float fDelta) {
		if (!IsInputLocked())
			super.OnMouseWheel(x,y, fDelta);
	}	
	
	void OnItemLButtonUp(int iItem, int x, int y) {
	}
	
	void OnItemRButtonDown(int iItem, int x, int y) { 
	}
	
	void OnItemRButtonUp(int iItem, int x, int y) {
	}
	
	string GetScrollbarName(void) { 
		return "scrollbar";
	}
	
	void DrawItem(int iItem, int x, int y) {
		if (iItem == iEnterKey) {
			@StretchBlit("whitepixel", x, y, iWndXSize, GetItemHeight());
			string strText = GetStringByID(c_iTID_ChooseActionKey);
			int iWidth;
			@GetTextWidth(iWidth, "default", strText);
			@Print("default", x + (iWndXSize - iWidth) / 2, y, strText, c_fInvTextR, c_fInvTextG, c_fInvTextB);
			return;
		}
	
		int textid;
		action_text->get(textid, iItem);
		
		string strActionName = GetStringByID(textid);

		string strKeys;		
		object a_keys;
		action_keys->get(a_keys, iItem);
		int iSize;
		a_keys->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			if (i)
				 strKeys += " , ";
			int iKeyIndex;
			a_keys->get(iKeyIndex, i);
			string strName;
			key_names->get(strName, iKeyIndex);
			strKeys += strName;
		}
		
		@Print("default", x, y, strActionName, c_fTextR, c_fTextG, c_fTextB);
		if (iSize) { 
			int iWidth;
			@GetTextWidth(iWidth, "default", strKeys);
			@Print("default", x + iWndXSize - iWidth, y, strKeys, c_fTextR, c_fTextG, c_fTextB);
		}
	}
	
	void CreateAction(int iAction, int iActionText) {
		actions->add(iAction);
		action_text->add(iActionText);
		object tmp;
		@CreateIntVector(tmp);
		action_keys->add(tmp);
	}
	
	void InitActions(void) {
		@CreateIntVector(keys);
		@CreateStringVector(key_names);
		object enum;
		@CreateKeyEnumerator(enum);
		while (true) {
			bool bSuccess;
			int iKey;
			string strName;
			enum->Next(bSuccess, iKey);
			if (!bSuccess)
				break;
				
			keys->add(iKey);
			@GetKeyName(strName, iKey);
			key_names->add(strName);
		}
	
		@CreateIntVector(actions);
		@CreateIntVector(action_text);
		@CreateObjectVector(action_keys);
		
		CreateAction(c_iKeyActionForward, c_iTID_KA_Forward);
		CreateAction(c_iKeyActionBackward, c_iTID_KA_Backward);
		CreateAction(c_iKeyActionLeft, c_iTID_KA_Left);
		CreateAction(c_iKeyActionRight, c_iTID_KA_Right);
		CreateAction(c_iKeyActionUse, c_iTID_KA_Use);
		CreateAction(c_iKeyActionJump, c_iTID_KA_Jump);
		//CreateAction(c_iKeyActionScreenShot, c_iTID_KA_ScreenShot);
		CreateAction(c_iKeyActionFlashlight, c_iTID_KA_Flashlight);
		CreateAction(c_iKeyActionVisir, c_iTID_KA_Visir);
		CreateAction(c_iKeyActionShoot, c_iTID_KA_Shoot);
		CreateAction(c_iKeyActionAltShoot, c_iTID_KA_AltShoot);
		CreateAction(c_iKeyActionHolster, c_iTID_KA_Holster);
		CreateAction(c_iKeyActionSneak, c_iTID_KA_Sneak);
		CreateAction(c_iKeyActionReload, c_iTID_KA_Reload);
		CreateAction(c_iKeyActionInventory, c_iTID_KA_Inventory);
		CreateAction(c_iKeyActionMap, c_iTID_KA_Map);
		CreateAction(c_iKeyActionDiary, c_iTID_KA_Diary);
		CreateAction(c_iKeyActionMessage, c_iTID_KA_Message);
		CreateAction(c_iKeyActionStats, c_iTID_KA_Stats);
		CreateAction(c_iKeyActionRescue, c_iTID_KA_Rescue);
		
		//CreateAction(c_iKeyActionGamemenu, c_iTID_KA_Gamemenu);
		
		CreateAction(c_iKeyActionQSave, c_iTID_KA_QSave);
		CreateAction(c_iKeyActionQLoad, c_iTID_KA_QLoad);
		
		UpdateActionKeyLinks();
	}
	
	void UpdateActionKeyLinks() {
		ClearActionKeys();
		
		int iSize;
		keys->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iKey, iType;
			keys->get(iKey, i);
			@GetBindType(iType, iKey);
			if (iType == BT_NONE)
				continue;
			else
			if (iType == BT_ACTION) {
				int iAction;
				@GetBindAction(iAction, iKey);
				AddKeyToAction(iAction, i);
			}
			else
			if (iType == BT_COMMAND) {
				string strCommand;
				@GetBindCommand(strCommand, iKey);
				if (strCommand == "qsave") {
					AddKeyToAction(c_iKeyActionQSave, i);
				}
				else
				if (strCommand == "qload") {
					AddKeyToAction(c_iKeyActionQLoad, i);
				}
			}
		}
	}
	
	void ClearActionKeys() {
		int iSize;
		actions->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			object a_keys;
			action_keys->get(a_keys, i);
			a_keys->clear();
		}
	}
	
	void AddKeyToAction(int _iAction, int iKeyIndex) {
		int iSize;
		actions->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			int iAction;
			actions->get(iAction, i);
			if (_iAction == iAction) {
				object a_keys;
				action_keys->get(a_keys, i);
				a_keys->add(iKeyIndex);
				return;
			}
		}
		@Trace("AddKeyToAction fail");
	}
}