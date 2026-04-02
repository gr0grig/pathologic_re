// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, object var_1_object, object var_2_object, object var_3_object)
	{
		var_0_int = -1;
		@CreateBoolVector(var_2_object);
		@CreateBoolVector(var_3_object);
		int var_5_int = 0;
	
		for(;;) {
			if(var_5_int < 12) {
				var_2_object->add(false); //@t
				bool var_9_bool = true;
				var_13_bool = (var_5_int + 1) < 6;
				if(var_13_bool != 1) {
					var_17_bool = (var_5_int + 1) == 12;
					if(var_17_bool != 1)
						var_9_bool = false;
				}
				if(var_9_bool != 0)
					var_3_object->add(false); //@t
				else
					var_3_object->add(true); //@t
			for(;;) {
				@Hold();
			}
			}
			var_5_int += 1;
		}
	
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnTrigger(int var_0_int, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		@Trace(var_4_string);
		if(var_4_string == "sleep_end") {
			int var_7_int;
			int var_8_int;
			func_205(var_8_int);
			var_8_int = var_7_int;
			func_97(var_2_object, var_3_object, var_4_string, var_7_int);
			int var_65_int; float var_66_float;
			int var_67_int;
			func_205(var_67_int);
			var_67_int = var_65_int;
			float var_68_float;
			func_200(var_68_float);
			var_68_float = var_66_float;
			func_146(var_4_string, var_65_int, var_66_float);
		} else if(var_4_string == "remove_klara") {
				func_83(var_2_object, var_3_object, var_4_string);
				func_294();
		}
	Label_82:
		for(;;) {

		}
	
		if(!(var_4_string == "klara_stay")) goto Label_82;
		func_307();
	}

}


void func_320(object var_106_object)
{
	object var_108_object;
	@GetDiaryRoot(var_108_object);
	if(!var_108_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_106_object = false;
	}
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_259(int var_141_int, float var_142_float)
{
	float var_146_float;
	var_142_float = var_146_float;
	int var_143_int;
	func_361(var_143_int, 538510, 538509, var_146_float);
	var_143_int = var_141_int;
}


void func_200(float var_68_float)
{
	float var_70_float;
	@GetGameTime(var_70_float);
	var_70_float = var_68_float;
}


void func_268(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 723, 1, 539102);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_333(var_97_bool, var_98_object, -1);
}
EMIT "Stack[-1] = 0";


void func_205(int var_8_int)
{
	float var_10_float;
	@GetGameTime(var_10_float);
	var_8_int = 1 + (var_10_float / 24);
}


void func_333(bool var_97_bool, object var_98_object, int var_99_int)
{
	object var_106_object;
	func_320(var_106_object);
	object var_103_object;
	var_106_object = var_103_object;
	object var_104_object;
	var_103_object->Find(var_99_int, var_104_object);
	if(!var_104_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_99_int);
		var_97_bool = false;
	}
	var_104_object->AddChild(var_98_object);
	@SendWorldWndMessage(7);
	int var_105_int;
	var_98_object->GetCategory(var_105_int);
	@SetDiarySection(var_105_int);
	var_97_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_146(object var_2_object, int var_65_int, float var_66_float)
{
	bool var_72_bool;
	var_2_object->get(var_72_bool, (var_65_int - 1)); //@t
	if(var_72_bool != 0) {
	}
	var_2_object->set((var_65_int - 1), true); //@t
	int var_79_int; float var_80_float;
	var_65_int = var_79_int;
	var_66_float = var_80_float;
	func_418(var_79_int, var_80_float);
}


void func_83(int var_0_int, object var_1_object, object var_3_object)
{
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	var_3_object->set((var_0_int - 1), false); //@t
	func_165(var_4_string);
}


// @pe
void func_214(int var_149_int, float var_150_float)
{
	float var_154_float;
	var_150_float = var_154_float;
	int var_151_int;
	func_361(var_151_int, 538512, 538511, var_154_float);
	var_151_int = var_149_int;
}


void func_281(void)
{
	object var_116_object;
	@CreateDiaryEntry(var_116_object, 724, 1, 539103);
	bool var_120_bool; object var_121_object;
	var_116_object = var_121_object;
	func_333(var_120_bool, var_121_object, 723);
}
EMIT "Stack[-1] = 0";


// @pe
void func_223(int var_157_int, float var_158_float)
{
	float var_162_float;
	var_158_float = var_162_float;
	int var_159_int;
	func_361(var_159_int, 538514, 538513, var_162_float);
	var_159_int = var_157_int;
}


void func_97(int var_0_int, object var_1_object, object var_3_object, int var_7_int)
{
	if(var_1_object != 0)
		@RemoveActor(var_1_object);
	bool var_17_bool;
	var_3_object->get(var_17_bool, (var_7_int - 1)); //@t
	if(!var_17_bool) { //@nz
	}
	string var_24_string; int var_25_int;
	var_7_int = var_25_int;
	func_380(var_24_string, var_25_int);
	string var_19_string;
	var_24_string = var_19_string;
	@Trace("Klara scene: " + var_19_string);
	object var_18_object;
	@GetSceneByName(var_18_object, var_19_string);
	if(var_18_object != 0) {
		object var_41_object; object var_42_object;
		var_18_object = var_42_object;
		func_182(var_41_object, var_42_object, ("pt_klara" + var_7_int), "NPC_Klara", "k2system_klara2.xml");
		var_41_object->SetProperty("day", var_7_int); //@t
		int var_61_int;
		func_503(var_61_int);
		var_0_int = var_61_int;
	} else {
		@Trace("ERROR: Klara2 scene was not found: " + var_19_string);
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_418(int var_79_int, float var_80_float)
{
	if(var_79_int == 6) {
		int var_83_int; float var_84_float;
		var_80_float = var_84_float;
		func_232(var_83_int, var_84_float);
		func_268();
		func_281();
	} else if(var_79_int == 7) {
			int var_125_int; float var_126_float;
			var_80_float = var_126_float;
			func_241(var_125_int, var_126_float);
			func_268();
			func_281();
	}

	
	if(var_79_int == 8) {
		int var_133_int; float var_134_float;
		var_80_float = var_134_float;
		func_250(var_133_int, var_134_float);
		func_268();
		func_281();
	} else if(var_79_int == 9) {
		int var_141_int; float var_142_float;
		var_80_float = var_142_float;
		func_259(var_141_int, var_142_float);
		func_268();
		func_281();
	} else if(var_79_int == 10) {
		int var_149_int; float var_150_float;
		var_80_float = var_150_float;
		func_214(var_149_int, var_150_float);
		func_268();
		func_281();
	} else if(var_79_int == 11) {
		int var_157_int; float var_158_float;
		var_80_float = var_158_float;
		func_223(var_157_int, var_158_float);
		func_268();
		func_281();
	}
}


void func_165(object var_3_object)
{
	int var_172_int; bool var_173_bool;
	var_172_int = 0;
	
	while(var_172_int < 12) {
		var_3_object->get(var_173_bool, var_172_int); //@t
		bool var_177_bool;
		var_173_bool = var_177_bool;
		func_369((var_172_int + 1), var_177_bool);
		var_172_int += 1;
	}
	
}


void func_294(void)
{
	object var_186_object;
	@CreateDiaryEntry(var_186_object, 725, 1, 539104);
	bool var_190_bool; object var_191_object;
	var_186_object = var_191_object;
	func_333(var_190_bool, var_191_object, 723);
}
EMIT "Stack[-1] = 0";


// @pe
void func_232(int var_83_int, float var_84_float)
{
	float var_88_float;
	var_84_float = var_88_float;
	int var_85_int;
	func_361(var_85_int, 538504, 538503, var_88_float);
	var_85_int = var_83_int;
}


void func_361(int var_85_int, int var_86_int, int var_87_int, float var_88_float)
{
	int var_90_int;
	@AddMessage(var_86_int, var_87_int, var_88_float, var_90_int);
	@SendWorldWndMessage(6);
	var_90_int = var_85_int;
}


// @pe
void func_369(int var_176_int, bool var_177_bool)
{
	if(var_177_bool != 0)
		var_182_int = 1;
	else
		var_183_int = 0; //@pi
	@SetVariable(("K2System" + var_176_int), var_182_int);
	
}


// @pe
void func_241(int var_125_int, float var_126_float)
{
	float var_130_float;
	var_126_float = var_130_float;
	int var_127_int;
	func_361(var_127_int, 538506, 538505, var_130_float);
	var_127_int = var_125_int;
}


void func_307(void)
{
	object var_196_object;
	@CreateDiaryEntry(var_196_object, 726, 1, 539105);
	bool var_200_bool; object var_201_object;
	var_196_object = var_201_object;
	func_333(var_200_bool, var_201_object, 723);
}
EMIT "Stack[-1] = 0";


void func_182(object var_41_object, object var_42_object, string var_43_string, string var_44_string, string var_45_string)
{
	bool var_51_bool; cvector var_52_cvector; cvector var_53_cvector;
	var_42_object->GetLocator(var_43_string, var_51_bool, var_52_cvector, var_53_cvector);
	if(!var_51_bool) //@nz
		@Trace(("Locator " + var_43_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_44_string, var_42_object, var_52_cvector, var_53_cvector, var_45_string);
	object var_54_object = var_41_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_503(int var_61_int)
{
	@SetVariable("k2system_klara_day", var_61_int);
}


// @pe
void func_250(int var_133_int, float var_134_float)
{
	float var_138_float;
	var_134_float = var_138_float;
	int var_135_int;
	func_361(var_135_int, 538508, 538507, var_138_float);
	var_135_int = var_133_int;
}


// @pe
void func_380(string var_24_string, int var_25_int)
{
	if(var_25_int == 6) {
		var_24_string = "lc_House6_04";
		return 0;
	EMIT "GOTO 0x1a0";
	}
	if(var_25_int == 7) {
		var_24_string = "r2_house3_03";
		return 0;
	EMIT "GOTO 0x1a0";
	}
	if(var_25_int == 8) {
		var_24_string = "house1_se_04r";
		return 0;
	EMIT "GOTO 0x1a0";
	}
	if(var_25_int == 9) {
		var_24_string = "r7_house3_02_i2";
		return 0;
	EMIT "GOTO 0x1a0";
	}
	if(var_25_int == 10) {
		var_24_string = "house5_15";
		return 0;
	EMIT "GOTO 0x1a0";
	}
	if(var_25_int == 11) {
		var_24_string = "r5_house2_01";
		return 0;
	}
	var_24_string = "";
}


