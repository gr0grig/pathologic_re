// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int)
	{
		var_0_int = -1;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(int var_0_int, string var_1_string)
	{
		int var_8_int; float var_9_float; float var_10_float; float var_11_float; object var_12_object;
		@Trace(var_1_string);
		if(var_1_string == "init") {
			int var_16_int;
			func_204(var_16_int);
			var_16_int = var_8_int;
			if(var_8_int > 22) {
				@Trace("to late for k2system quest");
				return 12;
			}
			var_9_float = 0;
			int var_24_int;
			func_204(var_24_int);
			if(var_24_int < 7) {
				int var_28_int;
				func_204(var_28_int);
				var_9_float = 7 - var_28_int;
			}
			@GetGameTime(var_10_float);
			@rand(var_11_float, 0.3, 1);
			@SetTimeEvent(0, ((var_10_float + var_11_float) + var_9_float));
			@rand(var_11_float, 0.3, 1);
			@SetTimeEvent(1, ((var_10_float + var_11_float) + var_9_float));
			int var_39_int;
			func_195(var_39_int);
			var_0_int = var_39_int;
		} else if(var_1_string == "remove_danko") {
				string var_47_string;
				func_421(var_47_string, var_0_int);
				@GetSceneByName(var_12_object, var_47_string);
				if(var_12_object != 0)
					var_12_object->SetProperty("inited", 0);
				var_12_object = null;
		}
	Label_92:
		for(;;) {
			return 12;

		}
	
		if(!(var_1_string == "remove_burah")) goto Label_92;
		string var_62_string;
		func_395(var_62_string, var_0_int);
		object var_13_object;
		@GetSceneByName(var_13_object, var_62_string);
		if(var_13_object != 0)
			var_13_object->SetProperty("inited", 0);
		var_13_object = null;
	}

	void OnGameTime(int iID, int var_1_int, float var_2_float)
	{
		object var_5_object; object var_6_object;
		var_7_string = "id = ";
		var_9_string = ", fTime = ";
		var_12_string = ", GetDay() = ";
		int var_14_int;
		func_195(var_14_int);
		@Trace(((((var_7_string + var_1_int) + var_9_string) + var_2_float) + var_12_string) + var_14_int);
		bool var_21_bool = false;
		if(var_1_int == 0) {
			int var_24_int;
			func_195(var_24_int);
			if(iID == var_24_int)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			float var_27_float;
			var_2_float = var_27_float;
			func_504(iID, var_27_float);
			string var_94_string;
			func_421(var_94_string, iID);
			@GetSceneByName(var_5_object, var_94_string);
			if(!var_5_object) { //@nz
				string var_106_string;
				func_421(var_106_string, iID);
				@Trace("K2System wrong danko scene: " + var_106_string);
			} else {
				var_5_object->SetProperty("inited", 1);
				func_390(iID);
		}
			bool var_113_bool = false;
			if(var_1_int == 1) {
				int var_116_int;
				func_195(var_116_int);
				if(iID == var_116_int)
					var_113_bool = true;
			}
			if(var_113_bool == 0) goto Label_194;
			float var_119_float;
			var_2_float = var_119_float;
			func_447(iID, var_119_float);
			string var_168_string;
			func_395(var_168_string, iID);
			@GetSceneByName(var_6_object, var_168_string);
			if(!var_6_object) { //@nz
				string var_180_string;
				func_395(var_180_string, iID);
				@Trace("K2System wrong burah scene: " + var_180_string);
			} else {
				var_6_object->SetProperty("inited", 1);
				func_385(iID);
			}
			var_6_object = null;
		}
		var_5_object = null;
		goto Label_194;
	
	Label_194:
	
	}

}


// @pe
void func_385(int var_185_int)
{
	@SetVariable("k2system_burah_day", var_185_int);
}


// @pe
void func_257(int var_61_int, float var_62_float)
{
	float var_66_float;
	var_62_float = var_66_float;
	int var_63_int;
	func_377(var_63_int, 539101, 539100, var_66_float);
	var_63_int = var_61_int;
}


void func_195(int var_14_int)
{
	float var_16_float;
	@GetGameTime(var_16_float);
	var_14_int = 1 + (var_16_float / 24);
}


void func_323(void)
{
	object var_54_object;
	@CreateDiaryEntry(var_54_object, 758, 2, 539743);
	bool var_58_bool; object var_59_object;
	var_54_object = var_59_object;
	func_349(var_58_bool, var_59_object, 757);
}
EMIT "Stack[-1] = 0";


// @pe
void func_390(int var_111_int)
{
	@SetVariable("k2system_danko_day", var_111_int);
}


// @pe
void func_266(int var_146_int, float var_147_float)
{
	float var_151_float;
	var_147_float = var_151_float;
	int var_148_int;
	func_377(var_148_int, 539087, 539086, var_151_float);
	var_148_int = var_146_int;
}


// @pe
void func_395(string var_168_string, int var_169_int)
{
	if(var_169_int == 8) {
		var_168_string = "house5_unoin_solidl";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	if(var_169_int == 9) {
		var_168_string = "r4_house4_02_i2";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	if(var_169_int == 10) {
		var_168_string = "dt_house1_union2_01r";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	if(var_169_int == 11) {
		var_168_string = "dt_house_1_03";
		return 0;
	}
	var_168_string = "";
}


void func_204(int var_16_int)
{
	float var_18_float;
	@GetGameTime(var_18_float);
	int var_19_int;
	var_18_float = var_19_int;
	var_16_int = var_19_int % 24;
}


void func_336(object var_44_object)
{
	object var_46_object;
	@GetDiaryRoot(var_46_object);
	if(!var_46_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_44_object = false;
	}
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_275(int var_72_int, float var_73_float)
{
	float var_77_float;
	var_73_float = var_77_float;
	int var_74_int;
	func_377(var_74_int, 539095, 539094, var_77_float);
	var_74_int = var_72_int;
}


// @pe
void func_212(int var_154_int, float var_155_float)
{
	float var_159_float;
	var_155_float = var_159_float;
	int var_156_int;
	func_377(var_156_int, 539089, 539088, var_159_float);
	var_156_int = var_154_int;
}


void func_284(void)
{
	object var_123_object;
	@CreateDiaryEntry(var_123_object, 751, 2, 539736);
	bool var_127_bool; object var_128_object;
	var_123_object = var_128_object;
	func_349(var_127_bool, var_128_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_221(int var_80_int, float var_81_float)
{
	float var_85_float;
	var_81_float = var_85_float;
	int var_82_int;
	func_377(var_82_int, 539097, 539096, var_85_float);
	var_82_int = var_80_int;
}


void func_349(bool var_35_bool, object var_36_object, int var_37_int)
{
	object var_44_object;
	func_336(var_44_object);
	object var_41_object;
	var_44_object = var_41_object;
	object var_42_object;
	var_41_object->Find(var_37_int, var_42_object);
	if(!var_42_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_37_int);
		var_35_bool = false;
	}
	var_42_object->AddChild(var_36_object);
	@SendWorldWndMessage(7);
	int var_43_int;
	var_36_object->GetCategory(var_43_int);
	@SetDiarySection(var_43_int);
	var_35_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_421(string var_94_string, int var_95_int)
{
	if(var_95_int == 8) {
		var_94_string = "r5_House6_01";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	if(var_95_int == 9) {
		var_94_string = "dt_house2_01";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	if(var_95_int == 10) {
		var_94_string = "house7_02";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	if(var_95_int == 11) {
		var_94_string = "lc_house3_05";
		return 0;
	}
	var_94_string = "";
}


// @pe
void func_230(int var_162_int, float var_163_float)
{
	float var_167_float;
	var_163_float = var_167_float;
	int var_164_int;
	func_377(var_164_int, 539091, 539090, var_167_float);
	var_164_int = var_162_int;
}


// @pe
void func_504(int var_26_int, float var_27_float)
{
	if(var_26_int == 8) {
		func_310();
		func_323();
		int var_61_int; float var_62_float;
		var_27_float = var_62_float;
		func_257(var_61_int, var_62_float);
	} else if(var_26_int == 9) {
			func_310();
			func_323();
			int var_72_int; float var_73_float;
			var_27_float = var_73_float;
			func_275(var_72_int, var_73_float);
	}

	
	if(var_26_int == 10) {
		func_310();
		func_323();
		int var_80_int; float var_81_float;
		var_27_float = var_81_float;
		func_221(var_80_int, var_81_float);
	} else if(var_26_int == 11) {
		func_310();
		func_323();
		int var_88_int; float var_89_float;
		var_27_float = var_89_float;
		func_239(var_88_int, var_89_float);
	}
}


void func_297(void)
{
	object var_131_object;
	@CreateDiaryEntry(var_131_object, 752, 2, 539737);
	bool var_135_bool; object var_136_object;
	var_131_object = var_136_object;
	func_349(var_135_bool, var_136_object, 751);
}
EMIT "Stack[-1] = 0";


// @pe
void func_239(int var_88_int, float var_89_float)
{
	float var_93_float;
	var_89_float = var_93_float;
	int var_90_int;
	func_377(var_90_int, 539099, 539098, var_93_float);
	var_90_int = var_88_int;
}


void func_310(void)
{
	object var_31_object;
	@CreateDiaryEntry(var_31_object, 757, 2, 539742);
	bool var_35_bool; object var_36_object;
	var_31_object = var_36_object;
	func_349(var_35_bool, var_36_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_248(int var_138_int, float var_139_float)
{
	float var_143_float;
	var_139_float = var_143_float;
	int var_140_int;
	func_377(var_140_int, 539085, 539084, var_143_float);
	var_140_int = var_138_int;
}


void func_377(int var_63_int, int var_64_int, int var_65_int, float var_66_float)
{
	int var_68_int;
	@AddMessage(var_64_int, var_65_int, var_66_float, var_68_int);
	@SendWorldWndMessage(6);
	var_68_int = var_63_int;
}


// @pe
void func_447(int var_118_int, float var_119_float)
{
	if(var_118_int == 8) {
		func_284();
		func_297();
		int var_138_int; float var_139_float;
		var_119_float = var_139_float;
		func_248(var_138_int, var_139_float);
	} else if(var_118_int == 9) {
			func_284();
			func_297();
			int var_146_int; float var_147_float;
			var_119_float = var_147_float;
			func_266(var_146_int, var_147_float);
	}

	
	if(var_118_int == 10) {
		func_284();
		func_297();
		int var_154_int; float var_155_float;
		var_119_float = var_155_float;
		func_212(var_154_int, var_155_float);
	} else if(var_118_int == 11) {
		func_284();
		func_297();
		int var_162_int; float var_163_float;
		var_119_float = var_163_float;
		func_230(var_162_int, var_163_float);
	}
}


