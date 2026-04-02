maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@GetWindowData(var_5_object);
		if(!var_5_object) { //@nz
			@DestroyWindow();
			return 8;
		}
		var_5_object->GetProperty("agony", var_6_float); //@t
		string var_12_string;
		int var_13_int;
		object var_14_object;
		string var_15_string;
		string var_16_string;
		func_113(var_12_string, var_13_int, var_14_object, var_15_string, var_16_string);
		var_8_int = 1;
		var_13_int = 0;
	
		for(;;) {
			if(var_13_int < 4) {
				@CreateStringVector(var_14_object);
				if((var_13_int - 1) >= 0) {
					string var_68_string;
					func_779(var_68_string, (var_13_int - 1));
					var_68_string = var_15_string;
				} else {
					var_15_string = "$parent";
			}
				string var_93_string;
				func_779(var_93_string, 0);
				@SendMessage(-6, var_93_string);
				func_387(var_15_string, var_16_string);
				func_416(var_13_int, var_14_object, var_15_string, var_16_string);
				func_378();
				@ProcessEvents();
				return 8;
			}
			if((var_13_int + 1) < 4) {
				string var_85_string;
				func_779(var_85_string, (var_13_int + 1));
				var_85_string = var_16_string;
			} else {

			}
			var_14_object->add(var_15_string);
			var_14_object->add("$parent");
			string var_89_string; int var_90_int;
			var_13_int = var_90_int;
			func_779(var_89_string, var_90_int);
			@SendMessage(-1, var_89_string, var_14_object);
			var_14_object = null;
			var_13_int += 1;
		}
	
	}

	void event_101(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int)
	{
		int var_13_int; int var_14_int; int var_15_int;
		if(var_9_int == 267) {
			var_8_int = 1;

			for(;;) {
				if(!(0 < 4)) goto Label_194;
				string var_21_string; int var_22_int;
				var_13_int = var_22_int;
				func_779(var_21_string, var_22_int);
				@SendMessage(-7, var_21_string);
				var_13_int += 1;
			}
		}
	Label_194:
		if(var_9_int == 268) {
			var_8_int = 0;
			@SendMessage(-4, "ok");
		}
		if(var_9_int == 269) {
			if(var_8_int == 1) {

				while(0 < 4) {
					string var_45_string; int var_46_int;
					var_14_int = var_46_int;
					func_779(var_45_string, var_46_int);
					@SendMessage(-2, var_45_string);
					var_14_int += 1;
				}

			} else {
						@SendMessage(-4, "ok");
			}
		}
		if(var_9_int == 270) {
			if(var_8_int == 1) {

				while(0 < 4) {
					string var_55_string; int var_56_int;
					var_15_int = var_56_int;
					func_779(var_55_string, var_56_int);
					@SendMessage(-3, var_55_string);
					var_15_int += 1;
				}

			} else {
				@SendMessage(-4, "cancel");

			}
		}
	
	}

	void event_102(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int)
	{
		int var_13_int; int var_14_int; int var_15_int;
		if(var_9_int == 272) {
			var_8_int = 1;

			for(;;) {
				if(!(0 < 4)) goto Label_272;
				string var_21_string; int var_22_int;
				var_13_int = var_22_int;
				func_779(var_21_string, var_22_int);
				@SendMessage(-7, var_21_string);
				var_13_int += 1;
			}
		}
	Label_272:
		if(var_9_int == 274) {
			var_8_int = 0;
			@SendMessage(-4, "ok");
		}
		if(var_9_int == 273) {
			if(var_8_int == 1) {

				while(0 < 4) {
					string var_45_string; int var_46_int;
					var_14_int = var_46_int;
					func_779(var_45_string, var_46_int);
					@SendMessage(-2, var_45_string);
					var_14_int += 1;
				}

			} else {
						@SendMessage(-4, "ok");
			}
		}
		if(var_9_int == 271) {
			if(var_8_int == 1) {

				while(0 < 4) {
					string var_55_string; int var_56_int;
					var_15_int = var_56_int;
					func_779(var_55_string, var_56_int);
					@SendMessage(-3, var_55_string);
					var_15_int += 1;
				}

			} else {
				@SendMessage(-4, "cancel");

			}
		}
	
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnPlayerHolsterWeapon(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float)
	{
		if(var_11_float > 0) {
		} else if((float)1 < 0) {
			var_11_float = -1;
		}
		if((var_7_int + var_11_float) < 0)
			var_7_int = 0;
		func_387(var_10_int, var_11_float);
		func_416(var_8_int, var_9_int, var_10_int, var_11_float);
	
	}

	void event_200(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int, string var_10_string, object var_11_object)
	{
		int var_14_int; int var_15_int; int var_16_int; int var_17_int;
		if(var_9_int == -4) {
			string var_20_string;
			func_779(var_20_string, 0);
			if(var_10_string == var_20_string) {
				if(var_7_int > 0) {
					var_7_int += -1;
					func_416(var_14_int, var_15_int, var_16_int, var_17_int);
					func_387(var_16_int, var_17_int);
				}
			} else {
				string var_85_string;
				func_779(var_85_string, 3);
				if(!(var_10_string == var_85_string)) goto Label_512;
				var_0_object->size(var_15_int); //@t
				if(!((var_7_int + 4) <= var_15_int)) goto Label_512;
				var_7_int += 1;
				func_416(var_14_int, var_15_int, var_16_int, var_17_int);
				func_387(var_16_int, var_17_int);
		}
			if(var_9_int == -12) {
				var_8_int = 0;
				return 6;
			}
			if(var_9_int == -8) {
				var_8_int = 1;
				return 6;
			}
			if(var_9_int < 0)
				return 6;
			if(var_10_string == "ok") {
				func_685(var_17_int);
			} else if(var_10_string == "cancel") {
					func_707(var_17_int);
			}
		Label_591:
			for(;;) {
				return 6;

			}

			if(var_10_string == "scrollbar") {
				var_0_object->size(var_16_int); //@t
				if((((0.01 * (var_16_int - 4)) * var_9_int) + 0.5) < 0)
					var_7_int = 0;
				func_387(var_16_int, var_17_int);
				func_416(var_14_int, var_15_int, var_16_int, var_17_int);
				goto Label_591;
			}
			int var_205_int; int var_206_int; string var_207_string;
			var_9_int = var_206_int;
			var_10_string = var_207_string;
			func_800(var_206_int, var_207_string);
			var_205_int = var_17_int;
			if(!(var_17_int != -1)) goto Label_591;
			if(var_9_int == 0) {
				func_726(var_15_int, var_16_int, var_17_int, (var_17_int + var_7_int));
			} else if(var_9_int == 1) {
				func_753(var_16_int, var_17_int, (var_17_int + var_7_int));
			}
		}
	Label_512:
		@SendMessage(-4, var_10_string);
	
	}

}


void func_416(object var_0_object, object var_3_object, object var_4_object, int var_7_int)
{
	int var_119_int; object var_121_object; int var_122_int; int var_123_int;
	var_0_object->size(var_119_int); //@t
	int var_120_int = var_7_int;
	
	for(;;) {
		if(var_120_int < (4 + var_7_int)) {
			if(var_120_int < var_119_int) {
				var_0_object->get(var_121_object, var_120_int); //@t
				var_3_object->get(var_122_int, var_120_int); //@t
				var_4_object->get(var_123_int, var_120_int); //@t
				if(var_122_int != 0) {
					string var_130_string;
					func_779(var_130_string, (var_120_int - var_7_int));
					@SendMessage(16384, var_130_string, var_121_object);
				} else {
				string var_138_string;
				func_779(var_138_string, (var_120_int - var_7_int));
				@SendMessage(0, var_138_string, var_121_object);
			}
			string var_141_string;
			func_779(var_141_string, (var_120_int - var_7_int));
			@SendMessage(32768, var_141_string);
		}
		}
		string var_134_string;
		func_779(var_134_string, (var_120_int - var_7_int));
		@SendMessage((var_122_int | 65536), var_134_string);
		var_121_object = null;
		goto Label_466;

	Label_466:
		var_120_int += 1;
	}
	
}


void func_800(int var_205_int, string var_207_string)
{
	int var_209_int;
	
	while(0 < 4) {
		string var_212_string; int var_213_int;
		var_209_int = var_213_int;
		func_779(var_212_string, var_213_int);
		if(var_207_string == var_212_string)
			var_209_int = var_205_int;
		var_209_int += 1;
	}
	
	var_205_int = -1;
}


void func_387(object var_0_object, int var_7_int)
{
	int var_97_int;
	var_0_object->size(var_97_int); //@t
	if(var_97_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_7_int = 0;
	} else if((var_7_int + 4) > var_97_int) {
		@SendMessage((((var_7_int - ((var_7_int + 4) - var_97_int)) * 100) / (var_97_int - 4)), "scrollbar");
	}
	
}


void func_707(object var_3_object)
{
	int var_186_int;
	var_3_object->size(var_186_int); //@t
	int var_187_int = 0;
	
	while(var_187_int < var_186_int) {
		var_3_object->set(var_187_int, 0); //@t
		var_187_int += 1;
	}
	
	int var_184_int;
	int var_185_int;
	func_416(var_184_int, var_185_int, var_186_int, var_187_int);
	func_378();
}


void func_357(object var_0_object, object var_1_object, object var_3_object, float var_6_float, float var_144_float)
{
	float var_151_float; object var_154_object; float var_155_float; int var_156_int;
	var_151_float = var_6_float;
	int var_152_int;
	var_0_object->size(var_152_int); //@t
	int var_153_int = 0;
	
	while(var_153_int < var_152_int) {
		var_0_object->get(var_154_object, var_153_int); //@t
		var_1_object->get(var_155_float, var_153_int); //@t
		var_3_object->get(var_156_int, var_153_int); //@t
		var_151_float -= (var_156_int * var_155_float);
		var_154_object = null;
		var_153_int += 1;
	}
	
	var_151_float = var_144_float;
}


void func_91(object var_0_object, bool var_47_bool, int var_48_int)
{
	int var_52_int; object var_54_object;
	var_0_object->size(var_52_int); //@t
	int var_53_int = 0;
	
	while(var_53_int < var_52_int) {
		var_0_object->get(var_54_object, var_53_int); //@t
		int var_56_int; object var_57_object;
		var_54_object = var_57_object;
		func_795(var_56_int, var_57_object);
		if(var_56_int == var_48_int)
			var_47_bool = true;
		var_54_object = null;
		var_53_int += 1;
	}
	
	var_47_bool = false;
}


// @pe
void func_779(string var_68_string, int var_69_int)
{
	if((var_69_int + 1) < 10)
		var_68_string = "slot0" + (var_69_int + 1);
	var_68_string = "slot" + (var_69_int + 1);
}


void func_685(object var_5_object)
{
	float var_100_float; float var_101_float;
	float var_102_float;
	func_357(var_16_int, var_17_int, var_100_float, var_101_float, var_102_float);
	var_102_float = var_101_float;
	if(var_101_float < 0.001)
		var_101_float = 0;
	@Trace("Do " + var_101_float);
	var_5_object->SetProperty("agony", var_101_float); //@t
	func_654(var_100_float, var_101_float);
	@DestroyWindow();
}


void func_654(object var_0_object, object var_3_object)
{
	int var_128_int; int var_130_int; object var_131_object; int var_132_int;
	var_3_object->size(var_128_int); //@t
	int var_129_int = 0;
	
	while(var_129_int < var_128_int) {
		var_3_object->get(var_130_int, var_129_int); //@t
		if(var_130_int != 0) {
			var_0_object->get(var_131_object, var_129_int); //@t
			var_132_int = 0;

			while(var_132_int < var_130_int) {
				int var_136_int;
				int var_137_int; object var_138_object;
				var_131_object = var_138_object;
				func_795(var_137_int, var_138_object);
				var_137_int = var_136_int;
				func_592(var_132_int, var_136_int);
				var_132_int += 1;
			}

			var_131_object = null;
		}
		var_129_int += 1;
	}
	
}


void func_592(object var_2_object, int var_136_int)
{
	int var_149_int; float var_151_float; object var_153_object; int var_154_int; bool var_155_bool; float var_156_float;
	var_2_object->GetItemCount(var_149_int, 2); //@t
	int var_150_int = -1;
	int var_152_int = 0;
	
	for(;;) {
		if(var_152_int < var_149_int) {
			var_2_object->GetItem(var_153_object, var_152_int, 2); //@t
			int var_160_int; object var_161_object;
			var_153_object = var_161_object;
			func_795(var_160_int, var_161_object);
			var_160_int = var_154_int;
			if(var_154_int == var_136_int) {
				var_153_object->HasProperty(var_155_bool, "disease");
				if(!var_155_bool) { //@nz
					bool var_165_bool = true;
					var_167_bool = var_150_int == -1;
					if(var_167_bool != 1) {
						var_169_bool = var_151_float > 0;
						if(var_169_bool != 1)
							var_165_bool = false;
					}
					if(var_165_bool != 0) {
						var_152_int = var_150_int;
						var_151_float = 0;
					}
				} else {
				var_153_object->GetProperty(var_156_float, "disease");
				bool var_172_bool = true;
				var_174_bool = var_150_int == -1;
				if(var_174_bool != 1) {
					var_175_bool = var_156_float < var_151_float;
					if(var_175_bool != 1)
						var_172_bool = false;
				}
				if(var_172_bool == 0) goto Label_642;
				var_152_int = var_150_int;
				var_156_float = var_151_float;
		}
			if(var_150_int != -1)
				var_2_object->RemoveItem(var_150_int, 1, 2); //@t
			}
		}
	Label_642:
		var_153_object = null;
		var_152_int += 1;
	}
	
}


void func_113(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	object var_30_object; int var_31_int; bool var_32_bool; float var_33_float; int var_34_int;
	@CreateObjectVector(var_0_object);
	@CreateFloatVector(var_1_object);
	@CreateIntVector(var_3_object);
	@CreateIntVector(var_4_object);
	@FindActor(var_2_object, "player");
	if(!var_2_object) { //@nz
		@DestroyWindow();
		return 14;
	}
	int var_28_int;
	var_2_object->GetItemCount(var_28_int, 2); //@t
	int var_29_int = 0;
	
	for(;;) {
		if(var_29_int < var_28_int) {
			var_2_object->GetItem(var_30_object, var_29_int, 2); //@t
			int var_40_int; object var_41_object;
			func_795(var_40_int, var_41_object);
			var_40_int = var_31_int;
			@HasInvItemProperty(var_32_bool, var_31_int, "Agony");
			if(!var_32_bool) { //@nz
			} else {
			bool var_47_bool; int var_48_int;
			var_31_int = var_48_int;
			func_91(var_34_int, var_47_bool, var_48_int);
			if(var_47_bool != 0) {
				goto Label_171;
			}
			@GetInvItemProperty(var_33_float, var_31_int, "Agony");
			var_2_object->GetItemCountOfType(var_34_int, var_31_int); //@t
			var_0_object->add(var_41_object); //@t
			var_1_object->add(var_33_float); //@t
			var_4_object->add(var_34_int); //@t
			var_3_object->add(0); //@t
			var_30_object = null;
		}
		return 14;
		}
	Label_171:
		var_29_int += 1;
	}
	
}


void func_753(object var_0_object, object var_3_object, int var_234_int)
{
	int var_238_int;
	var_3_object->size(var_238_int); //@t
	if(var_234_int >= var_238_int)
		return 6;
	object var_239_object;
	var_0_object->get(var_239_object, var_234_int); //@t
	int var_240_int;
	var_3_object->get(var_240_int, var_234_int); //@t
	if(var_240_int == 0)
		return 6;
	var_240_int -= 1;
	var_3_object->set(var_234_int, var_240_int); //@t
	int var_237_int;
	func_416(var_237_int, var_238_int, var_239_object, var_240_int);
	func_378();
}
EMIT "Stack[-2] = 0";


void func_726(object var_0_object, object var_3_object, object var_4_object, int var_220_int)
{
	int var_225_int;
	var_3_object->size(var_225_int); //@t
	if(var_220_int >= var_225_int)
		return 8;
	object var_226_object;
	var_0_object->get(var_226_object, var_220_int); //@t
	int var_227_int;
	var_4_object->get(var_227_int, var_220_int); //@t
	int var_228_int;
	var_3_object->get(var_228_int, var_220_int); //@t
	if(var_227_int <= var_228_int)
		return 8;
	var_228_int += 1;
	var_3_object->set(var_220_int, var_228_int); //@t
	func_416(var_225_int, var_226_object, var_227_int, var_228_int);
	func_378();
}
EMIT "Stack[-3] = 0";


void func_378(void)
{
	var_143_int = 100;
	float var_144_float;
	func_357(var_14_object, var_15_string, var_16_string, var_143_int, var_144_float);
	@SendMessage((var_143_int * var_144_float), "level");
}


void func_795(int var_40_int, object var_41_object)
{
	int var_43_int;
	var_41_object->GetItemID(var_43_int);
	var_43_int = var_40_int;
}


