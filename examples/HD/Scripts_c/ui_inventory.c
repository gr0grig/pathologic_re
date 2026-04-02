maintask task_0
{
	void init(int var_0_int, object var_1_object)
	{
		@CreateWindow("inventory_base.xml", false, var_1_object);
		func_157(var_1_object, 0);
	}

	// @pe
	void event_100(int var_0_int, object var_1_object, int var_2_int)
	{
		@DestroyWindow();
	}

	// @pe
	void event_102(int var_0_int, object var_1_object, int var_2_int)
	{
		int var_3_int;
		var_2_int = var_3_int;
		func_376(var_3_int);
	}

	// @pe
	void event_101(int var_0_int, object var_1_object, int var_2_int)
	{
		if(var_2_int == 266) {
			if(var_0_int == 0) {
				func_570(var_2_int, 1);
			} else {
					if(var_0_int == 1)
						func_570(var_2_int, 2);

				for(;;) {
					} else {
				if(var_0_int == 2) {
					func_570(var_2_int, 3);
				} else if(var_0_int == 3) {
					func_570(var_2_int, 4);
				} else if(var_0_int == 4) {
					func_570(var_2_int, 0);
				}
		}
			if(!(var_2_int == 265)) goto Label_335;
			if(var_0_int == 0) {
				func_570(var_2_int, 4);
			} else if(var_0_int == 1) {
				func_570(var_2_int, 0);
			} else if(var_0_int == 2) {
				func_570(var_2_int, 1);
			} else if(var_0_int == 3) {
				func_570(var_2_int, 2);
			} else if(var_0_int == 4) {
				func_570(var_2_int, 3);
				}
			}
		Label_335:
			int var_42_int;
			var_2_int = var_42_int;
			func_340(var_42_int);
			return 0;

		}
	
	}

	// @pe
	void OnSee(int var_0_int, object var_1_object, float var_2_float)
	{
		func_714(var_0_int);
		func_595();
		func_18();
	}

	void event_200(int var_0_int, object var_1_object, int var_2_int, string var_3_string, object var_4_object)
	{
		bool var_11_bool; int var_12_int; int var_13_int; object var_14_object; int var_15_int; object var_16_object;
		if(var_2_int < 0) {
			bool var_19_bool; int var_20_int; string var_21_string; object var_22_object;
			var_2_int = var_20_int;
			var_3_string = var_21_string;
			var_4_object = var_22_object;
			func_15(var_22_object);
			var_19_bool = false;
			return 12;
		}
		if(var_3_string == "button_weapon") {
			func_570(var_16_object, 0);
			var_11_bool = true;
		} else if(var_3_string == "button_clothes") {
				func_570(var_16_object, 1);
				var_11_bool = true;
		}
	Label_558:
		for(;;) {
			if(!var_11_bool) { //@nz
				bool var_61_bool; int var_62_int; string var_63_string; object var_64_object;
				var_2_int = var_62_int;
				var_3_string = var_63_string;
				var_4_object = var_64_object;
				func_15(var_64_object);
				var_61_bool = var_11_bool;
			}
			if(var_11_bool != 0) {
			}
			return 12;

		}
	
		if(var_3_string == "button_medcine") {
			func_570(var_16_object, 2);
			var_11_bool = true;
		} else if(var_3_string == "button_food") {
			func_570(var_16_object, 3);
			var_11_bool = true;
		} else if(var_3_string == "button_other") {
			func_570(var_16_object, 4);
		} else if(var_3_string == "button_detector") {
		} else if(var_3_string == "button_anticeptic") {
		}
		if(var_2_int != 0) {
			@GetVariable("noinv_drop", var_12_int);
			if(var_12_int != 0)
				return 12;
		}
	
		for(;;) {
			if(!(0 < 12)) goto Label_558;
			string var_88_string; int var_89_int;
			var_13_int = var_89_int;
			func_801(var_88_string, var_89_int);
			if(var_3_string == var_88_string) {
				object var_101_object;
				func_9(var_101_object);
				var_101_object = var_14_object;
				var_14_object->GetItemCount(var_15_int, var_0_int);
				if(var_15_int > var_13_int) {
					var_14_object->GetItem(var_16_object, var_13_int, var_0_int);
					bool var_105_bool; object var_106_object;
					func_412(var_106_object);
					if(!var_105_bool) { //@nz
						bool var_108_bool; int var_109_int; bool var_110_bool;
						var_13_int = var_109_int;
						var_110_bool = var_2_int == 0;
						func_20(var_106_object, var_108_bool, var_109_int, var_110_bool);
						var_108_bool = true;
					}
					var_16_object = null;
				}
				goto Label_558;
			EMIT "Stack[-3] = 0";
			}
			var_13_int += 1;
		}
	}

}


void func_9(object var_59_object)
{
	object var_61_object;
	@GetPlayerContainer(var_61_object);
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_15(bool var_19_bool)
{
	var_19_bool = false;
}


void func_18(void)
{
}


void func_19(void)
{
}


// @pe
void func_20(int var_0_int, bool var_108_bool, int var_109_int, bool var_110_bool)
{
	if(var_110_bool != 0) {
		int var_113_int;
		var_109_int = var_113_int;
		func_35(var_110_bool, var_113_int);
	} else {
		bool var_184_bool; int var_186_int;
		var_109_int = var_186_int;
		func_664(var_110_bool, var_184_bool, var_0_int, var_186_int);
	}
	var_108_bool = true;
	
}


void func_664(int var_0_int, bool var_184_bool, int var_185_int, int var_186_int)
{
	int var_202_int; bool var_203_bool; bool var_204_bool;
	object var_205_object;
	func_9(var_205_object);
	object var_197_object;
	var_205_object = var_197_object;
	object var_196_object;
	@GetContainer(var_196_object);
	int var_199_int;
	var_197_object->GetItemCount(var_199_int, var_185_int);
	if(var_199_int <= var_186_int) {
		var_184_bool = false;
		return 18;
	}
	int var_200_int;
	var_197_object->GetItemAmount(var_200_int, var_186_int, var_185_int);
	object var_198_object;
	var_197_object->GetItem(var_198_object, var_186_int, var_185_int);
	bool var_201_bool;
	var_196_object->AddItem(var_201_bool, var_198_object, 0, 1);
	if(!var_201_bool) { //@nz
		var_184_bool = false;
		return 18;
	}
	if(var_0_int == 0) {
		var_198_object->GetItemID(var_202_int);
		@HasInvItemProperty(var_203_bool, var_202_int, "Weapon");
		if(var_203_bool != 0) {
			var_197_object->IsItemSelected(var_204_bool, var_186_int, var_0_int);
			if(var_204_bool != 0)
				@SetPlayerHandsItem(-1);
		}
	}
	var_197_object->RemoveItem(var_186_int, 1, var_185_int);
	var_184_bool = true;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_412(bool var_74_bool)
{
	var_74_bool = false;
}


void func_157(int var_0_int, int var_4_int)
{
	int var_9_int;
	var_4_int = var_9_int;
	object var_8_object;
	func_570(var_8_object, var_9_int);
	func_714(-1);
	func_595();
	int var_7_int = 0;
	
	while(var_7_int < 12) {
		@CreateStringVector(var_8_object);
		string var_119_string;
		func_801(var_119_string, (((var_7_int + 12) - 1) % 12));
		var_8_object->add(var_119_string);
		string var_126_string;
		func_801(var_126_string, (((var_7_int + 12) + 1) % 12));
		var_8_object->add(var_126_string);
		string var_134_string; int var_135_int;
		var_7_int = var_135_int;
		func_801(var_134_string, var_135_int);
		@SendMessage(-1, var_134_string, var_8_object);
		var_8_object = null;
		var_7_int += 1;
	}
	
	func_231();
	@SetCursor("default");
	@ShowCursor();
	@CaptureKeyboard();
	@SetOwnerDraw(false);
	@SetNeedUpdate(true);
	func_19();
	@ProcessEvents();
}


void func_415(bool var_65_bool, int var_66_int, int var_67_int)
{
	object var_70_object;
	func_9(var_70_object);
	object var_71_object;
	func_9(var_71_object);
	object var_72_object;
	func_9(var_72_object);
	object var_73_object;
	func_9(var_73_object);
	bool var_69_bool;
	var_70_object->IsItemSelected(var_69_bool, var_66_int, var_67_int);
	var_69_bool = var_65_bool;
}


// @pe
void func_801(string var_79_string, int var_80_int)
{
	if((var_80_int + 1) < 10)
		var_79_string = "slot0" + (var_80_int + 1);
	var_79_string = "slot" + (var_80_int + 1);
}


void func_35(int var_0_int, int var_113_int)
{
	bool var_138_bool; int var_139_int; bool var_140_bool; int var_141_int; int var_142_int; bool var_143_bool; object var_144_object; int var_145_int; bool var_146_bool; int var_147_int; bool var_148_bool;
	object var_150_object;
	func_9(var_150_object);
	object var_132_object;
	var_150_object = var_132_object;
	int var_133_int;
	var_132_object->GetItemCount(var_133_int, var_0_int);
	if(var_113_int >= var_133_int)
		return 36;
	object var_134_object;
	var_132_object->GetItem(var_134_object, var_113_int, var_0_int);
	int var_135_int;
	var_134_object->GetItemID(var_135_int);
	int var_136_int;
	var_132_object->GetItemAmount(var_136_int, var_113_int, var_0_int);
	bool var_137_bool;
	var_132_object->IsItemSelected(var_137_bool, var_113_int, var_0_int);
	if(var_0_int == 0) {
		@HasInvItemProperty(var_138_bool, var_135_int, "Weapon");
		if(!var_138_bool) //@nz
			return 36;
		if(var_137_bool != 0) {
			var_132_object->SelectItem(var_113_int, false, var_0_int);
			@SetPlayerHandsItem(-1);
		} else {
				@SetPlayerHandsItem(var_135_int);
				var_139_int = 0;

				while(var_139_int < var_133_int) {
					var_132_object->SelectItem(var_139_int, false, var_0_int);
					var_139_int += 1;
				}

				var_132_object->SelectItem(var_113_int, true, var_0_int);
	}
			if(var_0_int == 1) {
				@HasInvItemProperty(var_140_bool, var_135_int, "Group");
				if(!var_140_bool) //@nz
					return 36;
				@GetInvItemProperty(var_141_int, var_135_int, "Group");
				if(var_137_bool != 0) {
					var_132_object->SelectItem(var_113_int, false, var_0_int);
				} else {
				var_142_int = 0;

				for(;;) {
					if(var_142_int < var_133_int) {
						var_132_object->IsItemSelected(var_143_bool, var_142_int, var_0_int);
						if(!var_143_bool) { //@nz
						} else {
						var_132_object->GetItem(var_144_object, var_142_int, var_0_int);
						var_144_object->GetItemID(var_145_int);
						@HasInvItemProperty(var_146_bool, var_145_int, "Group");
						if(!var_146_bool) { //@nz
							goto Label_132;
						}
						@GetInvItemProperty(var_147_int, var_145_int, "Group");
						if(var_147_int == var_141_int)
							var_132_object->SelectItem(var_142_int, false, var_0_int);
						else
							var_144_object = null;
						@UseItem(var_113_int, var_0_int, var_148_bool);
						if(var_148_bool == 0) goto Label_154;
						var_136_int += -1;
						if(var_136_int == 0) {
							var_132_object->RemoveItem(var_113_int, 1, var_0_int);
							goto Label_154;
						}
						var_132_object->SetItemAmount(var_136_int, var_113_int, var_0_int);
					}
				}
				var_132_object->SelectItem(var_113_int, true, var_0_int);
				}
			Label_132:
				var_142_int += 1;
			}
			}
	}
	goto Label_154;
	
Label_154:
	for(;;) {
		return 36;

	}
	
}
EMIT "Stack[-16] = 0";
EMIT "Stack[-18] = 0";


// @pe
void func_570(int var_0_int, int var_9_int)
{
	if(var_9_int == -1)
		return 0;
	if(var_0_int == var_9_int)
		return 0;
	func_602(var_9_int);
}


void func_584(int var_109_int)
{
	object var_114_object;
	func_9(var_114_object);
	object var_112_object;
	var_114_object = var_112_object;
	int var_113_int;
	var_112_object->GetProperty("money", var_113_int);
	var_113_int = var_109_int;
}
EMIT "Stack[-2] = 0";


void func_714(int var_44_int)
{
	object var_55_object; int var_56_int; bool var_57_bool; bool var_58_bool;
	object var_59_object;
	func_9(var_59_object);
	object var_52_object;
	var_59_object = var_52_object;
	int var_53_int;
	var_52_object->GetItemCount(var_53_int, var_44_int);
	int var_54_int = 0;
	
	for(;;) {
		if(var_54_int < 12) {
			if(var_54_int < var_53_int) {
				var_52_object->GetItem(var_55_object, var_54_int, var_44_int);
				var_52_object->GetItemAmount(var_56_int, var_54_int, var_44_int);
				bool var_65_bool; int var_66_int; int var_67_int;
				var_54_int = var_66_int;
				var_44_int = var_67_int;
				func_415(var_65_bool, var_66_int, var_67_int);
				var_65_bool = var_57_bool;
				bool var_74_bool; object var_75_object;
				var_55_object = var_75_object;
				func_412(var_75_object);
				var_74_bool = var_58_bool;
				if(var_57_bool != 0) {
					if(var_58_bool != 0) {
						string var_79_string; int var_80_int;
						var_54_int = var_80_int;
						func_801(var_79_string, var_80_int);
						@SendMessage(0, var_79_string, var_55_object);
					} else {
					string var_97_string; int var_98_int;
					var_54_int = var_98_int;
					func_801(var_97_string, var_98_int);
					@SendMessage(16384, var_97_string, var_55_object);
				}
				if(var_58_bool != 0) {
					string var_101_string; int var_102_int;
					var_54_int = var_102_int;
					func_801(var_101_string, var_102_int);
					@SendMessage(131072, var_101_string, var_55_object);
					goto Label_779;
				}
				string var_104_string; int var_105_int;
				var_54_int = var_105_int;
				func_801(var_104_string, var_105_int);
				@SendMessage(0, var_104_string, var_55_object);
			}
			string var_107_string; int var_108_int;
			var_54_int = var_108_int;
			func_801(var_107_string, var_108_int);
			@SendMessage(32768, var_107_string);
		}
		}
		goto Label_779;

	Label_779:
		string var_93_string; int var_94_int;
		var_54_int = var_94_int;
		func_801(var_93_string, var_94_int);
		@SendMessage((var_56_int | 65536), var_93_string);
		var_55_object = null;
		goto Label_796;

	Label_796:
		var_54_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


void func_595(void)
{
	int var_109_int;
	func_584(var_109_int);
	@SendMessage(var_109_int, "money");
}


void func_340(int var_42_int)
{
	int var_45_int; int var_46_int;
	if(var_42_int == 269) {

		for(;;) {
			if(!(0 < 12)) goto Label_358;
			string var_52_string; int var_53_int;
			var_45_int = var_53_int;
			func_801(var_52_string, var_53_int);
			@SendMessage(-2, var_52_string);
			var_45_int += 1;
		}
	}
Label_358:
	if(var_42_int == 270) {

		for(;;) {
			if(!(0 < 12)) goto Label_375;
			string var_70_string; int var_71_int;
			var_46_int = var_71_int;
			func_801(var_70_string, var_71_int);
			@SendMessage(-3, var_70_string);
			var_46_int += 1;
		}
	}
Label_375:
}


// @pe
void func_602(int var_13_int)
{
	if(var_13_int != 0)
		@SendMessage(0, "button_weapon");
	else
		@SendMessage(1, "button_weapon");
	if(var_13_int != 1)
		@SendMessage(0, "button_clothes");
	else
		@SendMessage(1, "button_clothes");

	if(var_13_int != 2)
		@SendMessage(0, "button_medcine");
	else
		@SendMessage(1, "button_medcine");

	if(var_13_int != 3)
		@SendMessage(0, "button_food");
	else
		@SendMessage(1, "button_food");

	if(var_13_int != 4)
		@SendMessage(0, "button_other");
	else
		@SendMessage(1, "button_other");

	
}


void func_231(void)
{
	string var_138_string;
	func_801(var_138_string, 0);
	@SendMessage(-6, var_138_string);
}


void func_376(int var_3_int)
{
	int var_6_int; int var_7_int;
	if(var_3_int == 273) {

		for(;;) {
			if(!(0 < 12)) goto Label_394;
			string var_13_string; int var_14_int;
			var_6_int = var_14_int;
			func_801(var_13_string, var_14_int);
			@SendMessage(-2, var_13_string);
			var_6_int += 1;
		}
	}
Label_394:
	if(var_3_int == 271) {

		for(;;) {
			if(!(0 < 12)) goto Label_411;
			string var_31_string; int var_32_int;
			var_7_int = var_32_int;
			func_801(var_31_string, var_32_int);
			@SendMessage(-3, var_31_string);
			var_7_int += 1;
		}
	}
Label_411:
}


