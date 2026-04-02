maintask task_0
{
	void init(int var_0_int, object var_1_object, int var_2_int, int var_3_int)
	{
		object var_9_object; string var_10_string;
		@CreateWindow("inventory_base.xml", false, var_1_object);
		string var_11_string;
		func_411(var_11_string);
		var_3_int = 2;
		int var_8_int = 0;
	
		for(;;) {
			if(var_8_int < 4) {
				@CreateStringVector(var_9_object);
				if((var_8_int - 1) >= 0) {
					string var_48_string;
					func_1249(var_48_string, (var_8_int - 1));
					var_48_string = var_10_string;
				} else {
					var_10_string = "$parent";
			}
				func_499(var_11_string, 0);
			}
			if((var_8_int + 1) < 4) {
				string var_65_string;
				func_1249(var_65_string, (var_8_int + 1));
				var_65_string = var_11_string;
			} else {

			}
			var_9_object->add(var_10_string);
			var_9_object->add("$parent");
			string var_69_string; int var_70_int;
			var_8_int = var_70_int;
			func_1249(var_69_string, var_70_int);
			@SendMessage(-1, var_69_string, var_9_object);
			var_9_object = null;
			var_8_int += 1;
		}
	
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, int var_5_int, float var_6_float)
	{
		if(var_6_float > 0) {
		} else if((float)1 < 0) {
			var_6_float = -1;
		}
		if((var_2_int + var_6_float) < 0)
			var_2_int = 0;
		func_411(var_6_float);
	
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		int var_5_int;
		func_152(var_5_int, var_5_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		if(var_4_int == 266) {
			if(var_0_int == 0) {
				func_912(var_4_int, 1);
			} else {
					if(var_0_int == 1)
						func_912(var_4_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_912(var_4_int, 3);
				} else if(var_0_int == 3) {
					func_912(var_4_int, 4);
				} else if(var_0_int == 4) {
					func_912(var_4_int, 0);
				}
		}
			if(!(var_4_int == 265)) goto Label_677;
			if(var_0_int == 0) {
				func_912(var_4_int, 4);
			} else if(var_0_int == 1) {
				func_912(var_4_int, 0);
			} else if(var_0_int == 2) {
				func_912(var_4_int, 1);
			} else if(var_0_int == 3) {
				func_912(var_4_int, 2);
			} else if(var_0_int == 4) {
				func_912(var_4_int, 3);
				}
			}
		Label_677:
			int var_44_int;
			func_72(var_44_int, var_44_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, int var_2_int, int var_3_int, float var_4_float)
	{
		func_1146(var_0_int);
		func_947();
		func_371();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, int var_3_int, int var_4_int, string var_5_string, object var_6_object)
	{
		bool var_13_bool; int var_14_int; int var_15_int; object var_16_object; int var_17_int; object var_18_object;
		if(var_4_int < 0) {
			bool var_21_bool; int var_22_int; string var_23_string; object var_24_object;
			var_4_int = var_22_int;
			var_5_string = var_23_string;
			var_6_object = var_24_object;
			func_238(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object);
			var_21_bool = false;
			return 12;
		}
		if(var_5_string == "button_weapon") {
			func_912(var_18_object, 0);
			var_13_bool = true;
		} else if(var_5_string == "button_clothes") {
				func_912(var_18_object, 1);
				var_13_bool = true;
		}
	Label_900:
		for(;;) {
			if(!var_13_bool) { //@nz
				bool var_242_bool; int var_243_int; string var_244_string; object var_245_object;
				var_4_int = var_243_int;
				var_5_string = var_244_string;
				var_6_object = var_245_object;
				func_238(var_18_object, var_242_bool, var_243_int, var_244_string, var_245_object);
				var_242_bool = var_13_bool;
			}
			if(var_13_bool != 0) {
			}
			return 12;

		}
	
		if(var_5_string == "button_medcine") {
			func_912(var_18_object, 2);
			var_13_bool = true;
		} else if(var_5_string == "button_food") {
			func_912(var_18_object, 3);
			var_13_bool = true;
		} else if(var_5_string == "button_other") {
			func_912(var_18_object, 4);
		} else if(var_5_string == "button_detector") {
		} else if(var_5_string == "button_anticeptic") {
		}
		if(var_4_int != 0) {
			@GetVariable("noinv_drop", var_14_int);
			if(var_14_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_900;
			string var_269_string; int var_270_int;
			var_15_int = var_270_int;
			func_1233(var_269_string, var_270_int);
			if(var_5_string == var_269_string) {
				object var_282_object;
				func_232(var_282_object);
				var_282_object = var_16_object;
				var_16_object->GetItemCount(var_17_int, var_0_int);
				if(var_17_int > var_15_int) {
					var_16_object->GetItem(var_18_object, var_15_int, var_0_int);
					bool var_284_bool; object var_285_object;
					func_754(var_285_object);
					if(!var_284_bool) { //@nz
						bool var_287_bool; int var_288_int; bool var_289_bool;
						var_15_int = var_288_int;
						var_289_bool = var_4_int == 0;
						func_398(var_285_object, var_287_bool, var_288_int, var_289_bool);
						var_287_bool = true;
					}
					var_18_object = null;
				}
				goto Label_900;
			EMIT "Stack[-3] = 0";
			}
			var_15_int += 1;
		}
	}

}


// @pe
void func_398(int var_0_int, int var_2_int, bool var_287_bool, int var_288_int)
{
	int var_293_int;
	var_288_int = var_293_int;
	bool var_291_bool;
	func_1096(var_289_bool, var_291_bool, var_0_int, var_293_int);
	var_2_int += 1;
	func_411(var_289_bool);
	var_287_bool = true;
}


// @pe
void func_912(int var_0_int, int var_77_int)
{
	if(var_77_int == -1)
		return 0;
	if(var_0_int == var_77_int)
		return 0;
	func_954(var_77_int);
}


void func_152(int var_3_int, int var_5_int)
{
	int var_10_int; int var_11_int; int var_12_int; int var_13_int;
	if(var_5_int == 272) {
		var_3_int = 2;

		for(;;) {
			if(!(0 < 4)) goto Label_171;
			string var_19_string; int var_20_int;
			var_10_int = var_20_int;
			func_1249(var_19_string, var_20_int);
			@SendMessage(-7, var_19_string);
			var_10_int += 1;
		}
	}
Label_171:
	if(var_5_int == 274) {
		var_3_int = 0;

		for(;;) {
			if(!(0 < 12)) goto Label_189;
			string var_37_string; int var_38_int;
			var_11_int = var_38_int;
			func_1233(var_37_string, var_38_int);
			@SendMessage(-7, var_37_string);
			var_11_int += 1;
		}
	}
Label_189:
	if(var_3_int == 0) {
		int var_52_int;
		var_5_int = var_52_int;
		func_718(var_52_int);
	}
	if(var_5_int == 273) {

		for(;;) {
			if(!(0 < 4)) goto Label_214;
			string var_78_string; int var_79_int;
			var_12_int = var_79_int;
			func_1249(var_78_string, var_79_int);
			@SendMessage(-2, var_78_string);
			var_12_int += 1;
		}
	}
Label_214:
	if(var_5_int == 271) {

		for(;;) {
			if(!(0 < 4)) goto Label_231;
			string var_86_string; int var_87_int;
			var_13_int = var_87_int;
			func_1249(var_86_string, var_87_int);
			@SendMessage(-3, var_86_string);
			var_13_int += 1;
		}
	}
Label_231:
}


void func_411(int var_2_int)
{
	object var_18_object;
	@GetContainer(var_18_object);
	int var_19_int;
	var_18_object->GetItemCount(var_19_int);
	if(var_19_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_2_int = 0;
	} else if((var_2_int + 4) > var_19_int) {
			var_2_int -= ((var_2_int + 4) - var_19_int);
			@SendMessage(((var_2_int * 100) / (var_19_int - 4)), "scrollbar");
	}
	
	@SendMessage(((var_2_int * 100) / (var_19_int - 4)), "scrollbar");
}
EMIT "Stack[-4] = 0";


void func_926(int var_177_int)
{
	object var_182_object;
	func_232(var_182_object);
	object var_180_object;
	var_182_object = var_180_object;
	int var_181_int;
	var_180_object->GetProperty("money", var_181_int);
	var_181_int = var_177_int;
}
EMIT "Stack[-2] = 0";


void func_937(int var_182_int)
{
	object var_185_object;
	func_232(var_185_object);
	object var_184_object;
	var_185_object = var_184_object;
	var_184_object->SetProperty("money", var_182_int);
}
EMIT "Stack[-1] = 0";


void func_682(int var_91_int)
{
	int var_94_int; int var_95_int;
	if(var_91_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_700;
			string var_101_string; int var_102_int;
			var_94_int = var_102_int;
			func_1233(var_101_string, var_102_int);
			@SendMessage(-2, var_101_string);
			var_94_int += 1;
		}
	}
Label_700:
	if(var_91_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_717;
			string var_109_string; int var_110_int;
			var_95_int = var_110_int;
			func_1233(var_109_string, var_110_int);
			@SendMessage(-3, var_109_string);
			var_95_int += 1;
		}
	}
Label_717:
}


void func_947(void)
{
	int var_177_int;
	func_926(var_177_int);
	@SendMessage(var_177_int, "money");
}


// @pe
void func_954(int var_81_int)
{
	if(var_81_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_81_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_81_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_81_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_81_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


// @pe
void func_61(void)
{
	func_573();
	string var_209_string;
	func_1249(var_209_string, 0);
	@SendMessage(-6, var_209_string);
}


void func_573(void)
{
	string var_206_string;
	func_1233(var_206_string, 0);
	@SendMessage(-6, var_206_string);
}


void func_452(int var_2_int)
{
	object var_220_object; object var_223_object; int var_224_int; int var_225_int;
	@GetContainer(var_220_object);
	int var_221_int;
	var_220_object->GetItemCount(var_221_int);
	int var_222_int = var_2_int;
	
	for(;;) {
		if(var_222_int < (var_2_int + 4)) {
			if(var_222_int < var_221_int) {
				var_220_object->GetItem(var_223_object, var_222_int);
				var_223_object->GetItemID(var_224_int);
				var_220_object->GetItemAmount(var_225_int, var_222_int);
				string var_231_string;
				func_1249(var_231_string, (var_222_int - var_2_int));
				@SendMessage(0, var_231_string, var_223_object);
				string var_235_string;
				func_1249(var_235_string, (var_222_int - var_2_int));
				@SendMessage((var_225_int | 65536), var_235_string);
				var_223_object = null;
			} else {
			string var_239_string;
			func_1249(var_239_string, (var_222_int - var_2_int));
			@SendMessage(32768, var_239_string);
		}
		}
		var_222_int += 1;
	}
	
}
EMIT "Stack[-6] = 0";


void func_1096(int var_0_int, bool var_291_bool, int var_292_int, int var_293_int)
{
	int var_309_int; bool var_310_bool; bool var_311_bool;
	object var_312_object;
	func_232(var_312_object);
	object var_304_object;
	var_312_object = var_304_object;
	object var_303_object;
	@GetContainer(var_303_object);
	int var_306_int;
	var_304_object->GetItemCount(var_306_int, var_292_int);
	if(var_306_int <= var_293_int) {
		var_291_bool = false;
		return 18;
	}
	int var_307_int;
	var_304_object->GetItemAmount(var_307_int, var_293_int, var_292_int);
	object var_305_object;
	var_304_object->GetItem(var_305_object, var_293_int, var_292_int);
	bool var_308_bool;
	var_303_object->AddItem(var_308_bool, var_305_object, 0, 1);
	if(!var_308_bool) { //@nz
		var_291_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_305_object->GetItemID(var_309_int);
		@HasInvItemProperty(var_310_bool, var_309_int, "Weapon");
		if(var_310_bool != 0) {
			var_304_object->IsItemSelected(var_311_bool, var_293_int, var_0_int);
			if(var_311_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_304_object->RemoveItem(var_293_int, 1, var_292_int);
	var_291_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


void func_72(int var_3_int, int var_44_int)
{
	int var_49_int; int var_50_int; int var_51_int; int var_52_int;
	if(var_44_int == 267) {
		var_3_int = 2;

		for(;;) {
			if(!(0 < 4)) goto Label_91;
			string var_58_string; int var_59_int;
			var_49_int = var_59_int;
			func_1249(var_58_string, var_59_int);
			@SendMessage(-7, var_58_string);
			var_49_int += 1;
		}
	}
Label_91:
	if(var_44_int == 268) {
		var_3_int = 0;

		for(;;) {
			if(!(0 < 12)) goto Label_109;
			string var_76_string; int var_77_int;
			var_50_int = var_77_int;
			func_1233(var_76_string, var_77_int);
			@SendMessage(-7, var_76_string);
			var_50_int += 1;
		}
	}
Label_109:
	if(var_3_int == 0) {
		int var_91_int;
		var_44_int = var_91_int;
		func_682(var_91_int);
	}
	if(var_44_int == 269) {

		for(;;) {
			if(!(0 < 4)) goto Label_134;
			string var_117_string; int var_118_int;
			var_51_int = var_118_int;
			func_1249(var_117_string, var_118_int);
			@SendMessage(-2, var_117_string);
			var_51_int += 1;
		}
	}
Label_134:
	if(var_44_int == 270) {

		for(;;) {
			if(!(0 < 4)) goto Label_151;
			string var_125_string; int var_126_int;
			var_52_int = var_126_int;
			func_1249(var_125_string, var_126_int);
			@SendMessage(-3, var_125_string);
			var_52_int += 1;
		}
	}
Label_151:
}


void func_718(int var_52_int)
{
	int var_55_int; int var_56_int;
	if(var_52_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_736;
			string var_62_string; int var_63_int;
			var_55_int = var_63_int;
			func_1233(var_62_string, var_63_int);
			@SendMessage(-2, var_62_string);
			var_55_int += 1;
		}
	}
Label_736:
	if(var_52_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_753;
			string var_70_string; int var_71_int;
			var_56_int = var_71_int;
			func_1233(var_70_string, var_71_int);
			@SendMessage(-3, var_70_string);
			var_56_int += 1;
		}
	}
Label_753:
}


// @pe
void func_1233(string var_147_string, int var_148_int)
{
	if((var_148_int + 1) < 10)
		var_147_string = "slot0" + (var_148_int + 1);
	var_147_string = "slot" + (var_148_int + 1);
}


// @pe
void func_1249(string var_48_string, int var_49_int)
{
	if((var_49_int + 1) < 10)
		var_48_string = "cslot0" + (var_49_int + 1);
	var_48_string = "cslot" + (var_49_int + 1);
}


void func_232(object var_127_object)
{
	object var_129_object;
	@GetPlayerContainer(var_129_object);
	var_129_object = var_127_object;
}
EMIT "Stack[-1] = 0";


void func_238(int var_2_int, int var_3_int, bool var_21_bool, int var_22_int, string var_23_string)
{
	object var_30_object; int var_31_int; int var_32_int; object var_33_object; int var_34_int;
	if(var_22_int == -4) {
		string var_37_string;
		func_1249(var_37_string, 0);
		if(var_23_string == var_37_string) {
			if(var_2_int > 0) {
				var_2_int += -1;
				func_452(var_34_int);
				func_411(var_34_int);
			}
		} else {
			string var_109_string;
			func_1249(var_109_string, 3);
			if(!(var_23_string == var_109_string)) goto Label_283;
			@GetContainer(var_30_object);
			var_30_object->GetItemCount(var_31_int);
			if((var_2_int + 4) <= var_31_int) {
				var_2_int += 1;
				func_452(var_34_int);
				func_411(var_34_int);
			}
			var_30_object = null;
	}
		if(var_22_int == -8) {
			var_3_int = 0;
			var_21_bool = true;
			return 10;
		}
		if(var_22_int == -9) {
			var_3_int = 2;
			var_21_bool = true;
			return 10;
		}
		if(var_22_int < 0) {
			var_21_bool = true;
			return 10;
		}

		while(0 < 4) {
			string var_124_string; int var_125_int;
			var_32_int = var_125_int;
			func_1249(var_124_string, var_125_int);
			if(var_23_string == var_124_string) {
				int var_127_int; bool var_128_bool;
				var_32_int = var_127_int;
				var_128_bool = var_22_int == 0;
				func_382(var_127_int, var_128_bool);
				var_21_bool = true;
				return 10;
			}
			var_32_int += 1;
		}

		if(var_23_string == "scrollbar") {
			@GetContainer(var_33_object);
			var_33_object->GetItemCount(var_34_int);
			if((((0.01 * (var_34_int - 4)) * var_22_int) + 0.5) < 0)
				var_2_int = 0;
			func_452(var_34_int);
			var_21_bool = true;
			return 10;
		EMIT "Stack[-2] = 0";
		}
		var_21_bool = false;
		return 10;
	}
Label_283:
	@SendMessage(-4, var_23_string);
	var_21_bool = true;
	
}


void func_1265(int var_170_int)
{
	int var_172_int;
	@GetInvItemByName(var_172_int, "Money");
	var_172_int = var_170_int;
}


// @pe
void func_754(bool var_142_bool)
{
	var_142_bool = false;
}


void func_499(int var_0_int, int var_72_int)
{
	int var_77_int;
	var_72_int = var_77_int;
	object var_76_object;
	func_912(var_76_object, var_77_int);
	func_1146(-1);
	func_947();
	int var_75_int = 0;
	
	while(var_75_int < 12) {
		@CreateStringVector(var_76_object);
		string var_187_string;
		func_1233(var_187_string, (((var_75_int + 12) - 1) % 12));
		var_76_object->add(var_187_string);
		string var_194_string;
		func_1233(var_194_string, (((var_75_int + 12) + 1) % 12));
		var_76_object->add(var_194_string);
		string var_202_string; int var_203_int;
		var_75_int = var_203_int;
		func_1233(var_202_string, var_203_int);
		@SendMessage(-1, var_202_string, var_76_object);
		var_76_object = null;
		var_75_int += 1;
	}
	
	func_61();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_375();
	@ProcessEvents();
}


// @pe
void func_371(void)
{
	func_452(var_4_float);
}


void func_757(bool var_133_bool, int var_134_int, int var_135_int)
{
	object var_138_object;
	func_232(var_138_object);
	object var_139_object;
	func_232(var_139_object);
	object var_140_object;
	func_232(var_140_object);
	object var_141_object;
	func_232(var_141_object);
	bool var_137_bool;
	var_138_object->IsItemSelected(var_137_bool, var_134_int, var_135_int);
	var_137_bool = var_133_bool;
}


// @pe
void func_375(void)
{
	func_411(var_76_object);
	func_452(var_76_object);
}


void func_1016(int var_133_int, bool var_134_bool, int var_135_int)
{
	int var_155_int;
	var_134_bool = false;
	if(var_135_int == -1) {
		var_133_int = -1;
		return 22;
	}
	object var_160_object;
	func_232(var_160_object);
	object var_148_object;
	var_160_object = var_148_object;
	object var_147_object;
	@GetContainer(var_147_object);
	int var_150_int;
	var_147_object->GetItemCount(var_150_int);
	if(var_150_int <= var_135_int) {
		var_133_int = -1;
		return 22;
	}
	int var_151_int;
	var_147_object->GetItemAmount(var_151_int, var_135_int);
	if(var_151_int == 0) {
		var_133_int = -1;
		return 22;
	}
	object var_149_object;
	var_147_object->GetItem(var_149_object, var_135_int);
	int var_152_int;
	var_149_object->GetItemID(var_152_int);
	bool var_153_bool = false;
	var_149_object->HasProperty(var_153_bool, "Organ");
	if(var_153_bool != 0)
		var_149_object->RemoveProperty("Organ");
	int var_154_int;
	@GetInvItemProperty(var_154_int, var_152_int, "Category");
	int var_170_int;
	func_1265(var_170_int);
	if(var_152_int == var_170_int) {
		int var_175_int;
		func_926(var_175_int);
		var_175_int = var_155_int;
		var_155_int += var_151_int;
		int var_182_int;
		var_155_int = var_182_int;
		func_937(var_182_int);
		var_147_object->RemoveItem(var_135_int, var_151_int);
		func_947();
		var_134_bool = true;
		var_133_int = -1;
		return 22;
	}
	bool var_157_bool;
	var_148_object->AddItem(var_157_bool, var_149_object, var_154_int, 1);
	if(!var_157_bool) { //@nz
		var_154_int = var_133_int;
		return 22;
	}
	var_134_bool = true;
	var_147_object->RemoveItem(var_135_int, 1);
	var_154_int = var_133_int;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


void func_1146(int var_112_int)
{
	object var_123_object; int var_124_int; bool var_125_bool; bool var_126_bool;
	object var_127_object;
	func_232(var_127_object);
	object var_120_object;
	var_127_object = var_120_object;
	int var_121_int;
	var_120_object->GetItemCount(var_121_int, var_112_int);
	int var_122_int = 0;
	
	for(;;) {
		if(var_122_int < 12) {
			if(var_122_int < var_121_int) {
				var_120_object->GetItem(var_123_object, var_122_int, var_112_int);
				var_120_object->GetItemAmount(var_124_int, var_122_int, var_112_int);
				bool var_133_bool; int var_134_int; int var_135_int;
				var_122_int = var_134_int;
				var_112_int = var_135_int;
				func_757(var_133_bool, var_134_int, var_135_int);
				var_133_bool = var_125_bool;
				bool var_142_bool; object var_143_object;
				var_123_object = var_143_object;
				func_754(var_143_object);
				var_142_bool = var_126_bool;
				if(var_125_bool != 0) {
					if(var_126_bool != 0) {
						string var_147_string; int var_148_int;
						var_122_int = var_148_int;
						func_1233(var_147_string, var_148_int);
						@SendMessage(0, var_147_string, var_123_object);
					} else {
					string var_165_string; int var_166_int;
					var_122_int = var_166_int;
					func_1233(var_165_string, var_166_int);
					@SendMessage(16384, var_165_string, var_123_object);
				}
				if(var_126_bool != 0) {
					string var_169_string; int var_170_int;
					var_122_int = var_170_int;
					func_1233(var_169_string, var_170_int);
					@SendMessage(131072, var_169_string, var_123_object);
					goto Label_1211;
				}
				string var_172_string; int var_173_int;
				var_122_int = var_173_int;
				func_1233(var_172_string, var_173_int);
				@SendMessage(0, var_172_string, var_123_object);
			}
			string var_175_string; int var_176_int;
			var_122_int = var_176_int;
			func_1233(var_175_string, var_176_int);
			@SendMessage(32768, var_175_string);
		}
		}
		goto Label_1211;

	Label_1211:
		string var_161_string; int var_162_int;
		var_122_int = var_162_int;
		func_1233(var_161_string, var_162_int);
		@SendMessage((var_124_int | 65536), var_161_string);
		var_123_object = null;
		goto Label_1228;

	Label_1228:
		var_122_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_382(int var_2_int, int var_127_int)
{
	bool var_131_bool;
	bool var_134_bool;
	var_131_bool = var_134_bool;
	int var_133_int;
	func_1016(var_133_int, var_134_bool, (var_127_int + var_2_int));
	int var_132_int;
	var_133_int = var_132_int;
	func_912(var_131_bool, var_132_int);
	if(!var_131_bool) { //@nz
	}
	func_411(var_131_bool);
}


