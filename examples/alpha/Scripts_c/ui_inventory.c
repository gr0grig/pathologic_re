maintask task_0
{
	void init(int var_0_int)
	{
		var_0_int = 0;
		func_437(var_0_int);
		func_381(var_0_int);
		func_326();
		func_319();
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int, int var_1_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnSee(int var_0_int, float var_1_float)
	{
		func_381(var_0_int);
	}

	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		int var_10_int; int var_11_int; int var_12_int; int var_13_int; int var_14_int; int var_15_int;
		if(var_2_string == "button_weapon") {
			var_0_int = 0;
		} else if(var_2_string == "button_clothes") {
				var_0_int = 1;
		}
	Label_149:
		for(;;) {
			func_437(var_0_int);
			func_381(var_0_int);
			func_326();
			return 12;

		}
	
		if(var_2_string == "button_medcine") {
			var_0_int = 2;
		} else if(var_2_string == "button_food") {
			var_0_int = 3;
		} else if(var_2_string == "button_other") {
			var_0_int = 4;
		} else if(var_2_string == "button_detector") {
		} else if(var_2_string == "button_anticeptic") {
		}
		if(var_1_int != 0) {
			@GetVariable("noinv_drop", var_10_int);
			if(var_10_int != 0)
				return 12;
		}
	
		for(;;) {
			if(0 < 12) {
				string var_157_string; int var_158_int;
				var_11_int = var_158_int;
				func_161(var_157_string, var_158_int);
				if(var_2_string == var_157_string) {
					bool var_160_bool;
					func_193(var_160_bool);
					if(var_160_bool != 0) {
						bool var_161_bool; int var_163_int;
						var_11_int = var_163_int;
						func_223(var_161_bool, var_0_int, var_163_int);
						var_161_bool = var_12_int;
					} else {
							if(var_1_int == 0) {
								int var_233_int;
								var_11_int = var_233_int;
								func_499(var_0_int, var_233_int);
						}
						for(;;) {
							} else {
						bool var_304_bool; int var_306_int;
						var_11_int = var_306_int;
						func_223(var_304_bool, var_0_int, var_306_int);
						var_304_bool = var_13_int;
				}
					var_11_int += 1;
						}
			}

				for(;;) {
					int var_184_int;
					func_198(var_184_int);
					if(!(0 < var_184_int)) goto Label_149;
					string var_186_string; int var_187_int;
					var_14_int = var_187_int;
					func_177(var_186_string, var_187_int);
					if(var_2_string == var_186_string) {
						int var_189_int; int var_190_int;
						var_14_int = var_190_int;
						func_259(var_189_int, var_190_int);
						var_189_int = var_15_int;
						if(var_15_int != -1)
							var_0_int = var_15_int;
						goto Label_149;
					}
					var_14_int += 1;
				}

			}

		}
	}

}


// @pe
void func_161(string var_50_string, int var_51_int)
{
	if((var_51_int + 1) < 10)
		var_50_string = "slot0" + (var_51_int + 1);
	var_50_string = "slot" + (var_51_int + 1);
}


void func_193(bool var_87_bool)
{
	bool var_89_bool;
	@HasContainer(var_89_bool);
	var_89_bool = var_87_bool;
}


void func_259(int var_189_int, int var_190_int)
{
	int var_208_int;
	@Trace("MoveToPlayerContainer");
	object var_202_object;
	@GetPlayerContainer(var_202_object);
	object var_201_object;
	@GetContainer(var_201_object);
	int var_204_int;
	var_201_object->GetItemCount(var_204_int);
	if(var_204_int <= var_190_int) {
		var_189_int = -1;
		return 20;
	}
	int var_205_int;
	var_201_object->GetItemAmount(var_205_int, var_190_int);
	if(var_205_int == 0) {
		var_189_int = -1;
		return 20;
	}
	object var_203_object;
	var_201_object->GetItem(var_203_object, var_190_int);
	int var_206_int;
	var_203_object->GetItemID(var_206_int);
	int var_207_int;
	@GetInvItemProperty(var_207_int, var_206_int, "Category");
	int var_216_int;
	func_217(var_216_int);
	if(var_206_int == var_216_int) {
		@GetPlayerMoneyCount(var_208_int);
		@SetPlayerMoneyCount(var_208_int + var_205_int);
		var_201_object->RemoveItem(var_190_int, var_205_int);
		func_319();
		var_189_int = -1;
		return 20;
	}
	bool var_210_bool;
	var_202_object->AddItem(var_210_bool, var_203_object, var_207_int, 1);
	if(!var_210_bool) { //@nz
		var_189_int = -1;
		return 20;
	}
	var_201_object->RemoveItem(var_190_int, 1);
	var_207_int = var_189_int;
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


void func_223(bool var_161_bool, int var_162_int, int var_163_int)
{
	@Trace("MoveToContainer");
	object var_172_object;
	@GetPlayerContainer(var_172_object);
	object var_171_object;
	@GetContainer(var_171_object);
	int var_174_int;
	var_172_object->GetItemCount(var_174_int, var_162_int);
	if(var_174_int <= var_163_int) {
		var_161_bool = false;
		return 14;
	}
	int var_175_int;
	var_172_object->GetItemAmount(var_175_int, var_163_int, var_162_int);
	object var_173_object;
	var_172_object->GetItem(var_173_object, var_163_int, var_162_int);
	int var_176_int;
	var_173_object->GetItemID(var_176_int);
	bool var_177_bool;
	var_171_object->AddItem(var_177_bool, var_173_object, 0, 1);
	if(!var_177_bool) { //@nz
		var_161_bool = false;
		return 14;
	}
	var_172_object->RemoveItem(var_163_int, 1, var_162_int);
	var_161_bool = true;
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


void func_326(void)
{
	object var_84_object; int var_85_int; int var_86_int;
	bool var_87_bool;
	func_193(var_87_bool);
	if(!var_87_bool) //@nz
		return 14;
	object var_80_object;
	@GetContainer(var_80_object);
	int var_81_int;
	var_80_object->GetItemCount(var_81_int);
	int var_91_int;
	func_198(var_91_int);
	int var_82_int;
	var_91_int = var_82_int;
	int var_83_int = 0;
	
	for(;;) {
		if(var_83_int < var_82_int) {
			if(var_83_int < var_81_int) {
				var_80_object->GetItem(var_84_object, var_83_int);
				var_84_object->GetItemID(var_85_int);
				var_80_object->GetItemAmount(var_86_int, var_83_int);
				string var_102_string; int var_103_int;
				var_83_int = var_103_int;
				func_177(var_102_string, var_103_int);
				@SendMessage(0, var_102_string, var_84_object);
				string var_116_string; int var_117_int;
				var_83_int = var_117_int;
				func_177(var_116_string, var_117_int);
				@SendMessage((var_86_int | 65536), var_116_string);
				var_84_object = null;
			} else {
			string var_120_string; int var_121_int;
			var_83_int = var_121_int;
			func_177(var_120_string, var_121_int);
			@SendMessage(32768, var_120_string);
		}
		return 14;
		}
		var_83_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_198(int var_91_int)
{
	bool var_96_bool;
	func_193(var_96_bool);
	if(!var_96_bool) { //@nz
		var_91_int = false;
		return 4;
	}
	object var_94_object;
	@GetContainer(var_94_object);
	if(var_94_object == null) {
		var_91_int = 0;
		return 4;
	}
	int var_95_int;
	var_94_object->GetCapacity(var_95_int);
	var_95_int = var_91_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_177(string var_102_string, int var_103_int)
{
	if((var_103_int + 1) < 10)
		var_102_string = "cslot0" + (var_103_int + 1);
	var_102_string = "cslot" + (var_103_int + 1);
}


void func_499(int var_232_int, int var_233_int)
{
	object var_252_object; bool var_258_bool; int var_259_int; bool var_260_bool; int var_261_int; int var_262_int; bool var_263_bool; object var_264_object; int var_265_int; bool var_266_bool; int var_267_int; bool var_268_bool;
	@GetPlayerContainer(var_252_object);
	int var_253_int;
	var_252_object->GetItemCount(var_253_int, var_232_int);
	if(var_233_int >= var_253_int)
		return 36;
	object var_254_object;
	var_252_object->GetItem(var_254_object, var_233_int, var_232_int);
	int var_255_int;
	var_254_object->GetItemID(var_255_int);
	int var_256_int;
	var_252_object->GetItemAmount(var_256_int, var_233_int, var_232_int);
	bool var_257_bool;
	var_252_object->IsItemSelected(var_257_bool, var_233_int, var_232_int);
	if(var_232_int == 0) {
		@HasInvItemProperty(var_258_bool, var_255_int, "Weapon");
		if(!var_258_bool) //@nz
			return 36;
		if(var_257_bool != 0) {
			var_252_object->SelectItem(var_233_int, false, var_232_int);
			@SetPlayerHandsItem(-1);
		} else {
				@SetPlayerHandsItem(var_255_int);
				var_259_int = 0;

				while(var_259_int < var_253_int) {
					var_252_object->SelectItem(var_259_int, false, var_232_int);
					var_259_int += 1;
				}

				var_252_object->SelectItem(var_233_int, true, var_232_int);
	}
			if(var_232_int == 1) {
				@HasInvItemProperty(var_260_bool, var_255_int, "Group");
				if(!var_260_bool) //@nz
					return 36;
				@GetInvItemProperty(var_261_int, var_255_int, "Group");
				if(var_257_bool != 0) {
					var_252_object->SelectItem(var_233_int, false, var_232_int);
				} else {
				var_262_int = 0;

				for(;;) {
					if(var_262_int < var_253_int) {
						var_252_object->IsItemSelected(var_263_bool, var_262_int, var_232_int);
						if(!var_263_bool) { //@nz
						} else {
						var_252_object->GetItem(var_264_object, var_262_int, var_232_int);
						var_264_object->GetItemID(var_265_int);
						@HasInvItemProperty(var_266_bool, var_265_int, "Group");
						if(!var_266_bool) { //@nz
							goto Label_594;
						}
						@GetInvItemProperty(var_267_int, var_265_int, "Group");
						if(var_267_int == var_261_int)
							var_252_object->SelectItem(var_262_int, false, var_232_int);
						else
							var_264_object = null;
						@UseItem(var_233_int, var_232_int, var_268_bool);
						if(var_268_bool == 0) goto Label_616;
						var_256_int += -1;
						if(var_256_int == 0) {
							var_252_object->RemoveItem(var_233_int, 1, var_232_int);
							goto Label_616;
						}
						var_252_object->SetItemAmount(var_256_int, var_233_int, var_232_int);
					}
				}
				var_252_object->SelectItem(var_233_int, true, var_232_int);
				}
			Label_594:
				var_262_int += 1;
			}
			}
	}
	goto Label_616;
	
Label_616:
	for(;;) {
		int var_278_int;
		var_232_int = var_278_int;
		func_381(var_278_int);
		return 36;

	}
	
}
EMIT "Stack[-16] = 0";
EMIT "Stack[-18] = 0";


// @pe
void func_437(int var_1_int)
{
	if(var_1_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_1_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_1_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_1_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_1_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_217(int var_216_int)
{
	int var_218_int;
	@GetInvItemByName(var_218_int, "Money");
	var_218_int = var_216_int;
}


void func_381(int var_32_int)
{
	object var_39_object; object var_42_object; int var_43_int; bool var_44_bool;
	@GetPlayerContainer(var_39_object);
	int var_40_int;
	var_39_object->GetItemCount(var_40_int, var_32_int);
	int var_41_int = 0;
	
	for(;;) {
		if(var_41_int < 12) {
			if(var_41_int < var_40_int) {
				var_39_object->GetItem(var_42_object, var_41_int, var_32_int);
				var_39_object->GetItemAmount(var_43_int, var_41_int, var_32_int);
				var_39_object->IsItemSelected(var_44_bool, var_41_int, var_32_int);
				if(var_44_bool != 0) {
					string var_50_string; int var_51_int;
					var_41_int = var_51_int;
					func_161(var_50_string, var_51_int);
					@SendMessage(16384, var_50_string, var_42_object);
				} else {
				string var_68_string; int var_69_int;
				var_41_int = var_69_int;
				func_161(var_68_string, var_69_int);
				@SendMessage(0, var_68_string, var_42_object);
			}
			string var_71_string; int var_72_int;
			var_41_int = var_72_int;
			func_161(var_71_string, var_72_int);
			@SendMessage(32768, var_71_string);
		}
		return 12;
		}
		string var_64_string; int var_65_int;
		var_41_int = var_65_int;
		func_161(var_64_string, var_65_int);
		@SendMessage((var_43_int | 65536), var_64_string);
		var_42_object = null;
		goto Label_432;

	Label_432:
		var_41_int += 1;
	}
	
}
EMIT "Stack[-6] = 0";


void func_319(void)
{
	int var_123_int;
	@GetPlayerMoneyCount(var_123_int);
	@SendMessage(var_123_int, "money");
}


