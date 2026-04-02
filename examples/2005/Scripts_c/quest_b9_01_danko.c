// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_1044();
			if(var_6_int == 22745) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1093();
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_1120();
				object var_50_object = var_1_object;
				func_1137(var_0_object);
			}
			if(var_6_int == 23541) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1093();
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1120();
				object var_88_object = var_1_object;
				func_1137(var_0_object);
			}
			if(var_6_int == 22739) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_1087();
			}
			if(var_6_int == 22741) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_1102();
			}
			if(var_6_int == 23549) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1102();
			}
			if(var_6_int == 23546) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1114();
			}
			if(var_6_int == 23550) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_1108();
			}
			if(var_5_int == 22742) {
				bool var_120_bool = false;
				bool var_121_bool;
				func_1153(var_1_object);
				if(var_121_bool != 0) {
					bool var_127_bool;
					func_1165(var_1_object);
					if(var_127_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0) {
					object var_133_object; object var_134_object;
					var_133_object = var_1_object;
					var_134_object = var_0_object;
					func_1081();
					func_232(var_6_int, "Neutral");
					var_0_object->SetMessage(521581); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531554, 32918, 32917); //@t
					return 0;
				}
				bool var_153_bool;
				func_1153(var_1_object);
				if(!var_153_bool) { //@nz
					func_232(var_6_int, "Neutral");
					var_0_object->SetMessage(521577); //@t
					var_0_object->ClearReplies(); //@t
					bool var_158_bool;
					func_1177(var_1_object);
					if(var_158_bool != 0)
						var_0_object->AddReply(521578, 22740, 22739); //@t
					bool var_167_bool;
					func_1201(var_1_object);
					if(var_167_bool != 0)
						var_0_object->AddReply(522381, 23547, 23546); //@t
					var_0_object->AddReply(521586, -1, 22747); //@t
					return 0;
				}
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(521601); //@t
				var_0_object->ClearReplies(); //@t
				bool var_181_bool;
				func_1189(var_1_object);
				if(var_181_bool != 0)
					var_0_object->AddReply(522385, 23551, 23550); //@t
				var_0_object->AddReply(521602, -1, 22767); //@t
				return 0;
			}
			if(var_5_int == 23551) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522386); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522387, 23553, 23552); //@t
				return 0;
			}
			if(var_5_int == 23553) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522389, -1, 23554); //@t
				return 0;
			}
			if(var_5_int == 23547) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522383, -1, 23548); //@t
				return 0;
			}
			if(var_5_int == 22740) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(521579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522377, 23543, 23542); //@t
				return 0;
			}
			if(var_5_int == 23543) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521580, -1, 22741); //@t
				var_0_object->AddReply(522379, 23545, 23544); //@t
				return 0;
			}
			if(var_5_int == 23545) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522384, -1, 23549); //@t
				return 0;
			}
			if(var_5_int == 32918) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(531555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521582, 23526, 22743); //@t
				return 0;
			}
			if(var_5_int == 23526) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522364, 23528, 23527); //@t
				var_0_object->AddReply(522369, 23533, 23532); //@t
				return 0;
			}
			if(var_5_int == 23533) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522371, 22744, 23534); //@t
				return 0;
			}
			if(var_5_int == 23528) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522366, 23530, 23529); //@t
				return 0;
			}
			if(var_5_int == 23530) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522368, 22744, 23531); //@t
				return 0;
			}
			if(var_5_int == 22744) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(521583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522372, 23538, 23537); //@t
				return 0;
			}
			if(var_5_int == 23538) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522374, 23540, 23539); //@t
				return 0;
			}
			if(var_5_int == 23540) {
				func_232(var_6_int, "Neutral");
				var_0_object->SetMessage(522375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521584, -1, 22745); //@t
				var_0_object->AddReply(522376, -1, 23541); //@t
				return 0;
			}
			var_3_string = true;
			bool var_300_bool;
			func_1342(var_300_bool);
			if(var_300_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xff";
	
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		bool var_5_bool;
		func_788(var_5_bool);
		if(!var_5_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_1016("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) { //@nz
			disable OnUse;
			bool var_9_bool; object var_10_object;
			var_5_object = var_10_object;
			func_779(var_9_bool, var_10_object);
			enable OnUse;
			object var_23_object;
			var_5_object = var_23_object;
			func_719(var_23_object);
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_9_bool;
	func_788(var_9_bool);
	if(!var_9_bool) goto Label_0; //@nz
}


// @pe
void func_1153(bool var_198_bool)
{
	int var_200_int;
	func_1067(var_200_int, "b9q01DankoFree");
	if(var_200_int != 0) {
		var_198_bool = true;
		return 0;
	}
	var_198_bool = false;
}


void func_769(bool var_13_bool, cvector var_14_cvector)
{
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	bool var_20_bool;
	@Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
}


void func_1284(object var_52_object, string var_53_string, float var_54_float)
{
	object var_68_object;
	@GetMainOutdoorScene(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_66_cvector;
	cvector var_67_cvector;
	bool var_69_bool;
	var_68_object->GetLocator(var_53_string, var_69_bool, var_66_cvector, var_67_cvector);
	if(!var_69_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_53_string) + " doesnt exist");
	var_68_object->GetMap(var_52_object);
	if(var_52_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_79_float = GetByIndex(var_66_cvector, 0);
	var_80_float = GetByIndex(var_66_cvector, 2);
	var_52_object->SetMapParams(var_79_float, var_80_float, var_54_float);
}
EMIT "Stack[-2] = 0";


void func_1029(bool var_69_bool, string var_70_string)
{
	bool var_72_bool;
	bool var_73_bool;
	func_1342(var_73_bool);
	if(var_73_bool != 0) {
		@lshHasSpeech(var_72_bool, var_70_string);
		if(var_72_bool != 0) {
			@lshPlaySpeech(var_70_string);
			var_69_bool = true;
		}
	}
	var_69_bool = false;
}


void func_779(bool var_9_bool, object var_10_object)
{
	cvector var_12_cvector;
	var_10_object->GetPosition(var_12_cvector);
	bool var_13_bool; cvector var_14_cvector;
	var_12_cvector = var_14_cvector;
	func_769(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
}


// @pe
void func_1165(bool var_206_bool)
{
	int var_208_int;
	func_1067(var_208_int, "oob9Danko1");
	if(var_208_int == 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


void func_13(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	object var_37_object;
	func_1051(var_37_object);
	var_37_object = var_36_object;
	func_878(var_35_bool, var_36_object);
	bool var_130_bool; object var_131_object;
	var_25_object = var_131_object;
	func_793(var_130_bool, var_131_object, 70.0);
	if(!var_130_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_177_int;
	func_1336(var_177_int);
	var_31_object->SetNPCName(var_177_int);
	int var_178_int;
	func_1334(var_178_int);
	var_31_object->SetNPCDescription(var_178_int);
	string var_179_string;
	func_1338(var_179_string);
	var_31_object->SetPhoto(var_179_string);
	string var_180_string;
	func_1340(var_180_string);
	var_31_object->SetPhoto2(var_180_string);
	int var_181_int;
	func_1317(var_181_int);
	var_31_object->SetPlayerName(var_181_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_190_object; object var_191_object;
	var_25_object = var_190_object;
	var_31_object = var_191_object;
	TaskCall(2);
	func_94(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_285_bool = !var_34_bool; //@nz
		if(var_285_bool == 0) goto Label_83;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_83:
	object var_286_object;
	var_25_object = var_286_object;
	func_861();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_788(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


void func_1044(void)
{
	bool var_8_bool;
	func_1342(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_793(bool var_130_bool, object var_131_object, float var_132_float)
{
	cvector var_143_cvector; bool var_150_bool;
	var_131_object->GetPosition(var_143_cvector);
	float var_142_float;
	var_131_object->GetEyesHeight(var_142_float);
	var_151_float = GetByIndex(var_143_cvector, 1);
	SetByIndex(var_143_cvector, 1) = (var_151_float + var_142_float);
	cvector var_144_cvector;
	@GetPosition(var_144_cvector);
	@GetEyesHeight(var_142_float);
	var_152_float = GetByIndex(var_144_cvector, 1);
	SetByIndex(var_144_cvector, 1) = (var_152_float + var_142_float);
	cvector var_145_cvector = var_143_cvector - var_144_cvector;
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (float)0;
	var_155_float = sqrt(var_145_cvector | var_145_cvector);
	var_145_cvector /= var_155_float;
	cvector var_146_cvector = -var_145_cvector;
	cvector var_157_cvector;
	func_1057(var_157_cvector, (var_146_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_147_cvector = ((var_145_cvector * var_132_float) + (var_157_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_149_bool;
	@IsOverrideActive(var_149_bool);
	if(var_149_bool != 0)
		var_130_bool = false;
	@StopWorld();
	@CameraTransit((var_144_cvector + var_147_cvector), var_146_cvector);
	var_170_float = GetByIndex(var_147_cvector, 0);
	var_171_float = GetByIndex(var_147_cvector, 2);
	@Rotate(var_170_float, var_171_float);
	bool var_172_bool;
	func_1342(var_172_bool);
	if(var_172_bool != 0) {
	} else {
		@HasAnimationTrack(var_150_bool, "head");
		if(var_150_bool == 0) goto Label_855;
		@LookAsyncCamera("head");
	}
Label_855:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_130_bool = true;
	
}


// @pe
void func_1177(bool var_250_bool)
{
	int var_252_int;
	func_1067(var_252_int, "oob9Danko2");
	if(var_252_int == 0) {
		var_250_bool = true;
		return 0;
	}
	var_250_bool = false;
}


void func_1051(object var_37_object)
{
	object var_39_object;
	@self(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_1057(cvector var_157_cvector, cvector var_158_cvector)
{
	float var_161_float = sqrt(var_158_cvector | var_158_cvector);
	if(var_161_float < 0.000001)
		var_157_cvector = [0.0, 0.0, 0.0];
	var_157_cvector = var_158_cvector / var_161_float;
}


void func_1317(int var_181_int)
{
	int var_183_int;
	@GetVariable("branch", var_183_int);
	if(var_183_int == 0) {
		var_181_int = 1;
		return 2;
	EMIT "GOTO 0x534";
	}
	if(var_183_int == 1) {
		var_181_int = 2;
		return 2;
	}
	var_181_int = 3;
}


// @pe
void func_1189(bool var_273_bool)
{
	int var_275_int;
	func_1067(var_275_int, "oob9Danko3");
	if(var_275_int == 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


void func_936(bool var_46_bool, object var_47_object)
{
	string var_53_string; bool var_55_bool; int var_56_int; string var_57_string;
	var_53_string = "c";
	int var_54_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_47_object->HasProperty((var_53_string + (var_54_int + 1)), var_55_bool);
			if(!var_55_bool) { //@nz
			} else {
				var_54_int += 1;
			}
		}
		if(!var_54_int) { //@nz
			var_46_bool = false;
			return 10;
		}
		var_56_int = 0;
		if(var_54_int > 1)
			@irand(var_56_int, var_54_int);
		var_47_object->GetProperty((var_53_string + (var_56_int + 1)), var_57_string);
		bool var_69_bool; string var_70_string;
		var_57_string = var_70_string;
		func_1029(var_69_bool, var_70_string);
		var_69_bool = var_46_bool;
		return 10;

	}
}


void func_1067(int var_200_int, string var_201_string)
{
	int var_203_int;
	@GetVariable(var_201_string, var_203_int);
	var_203_int = var_200_int;
}


void func_1072(int var_90_int)
{
	float var_92_float;
	@GetGameTime(var_92_float);
	var_90_int = 1 + (var_92_float / 24);
}


// @pe
void func_1201(bool var_259_bool)
{
	int var_261_int;
	func_1067(var_261_int, "oob9Danko4");
	if(var_261_int == 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


void func_1334(int var_178_int)
{
	var_178_int = 515573;
}


void func_1336(int var_177_int)
{
	var_177_int = 504032;
}


// @pe
void func_1081(void)
{
	@SetVariable("oob9Danko1", 1);
}


void func_1338(string var_179_string)
{
	var_179_string = "ui/NPC_Bakalavr.png";
}


void func_1340(string var_180_string)
{
	var_180_string = "ui/NPC_Bakalavr_b.png";
}


void func_1213(void)
{
	object var_16_object;
	@CreateDiaryEntry(var_16_object, 303, 1, 521618);
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_1239(var_20_bool, var_21_object, 297);
}
EMIT "Stack[-1] = 0";


void func_1342(bool var_73_bool)
{
	var_73_bool = true;
}


// @pe
void func_1087(void)
{
	@SetVariable("oob9Danko2", 1);
}


// @pe
void func_1093(void)
{
	@SetVariable("b9q01", 3);
	func_1213();
}


void func_1226(object var_29_object)
{
	object var_31_object;
	@GetDiaryRoot(var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_29_object = false;
	}
	var_31_object = var_29_object;
}
EMIT "Stack[-1] = 0";


void func_973(bool var_77_bool, object var_78_object)
{
	bool var_86_bool; int var_87_int; string var_88_string;
	int var_90_int;
	func_1072(var_90_int);
	string var_84_string = ("d" + var_90_int) + "m";
	int var_85_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_78_object->HasProperty((var_84_string + (var_85_int + 1)), var_86_bool);
			if(!var_86_bool) { //@nz
			} else {
				var_85_int += 1;
			}
		}
		if(!var_85_int) { //@nz
			var_77_bool = false;
			return 10;
		}
		var_87_int = 0;
		if(var_85_int > 1)
			@irand(var_87_int, var_85_int);
		var_78_object->GetProperty((var_84_string + (var_87_int + 1)), var_88_string);
		bool var_109_bool; string var_110_string;
		var_88_string = var_110_string;
		func_1029(var_109_bool, var_110_string);
		var_109_bool = var_77_bool;
		return 10;

	}
}


// @pe
void func_1102(void)
{
	@SetVariable("b9q01DankoAmmo", 1);
}


// @pe
void func_719(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(1);
	int var_24_int;
	func_13(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


// @pe
void func_1108(void)
{
	@SetVariable("oob9Danko3", 1);
}


void func_1239(bool var_20_bool, object var_21_object, int var_22_int)
{
	object var_29_object;
	func_1226(var_29_object);
	object var_26_object;
	var_29_object = var_26_object;
	object var_27_object;
	var_26_object->Find(var_22_int, var_27_object);
	if(!var_27_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_22_int);
		var_20_bool = false;
	}
	var_27_object->AddChild(var_21_object);
	@SendWorldWndMessage(7);
	int var_28_int;
	var_21_object->GetCategory(var_28_int);
	@SetDiarySection(var_28_int);
	var_20_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1114(void)
{
	@SetVariable("oob9Danko4", 1);
}


void func_861(void)
{
	bool var_288_bool;
	@CameraSwitchToNormal();
	bool var_289_bool;
	func_1342(var_289_bool);
	if(var_289_bool != 0) {
	} else {
		@HasAnimationTrack(var_288_bool, "head");
		if(var_288_bool == 0) goto Label_877;
		@UnlookAsync("head");
	}
Label_877:
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_190_object, object var_191_object)
{
	var_0_object = var_191_object;
	var_1_object = var_190_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_197_bool = false;
		bool var_198_bool;
		func_1153(var_1_object);
		if(var_198_bool != 0) {
			bool var_206_bool;
			func_1165(var_1_object);
			if(var_206_bool != 0)
				var_197_bool = true;
		}
		if(var_197_bool != 0) {
			object var_212_object; object var_213_object;
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_1081();
			func_232(var_191_object, "Neutral");
			var_0_object->SetMessage(521581); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531554, 32918, 32917); //@t
		} else {
					bool var_245_bool;
					func_1153(var_1_object);
					var_247_bool = !var_245_bool; //@nz
					if(var_247_bool == 0) goto Label_175;
					func_232(var_191_object, "Neutral");
					var_0_object->SetMessage(521577); //@t
					var_0_object->ClearReplies(); //@t
					bool var_250_bool;
					func_1177(var_1_object);
					if(var_250_bool != 0)
						var_0_object->AddReply(521578, 22740, 22739); //@t
					bool var_259_bool;
					func_1201(var_1_object);
					if(var_259_bool != 0)
						var_0_object->AddReply(522381, 23547, 23546); //@t
					var_0_object->AddReply(521586, -1, 22747); //@t
		}
	}
Label_202:
	for(;;) {
		bool var_232_bool;
		func_1342(var_232_bool);
		if(var_232_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1016(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_231;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_231:
			return 0;

		}

	}
	
Label_175:
	func_232(var_191_object, "Neutral");
	var_0_object->SetMessage(521601); //@t
	var_0_object->ClearReplies(); //@t
	bool var_273_bool;
	func_1189(var_1_object);
	if(var_273_bool != 0)
		var_0_object->AddReply(522385, 23551, 23550); //@t
	var_0_object->AddReply(521602, -1, 22767); //@t
	goto Label_202;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_1120(void)
{
	int var_40_int;
	func_1067(var_40_int, "map_chertez_state");
	if(var_40_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_232(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_1342(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_1023(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


void func_878(bool var_35_bool, object var_36_object)
{
	int var_42_int; int var_43_int;
	@GetVariable("voice_common", var_42_int);
	if(var_42_int != 0) {
		bool var_46_bool; object var_47_object;
		var_36_object = var_47_object;
		func_936(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			bool var_77_bool; object var_78_object;
			var_36_object = var_78_object;
			func_973(var_77_bool, var_78_object);
			if(!var_77_bool) { //@nz
				var_35_bool = false;
				return 4;
			}
		}
		@irand(var_43_int, 2);
		if(var_43_int != 0)
			@SetVariable("voice_common", ((var_42_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_122_bool; object var_123_object;
		var_36_object = var_123_object;
		func_973(var_122_bool, var_123_object);
		if(!var_122_bool) { //@nz
			bool var_125_bool; object var_126_object;
			var_36_object = var_126_object;
			func_936(var_125_bool, var_126_object);
			if(!var_125_bool) { //@nz
				var_35_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_934;
	
Label_934:
	var_35_bool = true;
	
}


// @pe
void func_1137(object var_51_object)
{
	object var_55_object;
	func_1267(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	func_1284(var_52_object, "pt_map_aglaja", (float)-1);
	object var_81_object;
	func_1267(var_81_object);
	var_51_object->ShowMap(var_81_object);
}


void func_1267(object var_55_object)
{
	object var_58_object; object var_59_object;
	@GetMainOutdoorScene(var_58_object);
	if(var_58_object == null) {
		@Trace("Can't find main outdoor scene");
		var_59_object = null;
		var_59_object = var_55_object;
	}
	var_58_object->GetMap(var_59_object);
	var_59_object = var_55_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1016(string var_11_string)
{
	float var_14_float; float var_15_float;
	@lshGetAnimTimes(var_11_string, var_14_float, var_15_float);
	@lshPlayAnimation(var_14_float, var_15_float, false);
}


void func_1023(string var_220_string, bool var_221_bool)
{
	float var_226_float; float var_227_float;
	@lshGetAnimTimes(var_220_string, var_226_float, var_227_float);
	@lshPlayAnimation(var_226_float, var_227_float, var_221_bool);
}


