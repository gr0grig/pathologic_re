maintask task_0
{
	void init(object var_0_object, cvector var_1_cvector, float var_2_float)
	{
		float var_3_float; float var_4_float;
		@GetScene(var_0_object);
		@GetPosition(var_1_cvector);
		var_5_float = GetByIndex(var_1_cvector, 1);
		SetByIndex(var_1_cvector, 1) = (float)0;
	
		for(;;) {
			@sync(var_4_float);
			float var_6_float;
			func_16(var_3_float, var_6_float, var_6_float);
		}
	}
	EMIT "Return(); Pop(2)";

}


void func_450(bool var_69_bool, object var_70_object, object var_71_object, int var_72_int)
{
	int var_80_int;
	var_71_object->GetItemID(var_80_int);
	int var_81_int;
	@GetInvItemProperty(var_81_int, var_80_int, "Category");
	bool var_82_bool;
	var_70_object->AddItem(var_82_bool, var_71_object, var_81_int, var_72_int);
	if(var_82_bool != 0) {
		int var_85_int; int var_86_int;
		var_80_int = var_85_int;
		var_72_int = var_86_int;
		func_419(var_85_int, var_86_int);
	}
	var_82_bool = var_69_bool;
}


void func_391(object var_137_object, string var_138_string, int var_139_int)
{
	int var_141_int;
	var_137_object->GetProperty(var_138_string, var_141_int);
	var_137_object->SetProperty(var_138_string, (var_141_int + var_139_int));
}


void func_136(void)
{
	int var_48_int;
	bool var_49_bool;
	func_409(var_49_bool, 0.14);
	if(var_49_bool != 0) {
		@irand(var_48_int, 3);
		if(var_48_int == 0) {
			func_467("flower", 1, 5, 1);
		} else if(var_48_int == 1) {
				func_467("peanut", 1, 5, 1);
		}
	}
Label_177:
	for(;;) {
		return 2;

	}
	
	if(!(var_48_int == 2)) goto Label_177;
	func_467("hook", 1, 5, 1);
}


void func_398(object var_73_object)
{
	object var_75_object;
	@self(var_75_object);
	var_75_object = var_73_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_79(int var_36_int)
{
	if(var_36_int == 6) {
		func_136();
	} else {
			bool var_102_bool = false;
			if(var_36_int >= 1) {
				if(var_36_int <= 5)
					var_102_bool = true;
			}
			if(var_102_bool == 0) goto Label_101;
			func_178();
	}
Label_135:
	for(;;) {
		return 0;

	}
	
Label_101:
	bool var_153_bool = true;
	var_155_bool = var_36_int == 0;
	if(var_155_bool != 1) {
		bool var_156_bool = false;
		if(var_36_int >= 7) {
			if(var_36_int <= 13)
				var_156_bool = true;
		}
		if(var_156_bool != 1)
			var_153_bool = false;
	}
	if(var_153_bool != 0) {
		func_240();
		goto Label_135;
	}
	bool var_200_bool = true;
	var_202_bool = var_36_int == 14;
	if(var_202_bool != 1) {
		var_204_bool = var_36_int == 15;
		if(var_204_bool != 1)
			var_200_bool = false;
	}
	if(var_200_bool == 0) goto Label_135;
	func_313();
}


void func_16(object var_0_object, cvector var_1_cvector, float var_2_float)
{
	object var_12_object;
	@GetScene(var_12_object);
	object var_13_object;
	@GetMainOutdoorScene(var_13_object);
	if(var_13_object != var_12_object)
		return 10;
	cvector var_14_cvector;
	@GetPosition(var_14_cvector);
	var_18_float = GetByIndex(var_14_cvector, 1);
	SetByIndex(var_14_cvector, 1) = (float)0;
	float var_19_float; cvector var_20_cvector;
	var_14_cvector = var_20_cvector;
	func_404(var_19_float, var_20_cvector, var_1_cvector);
	float var_15_float;
	var_19_float = var_15_float;
	bool var_25_bool = true;
	var_26_bool = var_12_object != var_0_object;
	if(var_26_bool != 1) {
		var_28_bool = var_15_float > 1000;
		if(var_28_bool != 1)
			var_25_bool = false;
	}
	if(var_25_bool != 0) {
		var_0_object = var_12_object;
		var_1_cvector = var_14_cvector;
		return 10;
	}
	float var_16_float;
	@rand(var_16_float, 0.5);
	var_1_cvector = var_14_cvector;
	var_0_object = var_12_object;
	if((var_2_float + (((var_16_float + 0.5) * var_15_float) / 100.0)) > 50.0) {
		int var_36_int;
		int var_37_int;
		func_380(var_37_int);
		var_37_int = var_36_int;
		func_79(var_36_int);
		var_2_float = 0;
	}
	@SetProperty("walk_distance", ((1000 * var_2_float) / 50.0));
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_467(string var_56_string, int var_57_int, int var_58_int, int var_59_int)
{
	int var_62_int; object var_63_object;
	int var_65_int;
	var_57_int = var_65_int;
	int var_66_int;
	var_58_int = var_66_int;
	bool var_64_bool;
	func_414(var_64_bool, var_65_int, var_66_int);
	if(var_64_bool != 0) {
		@irand(var_62_int, var_59_int);
		@CreateInvItem(var_63_object);
		var_63_object->SetItemName(var_56_string);
		bool var_69_bool; object var_70_object; object var_71_object;
		object var_73_object;
		func_398(var_73_object);
		var_73_object = var_70_object;
		var_63_object = var_71_object;
		func_450(var_69_bool, var_70_object, var_71_object, (var_62_int + 1));
		var_63_object = null;
	}
}


void func_404(float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	var_19_float = sqrt((var_21_cvector - var_20_cvector) | (var_21_cvector - var_20_cvector));
}


void func_409(bool var_49_bool, float var_50_float)
{
	float var_52_float;
	@rand(var_52_float);
	var_49_bool = var_52_float < var_50_float;
}


void func_414(bool var_64_bool, int var_65_int, int var_66_int)
{
	int var_68_int;
	@irand(var_68_int, var_66_int);
	var_64_bool = var_68_int < var_65_int;
}


void func_419(int var_85_int, int var_86_int)
{
	object var_88_object;
	@CreateIntVector(var_88_object);
	var_88_object->add(var_85_int);
	var_88_object->add(var_86_int);
	@SendWorldWndMessage(3, var_88_object);
}
EMIT "Stack[-1] = 0";


void func_431(object var_131_object, int var_132_int)
{
	int var_136_int;
	object var_137_object;
	var_131_object = var_137_object;
	int var_139_int;
	func_391(var_137_object, "money", var_139_int);
	if(var_139_int > 0) {
		@GetInvItemByName(var_136_int, "Money");
		int var_146_int; int var_147_int;
		var_136_int = var_146_int;
		var_132_int = var_147_int;
		func_419(var_146_int, var_147_int);
	}
}


void func_240(void)
{
	int var_164_int; int var_165_int; int var_166_int;
	bool var_167_bool;
	func_409(var_167_bool, 0.14);
	if(var_167_bool != 0) {
		@irand(var_164_int, 3);
		if(var_164_int == 0) {
			func_467("silver_ring", 1, 5, 1);
		} else {
				if(var_164_int == 1)
					func_467("gold_ring", 1, 10, 1);
			for(;;) {
				} else if(var_164_int == 2) {
			func_467("funduk", 1, 5, 1);
	}
		bool var_188_bool;
		func_409(var_188_bool, 0.1);
		if(var_188_bool != 0) {
			@irand(var_165_int, 10);
			object var_191_object;
			object var_193_object;
			func_398(var_193_object);
			var_193_object = var_191_object;
			func_431(var_191_object, (var_165_int + 1));
			goto Label_312;
		}
		@irand(var_166_int, 3);
		object var_196_object;
		object var_198_object;
		func_398(var_198_object);
		var_198_object = var_196_object;
		func_431(var_196_object, (var_166_int + 1));
			}
	Label_312:

	}
	
}


void func_178(void)
{
	int var_110_int; int var_111_int; int var_112_int;
	bool var_113_bool;
	func_409(var_113_bool, 0.14);
	if(var_113_bool != 0) {
		@irand(var_110_int, 2);
		if(var_110_int == 0) {
			func_467("beads", 1, 9, 1);
		} else {
				if(var_110_int == 1)
					func_467("bracelet", 1, 5, 1);
				bool var_128_bool;
				func_409(var_128_bool, 0.1);
				if(var_128_bool != 0) {
					@irand(var_111_int, 10);
					object var_131_object;
					object var_133_object;
					func_398(var_133_object);
					var_133_object = var_131_object;
					func_431(var_131_object, (var_111_int + 1));
			}
			}
			} else {
		@irand(var_112_int, 3);
		object var_149_object;
		object var_151_object;
		func_398(var_151_object);
		var_151_object = var_149_object;
		func_431(var_149_object, (var_112_int + 1));
			}
	
}


void func_375(cvector var_42_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	var_44_cvector = var_42_cvector;
}


void func_313(void)
{
	int var_208_int; int var_209_int; int var_210_int;
	bool var_211_bool;
	func_409(var_211_bool, 0.14);
	if(var_211_bool != 0) {
		@irand(var_208_int, 2);
		if(var_208_int == 0) {
			func_467("needle", 1, 6, 1);
		} else {
				if(var_208_int == 1)
					func_467("razor", 1, 7, 1);
				bool var_226_bool;
				func_409(var_226_bool, 0.1);
				if(var_226_bool != 0) {
					@irand(var_209_int, 10);
					object var_229_object;
					object var_231_object;
					func_398(var_231_object);
					var_231_object = var_229_object;
					func_431(var_229_object, (var_209_int + 1));
			}
			}
			} else {
		@irand(var_210_int, 3);
		object var_234_object;
		object var_236_object;
		func_398(var_236_object);
		var_236_object = var_234_object;
		func_431(var_234_object, (var_210_int + 1));
			}
	for(;;) {
		return 6;

	}
	
}


void func_380(int var_37_int)
{
	object var_40_object;
	@GetScene(var_40_object);
	cvector var_42_cvector;
	func_375(var_42_cvector);
	int var_41_int;
	var_40_object->GetRegionByPt(var_41_int, var_42_cvector);
	var_41_int = var_37_int;
}
EMIT "Stack[-2] = 0";


