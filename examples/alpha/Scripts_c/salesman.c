// @GLOBALS: 0:int:,1:int:,2:int:,3:int:,4:int:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int)
	{
		@StopGroup0();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, float var_3_float, int var_4_int)
	{
		@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


maintask task_2
{
	void init(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int)
	{
		func_28();
		int var_52_int;
		func_454(var_52_int);
		func_1286();
		func_153(var_52_int, var_3_int);
	}

	void OnLoad(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int)
	{
		@Trace("load salesman");
		int var_5_int;
		func_454(var_5_int);
		if(var_5_int != var_2_float) {
			@Trace("Updating salesman");
			int var_13_int;
			func_454(var_13_int);
			var_2_float = var_13_int;
			func_1286();
		}
		@StopGroup0();
	}

	void OnUnload(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int)
	{
		@Hold();
	}

	void OnSee(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int, object var_4_object)
	{
		if(var_0_bool != null)
			return 2;
		bool var_6_bool;
		@IsPlayerActor(var_4_object, var_6_bool);
		if(!var_6_bool) //@nz
			return 2;
		var_1_object = 0;
		func_344(var_4_object);
		@SetTimer(111, 0.2);
		@SetTimer(112, 3.0);
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int, object var_4_object)
	{
		object var_5_object;
		var_4_object = var_5_object;
		func_1360(var_5_object);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int, object var_4_object)
	{
		object var_5_object;
		var_4_object = var_5_object;
		func_344(var_5_object);
	}

	void OnTimer(bool var_0_bool, object var_1_object, float var_2_float, int var_3_int, int var_4_int)
	{
		cvector var_7_cvector; cvector var_8_cvector;
		if(var_4_int == 111) {
			bool var_11_bool;
			func_320(var_11_bool, var_0_bool);
			if(!var_11_bool) { //@nz
				@KillTimer(112);
				@KillTimer(111);
				var_0_bool = null;
				return 4;
			}
			@GetDirection(var_7_cvector);
			cvector var_48_cvector;
			func_260(var_48_cvector, var_0_bool);
			var_48_cvector = var_8_cvector;
			float var_54_float; cvector var_55_cvector; cvector var_56_cvector;
			var_7_cvector = var_55_cvector;
			var_8_cvector = var_56_cvector;
			func_437(var_54_float, var_55_cvector, var_56_cvector);
			if(var_54_float < 0.76604444)
				func_344(var_0_bool);
			return 4;
		}
		if(var_4_int == 112) {
			@KillTimer(112);
			@KillTimer(111);
			var_0_bool = null;
			@ResetAAS();
		}
	}

}


void func_0(void)
{
	@Hold();
}


void func_260(cvector var_48_cvector, object var_49_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_49_object->GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
}


// @pe
void func_6(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		@WaitForAnimEnd();
		@PlayAnimation("all", "idle");
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


void func_519(bool var_72_bool, object var_73_object, int var_74_int)
{
	bool var_82_bool; int var_83_int; int var_84_int; int var_85_int; int var_86_int; int var_87_int; int var_88_int;
	if(var_74_int < 3) {
		var_72_bool = true;
		return 14;
	}
	if(var_74_int >= 2) {
		@irand(var_83_int, 3);
		if(var_83_int == 0) {
			int var_96_int;
			func_463(var_96_int, "Scalpel");
			var_73_object->AddItem(var_82_bool, var_96_int, 0, 1);
		} else if(var_83_int == 1) {
				int var_147_int;
				func_463(var_147_int, "Knife");
				var_73_object->AddItem(var_82_bool, var_147_int, 0, 1);
		}
	}
	for(;;) {
		if(var_74_int >= 5) {
			@irand(var_84_int, 4);
			if(var_84_int == 0) {
				@irand(var_85_int, 4);
				int var_109_int;
				func_463(var_109_int, "revolver_ammo");
				var_73_object->AddItem(var_82_bool, var_109_int, 0, (var_85_int + 1));
			} else if(var_84_int == 1) {
							@irand(var_86_int, 4);
							int var_131_int;
							func_463(var_131_int, "rifle_ammo");
							var_73_object->AddItem(var_82_bool, var_131_int, 0, (var_86_int + 1));
			}
		}
	Label_625:
		for(;;) {
			if(var_74_int >= 7) {
				@irand(var_88_int, 8);
				if(var_88_int == 0) {
					int var_117_int;
					func_463(var_117_int, "Rifle");
					var_73_object->AddItem(var_82_bool, var_117_int, 0, 1);
				} else if(var_88_int == 1) {
					int var_123_int;
					func_463(var_123_int, "bottle_weapon");
					var_73_object->AddItem(var_82_bool, var_123_int, 0, 1);

				}
			}
			var_72_bool = true;
			return 14;

		}

		if(var_84_int == 2) {
			@irand(var_87_int, 50);
			int var_138_int;
			func_463(var_138_int, "ognemet_ammo");
			var_73_object->AddItem(var_82_bool, var_138_int, 0, (var_87_int + 1));
			goto Label_625;
		}
		int var_141_int;
		func_463(var_141_int, "Revolver");
		var_73_object->AddItem(var_82_bool, var_141_int, 0, 1);

	}
	
	int var_151_int;
	func_463(var_151_int, "Hammer");
	var_73_object->AddItem(var_82_bool, var_151_int, 0, 1);
}


void func_1286(void)
{
	int var_60_int;
	func_454(var_60_int);
	int var_59_int;
	var_60_int = var_59_int;
	@ClearSubContainer(0);
	var_62_int = GlobalVars[0];
	if(var_62_int != 0) {
		bool var_65_bool; object var_66_object; int var_67_int;
		object var_69_object;
		func_412(var_69_object);
		var_69_object = var_66_object;
		var_59_int = var_67_int;
		func_468(var_65_bool, var_66_object, var_67_int, 1);
	}
	var_495_int = GlobalVars[1];
	if(var_495_int != 0) {
		bool var_498_bool; object var_499_object; int var_500_int;
		object var_502_object;
		func_412(var_502_object);
		var_502_object = var_499_object;
		var_59_int = var_500_int;
		func_468(var_498_bool, var_499_object, var_500_int, 0);
	}
	var_503_int = GlobalVars[2];
	if(var_503_int != 0) {
		bool var_506_bool; object var_507_object; int var_508_int;
		object var_510_object;
		func_412(var_510_object);
		var_510_object = var_507_object;
		var_59_int = var_508_int;
		func_468(var_506_bool, var_507_object, var_508_int, 3);
	}
	var_511_int = GlobalVars[3];
	if(var_511_int != 0) {
		bool var_514_bool; object var_515_object; int var_516_int;
		object var_518_object;
		func_412(var_518_object);
		var_518_object = var_515_object;
		var_59_int = var_516_int;
		func_468(var_514_bool, var_515_object, var_516_int, 2);
	}
	var_519_int = GlobalVars[4];
	if(var_519_int != 0) {
		bool var_522_bool; object var_523_object; int var_524_int;
		object var_526_object;
		func_412(var_526_object);
		var_526_object = var_523_object;
		var_59_int = var_524_int;
		func_468(var_522_bool, var_523_object, var_524_int, 4);
	}
}


void func_267(bool var_14_bool, object var_15_object, string var_16_string)
{
	var_24_bool = IsFuncExist(var_15_object, "HasProperty", 2);
	if(!var_24_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_21_bool;
	var_15_object->HasProperty(var_16_string, var_21_bool);
	var_21_bool = var_14_bool;
}


void func_656(bool var_157_bool, object var_158_object, int var_159_int)
{
	bool var_164_bool; int var_165_int; int var_166_int; int var_167_int;
	if(var_159_int < 2) {
		var_157_bool = true;
		return 8;
	}
	if(var_159_int >= 2) {
		@irand(var_165_int, 3);
		if(var_165_int == 0) {
			int var_175_int;
			func_463(var_175_int, "glove");
			var_158_object->AddItem(var_164_bool, var_175_int, 0, 1);
		} else if(var_165_int == 1) {
				int var_237_int;
				func_463(var_237_int, "drapery");
				var_158_object->AddItem(var_164_bool, var_237_int, 0, 1);
		}
	}
	for(;;) {
		if(var_159_int >= 4) {
			@irand(var_166_int, 7);
			if(var_166_int == 0) {
				int var_184_int;
				func_463(var_184_int, "mask");
				var_158_object->AddItem(var_164_bool, var_184_int, 0, 1);
			} else if(var_166_int == 1) {
								int var_225_int;
								func_463(var_225_int, "cloak_repel");
								var_158_object->AddItem(var_164_bool, var_225_int, 0, 1);
			}
		Label_741:
			for(;;) {
				if(var_166_int == 3) {
					int var_190_int;
					func_463(var_190_int, "halfboot_repel");
					var_158_object->AddItem(var_164_bool, var_190_int, 0, 1);
				}
				if(var_166_int == 4) {
					int var_196_int;
					func_463(var_196_int, "boot_repel");
					var_158_object->AddItem(var_164_bool, var_196_int, 0, 1);
				}
				if(var_166_int == 5) {
					int var_202_int;
					func_463(var_202_int, "tihohody");
					var_158_object->AddItem(var_164_bool, var_202_int, 0, 1);
				} else {
							int var_219_int;
							func_463(var_219_int, "glove_disp");
							var_158_object->AddItem(var_164_bool, var_219_int, 0, 1);

				}
		}
			if(var_159_int >= 9) {
				@irand(var_167_int, 2);
				if(var_167_int == 0) {
					int var_211_int;
					func_463(var_211_int, "boot_army");
					var_158_object->AddItem(var_164_bool, var_211_int, 0, 1);
				} else {
					int var_215_int;
					func_463(var_215_int, "glove_army");
					var_158_object->AddItem(var_164_bool, var_215_int, 0, 1);

				}
			}
			var_157_bool = true;
			return 8;

		}

		if(!(var_166_int == 2)) goto Label_741;
		int var_231_int;
		func_463(var_231_int, "raincoat_repel");
		var_158_object->AddItem(var_164_bool, var_231_int, 0, 1);

	}
	
	int var_241_int;
	func_463(var_241_int, "balahon");
	var_158_object->AddItem(var_164_bool, var_241_int, 0, 1);
}


void func_1041(bool var_373_bool, object var_374_object, int var_375_int)
{
	bool var_379_bool; int var_380_int; int var_381_int;
	if(var_375_int < 3) {
		var_381_int = 2;
	} else if(var_375_int < 5) {
				var_381_int = 3;
	}

	for(;;) {
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_385_int;
			func_463(var_385_int, "lemon");
			var_374_object->AddItem(var_379_bool, var_385_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_390_int;
			func_463(var_390_int, "rusk");
			var_374_object->AddItem(var_379_bool, var_390_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_395_int;
			func_463(var_395_int, "dried_fish");
			var_374_object->AddItem(var_379_bool, var_395_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_400_int;
			func_463(var_400_int, "egg");
			var_374_object->AddItem(var_379_bool, var_400_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_405_int;
			func_463(var_405_int, "vegetables");
			var_374_object->AddItem(var_379_bool, var_405_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_410_int;
			func_463(var_410_int, "milk");
			var_374_object->AddItem(var_379_bool, var_410_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_415_int;
			func_463(var_415_int, "dried_meat");
			var_374_object->AddItem(var_379_bool, var_415_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_420_int;
			func_463(var_420_int, "smoked_meat");
			var_374_object->AddItem(var_379_bool, var_420_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_425_int;
			func_463(var_425_int, "fresh_fish");
			var_374_object->AddItem(var_379_bool, var_425_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_430_int;
			func_463(var_430_int, "fresh_meat");
			var_374_object->AddItem(var_379_bool, var_430_int, 0, 1);
		}
		@irand(var_380_int, var_381_int);
		if(!var_380_int) { //@nz
			int var_435_int;
			func_463(var_435_int, "bread");
			var_374_object->AddItem(var_379_bool, var_435_int, 0, 1);
		}
		int var_439_int;
		func_463(var_439_int, "bottle_water");
		var_374_object->AddItem(var_379_bool, var_439_int, 0, 1);
		@irand(var_380_int, 20);
		if(var_380_int == 0) {
			int var_446_int;
			func_463(var_446_int, "funduk");
			var_374_object->AddItem(var_379_bool, var_446_int, 0, 1);
		} else if(var_380_int == 1) {
			int var_458_int;
			func_463(var_458_int, "peanut");
			var_374_object->AddItem(var_379_bool, var_458_int, 0, 1);

		}
		if(var_380_int == 2) {
			int var_452_int;
			func_463(var_452_int, "walnut");
			var_374_object->AddItem(var_379_bool, var_452_int, 0, 1);
		}
		var_373_bool = true;

	}
	
	if(var_375_int < 7) {
		var_381_int = 3;
	} else if(var_375_int < 7) {
		var_381_int = 4;
	}
	var_381_int = 5;
}


void func_279(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	var_27_object->IsDead(var_29_bool);
	var_29_bool = var_26_bool;
}


// @pe
void func_408(void)
{
	@CameraSwitchToNormal();
}


void func_153(bool var_0_bool, object var_1_object)
{
	bool var_527_bool;
	func_355(var_527_bool);
	if(!var_527_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_1_object = 0;
	var_0_bool = null;
	
	for(;;) {
		@PlayAnimation("all", "idle");
		@WaitForAnimEnd();
	}
}
EMIT "Return(); Pop(0)";


void func_28(void)
{
	int var_9_int; int var_10_int; int var_11_int; int var_12_int; int var_13_int;
	object var_17_object;
	func_412(var_17_object);
	object var_15_object;
	var_17_object = var_15_object;
	bool var_14_bool;
	func_267(var_14_bool, var_15_object, "clothes");
	if(var_14_bool != 0)
		@GetProperty("clothes", var_9_int);
	else
		var_9_int = 0;
	bool var_27_bool; object var_28_object;
	object var_30_object;
	func_412(var_30_object);
	var_30_object = var_28_object;
	func_267(var_27_bool, var_28_object, "weapon");
	if(var_27_bool != 0)
		@GetProperty("weapon", var_10_int);
	else
		var_10_int = 0;

	bool var_32_bool; object var_33_object;
	object var_35_object;
	func_412(var_35_object);
	var_35_object = var_33_object;
	func_267(var_32_bool, var_33_object, "food");
	if(var_32_bool != 0)
		@GetProperty("food", var_11_int);
	else
		var_11_int = 0;

	bool var_37_bool; object var_38_object;
	object var_40_object;
	func_412(var_40_object);
	var_40_object = var_38_object;
	func_267(var_37_bool, var_38_object, "medcine");
	if(var_37_bool != 0)
		@GetProperty("medcine", var_12_int);
	else
		var_12_int = 0;

	bool var_42_bool; object var_43_object;
	object var_45_object;
	func_412(var_45_object);
	var_45_object = var_43_object;
	func_267(var_42_bool, var_43_object, "other");
	if(var_42_bool != 0)
		@GetProperty("other", var_13_int);
	else
		var_13_int = 0;

	var_47_int = GlobalVars[0];
	var_9_int = var_47_int;
	GlobalVars[0] = var_47_int;
	var_48_int = GlobalVars[1];
	var_10_int = var_48_int;
	GlobalVars[1] = var_48_int;
	var_49_int = GlobalVars[2];
	var_11_int = var_49_int;
	GlobalVars[2] = var_49_int;
	var_50_int = GlobalVars[3];
	var_12_int = var_50_int;
	GlobalVars[3] = var_50_int;
	var_51_int = GlobalVars[4];
	var_13_int = var_51_int;
	GlobalVars[4] = var_51_int;
	
}


void func_284(bool var_15_bool, object var_16_object)
{
	if(var_16_object == null) {
		var_15_bool = false;
		return 4;
	}
	bool var_22_bool = false;
	var_25_bool = IsFuncExist(var_16_object, "IsDead", 1);
	if(var_25_bool != 0) {
		bool var_26_bool; object var_27_object;
		var_16_object = var_27_object;
		func_279(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_22_bool = true;
	}
	if(var_22_bool != 0) {
		var_15_bool = false;
		return 4;
	}
	object var_19_object;
	@GetScene(var_19_object);
	if(var_19_object == null) {
		var_15_bool = false;
		return 4;
	}
	object var_20_object;
	var_16_object->GetScene(var_20_object);
	if(var_19_object != var_20_object) {
		var_15_bool = false;
		return 4;
	}
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_412(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_418(float var_57_float, cvector var_58_cvector, cvector var_59_cvector)
{
	var_60_float = GetByIndex(var_58_cvector, 0);
	var_61_float = GetByIndex(var_59_cvector, 0);
	var_63_float = GetByIndex(var_58_cvector, 2);
	var_64_float = GetByIndex(var_59_cvector, 2);
	var_57_float = (var_60_float * var_61_float) + (var_63_float * var_64_float);
}


// @pe
void func_427(float var_66_float, cvector var_67_cvector)
{
	var_68_float = GetByIndex(var_67_cvector, 0);
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_71_float = GetByIndex(var_67_cvector, 2);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_66_float = sqrt((var_68_float * var_69_float) + (var_71_float * var_72_float));
}


void func_811(bool var_247_bool, object var_248_object, int var_249_int)
{
	bool var_254_bool; int var_255_int; int var_256_int; int var_257_int;
	if(var_249_int < 2) {
		var_247_bool = true;
		return 8;
	}
	if(var_249_int >= 2) {
		@irand(var_255_int, 4);
		if(var_255_int == 0) {
			int var_265_int;
			func_463(var_265_int, "alpha_pills");
			var_248_object->AddItem(var_254_bool, var_265_int, 0, 1);
		} else if(var_255_int == 1) {
				int var_357_int;
				func_463(var_357_int, "tvirin");
				var_248_object->AddItem(var_254_bool, var_357_int, 0, 1);
		}
	}
Label_867:
	for(;;) {
		if(var_249_int >= 4) {
			@irand(var_256_int, 6);
			if(var_256_int == 0) {
				int var_274_int;
				func_463(var_274_int, "beta_pills");
				var_248_object->AddItem(var_254_bool, var_274_int, 0, 1);
			} else if(var_256_int == 1) {
					int var_329_int;
					func_463(var_329_int, "neomicin");
					var_248_object->AddItem(var_254_bool, var_329_int, 0, 1);
			}
		}

		for(;;) {
			if(var_249_int >= 5) {
				@irand(var_257_int, 8);
				if(var_257_int == 0) {
					int var_283_int;
					func_463(var_283_int, "gamma_pills");
					var_248_object->AddItem(var_254_bool, var_283_int, 0, 1);
				} else if(var_257_int == 1) {
						int var_289_int;
						func_463(var_289_int, "delta_pills");
						var_248_object->AddItem(var_254_bool, var_289_int, 0, 1);
				}
			}

			for(;;) {
				var_247_bool = true;
				return 8;

			}

			if(var_257_int == 2) {
				int var_295_int;
				func_463(var_295_int, "monomicin");
				var_248_object->AddItem(var_254_bool, var_295_int, 0, 1);
			} else if(var_257_int == 3) {
				int var_301_int;
				func_463(var_301_int, "morfin");
				var_248_object->AddItem(var_254_bool, var_301_int, 0, 1);
			} else if(var_257_int == 4) {
				int var_307_int;
				func_463(var_307_int, "packet");
				var_248_object->AddItem(var_254_bool, var_307_int, 0, 1);
			} else if(var_257_int == 5) {
				int var_313_int;
				func_463(var_313_int, "blue_vaccine");
				var_248_object->AddItem(var_254_bool, var_313_int, 0, 1);
			} else if(var_257_int == 6) {
				int var_319_int;
				func_463(var_319_int, "etorfin");
				var_248_object->AddItem(var_254_bool, var_319_int, 0, 1);
			}
			int var_323_int;
			func_463(var_323_int, "feromicin");
			var_248_object->AddItem(var_254_bool, var_323_int, 0, 1);

		}

		if(var_256_int == 2) {
			int var_335_int;
			func_463(var_335_int, "novocaine");
			var_248_object->AddItem(var_254_bool, var_335_int, 0, 1);
		} else if(var_256_int == 3) {
			int var_341_int;
			func_463(var_341_int, "black_vaccine");
			var_248_object->AddItem(var_254_bool, var_341_int, 0, 1);
		} else if(var_256_int == 4) {
			int var_347_int;
			func_463(var_347_int, "etorfin");
			var_248_object->AddItem(var_254_bool, var_347_int, 0, 1);
		}
		int var_351_int;
		func_463(var_351_int, "meradorm");
		var_248_object->AddItem(var_254_bool, var_351_int, 0, 1);

	}
	
	if(var_255_int == 2) {
		int var_363_int;
		func_463(var_363_int, "bandage");
		var_248_object->AddItem(var_254_bool, var_363_int, 0, 1);
		goto Label_867;
	}
	int var_367_int;
	func_463(var_367_int, "tourniquet");
	var_248_object->AddItem(var_254_bool, var_367_int, 0, 1);
}


// @pe
void func_437(float var_54_float, cvector var_55_cvector, cvector var_56_cvector)
{
	cvector var_58_cvector;
	var_55_cvector = var_58_cvector;
	cvector var_59_cvector;
	var_56_cvector = var_59_cvector;
	float var_57_float;
	func_418(var_57_float, var_58_cvector, var_59_cvector);
	float var_66_float; cvector var_67_cvector;
	var_55_cvector = var_67_cvector;
	func_427(var_66_float, var_67_cvector);
	float var_75_float; cvector var_76_cvector;
	var_56_cvector = var_76_cvector;
	func_427(var_75_float, var_76_cvector);
	var_54_float = var_57_float / (var_66_float * var_75_float);
}


void func_320(bool var_11_bool, object var_12_object)
{
	object var_16_object;
	var_12_object = var_16_object;
	bool var_15_bool;
	func_284(var_15_bool, var_16_object);
	if(!var_15_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	bool var_33_bool; object var_34_object;
	func_267(var_33_bool, var_34_object, "noaccess");
	if(!var_33_bool) { //@nz
		var_11_bool = true;
		return 2;
	}
	int var_14_int;
	var_34_object->GetProperty("noaccess", var_14_int);
	var_11_bool = var_14_int == 0;
}


void func_454(int var_52_int)
{
	float var_54_float;
	@GetGameTime(var_54_float);
	var_52_int = 1 + (var_54_float / 24);
}


void func_463(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetInvItemByName(var_99_int, var_97_string);
	var_99_int = var_96_int;
}


// @pe
void func_1360(object var_5_object)
{
	object var_7_object;
	var_5_object = var_7_object;
	bool var_6_bool;
	func_360(var_6_bool, var_7_object);
	if(!var_6_bool) { //@nz
	}
	object var_36_object;
	var_5_object = var_36_object;
	TaskCall(1);
	func_6(var_36_object);
	TaskReturn();
	object var_41_object;
	var_5_object = var_41_object;
	func_408();
}


// @pe
void func_468(bool var_65_bool, object var_66_object, int var_67_int, int var_68_int)
{
	if(var_68_int == 0) {
		bool var_72_bool; object var_73_object; int var_74_int;
		var_66_object = var_73_object;
		var_67_int = var_74_int;
		func_519(var_72_bool, var_73_object, var_74_int);
		var_72_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	if(var_68_int == 1) {
		bool var_157_bool; object var_158_object; int var_159_int;
		var_66_object = var_158_object;
		var_67_int = var_159_int;
		func_656(var_157_bool, var_158_object, var_159_int);
		var_157_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	if(var_68_int == 2) {
		bool var_247_bool; object var_248_object; int var_249_int;
		var_66_object = var_248_object;
		var_67_int = var_249_int;
		func_811(var_247_bool, var_248_object, var_249_int);
		var_247_bool = var_65_bool;
		return 0;
	EMIT "GOTO 0x200";
	}
	if(var_68_int == 3) {
		bool var_373_bool; object var_374_object; int var_375_int;
		var_66_object = var_374_object;
		var_67_int = var_375_int;
		func_1041(var_373_bool, var_374_object, var_375_int);
		var_373_bool = var_65_bool;
		return 0;
	}
	bool var_468_bool; object var_469_object; int var_470_int;
	var_66_object = var_469_object;
	var_67_int = var_470_int;
	func_1242(var_469_object, var_470_int);
	var_468_bool = var_65_bool;
}


void func_344(object var_80_object)
{
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	cvector var_85_cvector;
	@GetPosition(var_85_cvector);
	cvector var_86_cvector = var_84_cvector - var_85_cvector;
	var_87_float = GetByIndex(var_86_cvector, 0);
	var_88_float = GetByIndex(var_86_cvector, 2);
	@RotateAsync(var_87_float, var_88_float);
}


void func_1242(bool var_468_bool, object var_469_object)
{
	bool var_473_bool; int var_474_int;
	@irand(var_474_int, 5);
	if(var_474_int == 0) {
		int var_478_int;
		func_463(var_478_int, "hook");
		var_469_object->AddItem(var_473_bool, var_478_int, 0, 1);
	}
	@irand(var_474_int, 5);
	if(var_474_int == 0) {
		int var_485_int;
		func_463(var_485_int, "needle");
		var_469_object->AddItem(var_473_bool, var_485_int, 0, 1);
	}
	@irand(var_474_int, 100);
	if(var_474_int != 0) {
		int var_492_int;
		func_463(var_492_int, "kerosene");
		var_469_object->AddItem(var_473_bool, var_492_int, 0, var_474_int);
	}
	var_468_bool = true;
}


void func_355(bool var_527_bool)
{
	bool var_529_bool;
	@IsLoaded(var_529_bool);
	var_529_bool = var_527_bool;
}


void func_360(bool var_6_bool, object var_7_object)
{
	cvector var_17_cvector;
	var_7_object->GetPosition(var_17_cvector);
	float var_16_float;
	var_7_object->GetEyesHeight(var_16_float);
	var_24_float = GetByIndex(var_17_cvector, 1);
	SetByIndex(var_17_cvector, 1) = (var_24_float + var_16_float);
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	@GetEyesHeight(var_16_float);
	var_25_float = GetByIndex(var_18_cvector, 1);
	SetByIndex(var_18_cvector, 1) = (var_25_float + var_16_float);
	cvector var_19_cvector = var_17_cvector - var_18_cvector;
	var_26_float = GetByIndex(var_19_cvector, 1);
	SetByIndex(var_19_cvector, 1) = (float)0;
	var_28_float = sqrt(var_19_cvector | var_19_cvector);
	var_19_cvector /= var_28_float;
	cvector var_20_cvector = -var_19_cvector;
	cvector var_21_cvector = (var_19_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0)
		var_6_bool = false;
	@StopWorld();
	@CameraTransit((var_18_cvector + var_21_cvector), var_20_cvector);
	var_33_float = GetByIndex(var_21_cvector, 0);
	var_34_float = GetByIndex(var_21_cvector, 2);
	@Rotate(var_33_float, var_34_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_6_bool = true;
}


