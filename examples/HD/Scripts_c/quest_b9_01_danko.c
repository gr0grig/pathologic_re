// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_1048();
			if(var_6_int == 22745) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1097();
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_1124();
				object var_50_object = var_1_object;
				func_1141(var_0_object);
			}
			if(var_6_int == 23541) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1097();
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1124();
				object var_88_object = var_1_object;
				func_1141(var_0_object);
			}
			if(var_6_int == 22739) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_1091();
			}
			if(var_6_int == 22741) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_1106();
			}
			if(var_6_int == 23549) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1106();
			}
			if(var_6_int == 23546) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1118();
			}
			if(var_6_int == 23550) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_1112();
			}
			if(var_5_int == 22742) {
				bool var_120_bool = false;
				bool var_121_bool;
				func_1157(var_1_object);
				if(var_121_bool != 0) {
					bool var_127_bool;
					func_1169(var_1_object);
					if(var_127_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0) {
					object var_133_object; object var_134_object;
					var_133_object = var_1_object;
					var_134_object = var_0_object;
					func_1085();
					func_219(var_6_int, "Menace");
					var_0_object->SetMessage(521581); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531554, 32918, 32917); //@t
					return 0;
				}
				bool var_158_bool;
				func_1157(var_1_object);
				if(!var_158_bool) { //@nz
					func_219(var_6_int, "Neutral");
					var_0_object->SetMessage(521577); //@t
					var_0_object->ClearReplies(); //@t
					bool var_163_bool;
					func_1181(var_1_object);
					if(var_163_bool != 0)
						var_0_object->AddReply(521578, 22740, 22739); //@t
					bool var_172_bool;
					func_1205(var_1_object);
					if(var_172_bool != 0)
						var_0_object->AddReply(522381, 23547, 23546); //@t
					var_0_object->AddReply(521586, -1, 22747); //@t
					return 0;
				}
				func_219(var_6_int, "Neutral");
				var_0_object->SetMessage(521601); //@t
				var_0_object->ClearReplies(); //@t
				bool var_186_bool;
				func_1193(var_1_object);
				if(var_186_bool != 0)
					var_0_object->AddReply(522385, 23551, 23550); //@t
				var_0_object->AddReply(521602, -1, 22767); //@t
				return 0;
			}
			if(var_5_int == 23551) {
				func_219(var_6_int, "Sorrow");
				var_0_object->SetMessage(522386); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522387, 23553, 23552); //@t
				return 0;
			}
			if(var_5_int == 23553) {
				func_219(var_6_int, "Sorrow");
				var_0_object->SetMessage(522388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522389, -1, 23554); //@t
				return 0;
			}
			if(var_5_int == 23547) {
				func_219(var_6_int, "Neutral");
				var_0_object->SetMessage(522382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522383, -1, 23548); //@t
				return 0;
			}
			if(var_5_int == 22740) {
				func_219(var_6_int, "Sorrow");
				var_0_object->SetMessage(521579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522377, 23543, 23542); //@t
				return 0;
			}
			if(var_5_int == 23543) {
				func_219(var_6_int, "Sorrow");
				var_0_object->SetMessage(522378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521580, -1, 22741); //@t
				var_0_object->AddReply(522379, 23545, 23544); //@t
				return 0;
			}
			if(var_5_int == 23545) {
				func_219(var_6_int, "Sorrow");
				var_0_object->SetMessage(522380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522384, -1, 23549); //@t
				return 0;
			}
			if(var_5_int == 32918) {
				func_219(var_6_int, "Neutral");
				var_0_object->SetMessage(531555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521582, 23526, 22743); //@t
				return 0;
			}
			if(var_5_int == 23526) {
				func_219(var_6_int, "Untrust");
				var_0_object->SetMessage(522363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522364, 23528, 23527); //@t
				var_0_object->AddReply(522369, 23533, 23532); //@t
				return 0;
			}
			if(var_5_int == 23533) {
				func_219(var_6_int, "Neutral");
				var_0_object->SetMessage(522370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522371, 22744, 23534); //@t
				return 0;
			}
			if(var_5_int == 23528) {
				func_219(var_6_int, "Untrust");
				var_0_object->SetMessage(522365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522366, 23530, 23529); //@t
				return 0;
			}
			if(var_5_int == 23530) {
				func_219(var_6_int, "Untrust");
				var_0_object->SetMessage(522367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522368, 22744, 23531); //@t
				return 0;
			}
			if(var_5_int == 22744) {
				func_219(var_6_int, "Untrust");
				var_0_object->SetMessage(521583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522372, 23538, 23537); //@t
				return 0;
			}
			if(var_5_int == 23538) {
				func_219(var_6_int, "Untrust");
				var_0_object->SetMessage(522373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522374, 23540, 23539); //@t
				return 0;
			}
			if(var_5_int == 23540) {
				func_219(var_6_int, "Neutral");
				var_0_object->SetMessage(522375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521584, -1, 22745); //@t
				var_0_object->AddReply(522376, -1, 23541); //@t
				return 0;
			}
			var_3_string = true;
			bool var_305_bool;
			func_1346(var_305_bool);
			if(var_305_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf2";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		bool var_5_bool;
		func_772(var_5_bool);
		if(!var_5_bool) //@nz
			@Hold();
		for(;;) {
			func_1002("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@StopGroup0();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) { //@nz
			disable OnUse;
			bool var_9_bool; object var_10_object;
			var_5_object = var_10_object;
			func_763(var_9_bool, var_10_object);
			enable OnUse;
			object var_23_object;
			var_5_object = var_23_object;
			func_706(var_23_object);
		}
	}

}


void func_0(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_777(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_1340(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_1338(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_1342(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_1344(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1321(var_87_int);
	var_31_object->SetPlayerName(var_87_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	bool var_96_bool; object var_97_object;
	object var_98_object;
	func_1055(var_98_object);
	var_98_object = var_97_object;
	func_864(var_96_bool, var_97_object);
	object var_191_object; object var_192_object;
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_296_bool = !var_34_bool; //@nz
		if(var_296_bool == 0) goto Label_70;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_70:
	object var_297_object;
	var_25_object = var_297_object;
	func_846();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_772(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


// @pe
void func_1157(bool var_199_bool)
{
	int var_201_int;
	func_1071(var_201_int, "b9q01DankoFree");
	if(var_201_int != 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_1288(object var_52_object, string var_53_string, float var_54_float)
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


void func_777(bool var_35_bool, object var_36_object, float var_37_float)
{
	cvector var_48_cvector; bool var_55_bool;
	var_36_object->GetPosition(var_48_cvector);
	float var_47_float;
	var_36_object->GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (var_56_float + var_47_float);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	@GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_47_float);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_60_float = sqrt(var_50_cvector | var_50_cvector);
	var_50_cvector /= var_60_float;
	cvector var_51_cvector = -var_50_cvector;
	cvector var_62_cvector;
	func_1061(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_52_cvector = ((var_50_cvector * var_37_float) + (var_62_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_49_cvector + var_52_cvector), var_51_cvector, true);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_1346(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_840;
		@LookAsyncCamera("head");
	}
Label_840:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


void func_1033(bool var_130_bool, string var_131_string)
{
	bool var_133_bool;
	bool var_134_bool;
	func_1346(var_134_bool);
	if(var_134_bool != 0) {
		@lshHasSpeech(var_133_bool, var_131_string);
		if(var_133_bool != 0) {
			@lshPlaySpeech(var_131_string);
			var_130_bool = true;
		}
	}
	var_130_bool = false;
}


// @pe
void func_1169(bool var_207_bool)
{
	int var_209_int;
	func_1071(var_209_int, "oob9Danko1");
	if(var_209_int == 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


void func_1048(void)
{
	bool var_8_bool;
	func_1346(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_922(bool var_107_bool, object var_108_object)
{
	string var_114_string; bool var_116_bool; int var_117_int; string var_118_string;
	var_114_string = "c";
	int var_115_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_108_object->HasProperty((var_114_string + (var_115_int + 1)), var_116_bool);
			if(!var_116_bool) { //@nz
			} else {
				var_115_int += 1;
			}
		}
		if(!var_115_int) { //@nz
			var_107_bool = false;
			return 10;
		}
		var_117_int = 0;
		if(var_115_int > 1)
			@irand(var_117_int, var_115_int);
		var_108_object->GetProperty((var_114_string + (var_117_int + 1)), var_118_string);
		bool var_130_bool; string var_131_string;
		var_118_string = var_131_string;
		func_1033(var_130_bool, var_131_string);
		var_130_bool = var_107_bool;
		return 10;

	}
}


// @pe
void func_1181(bool var_261_bool)
{
	int var_263_int;
	func_1071(var_263_int, "oob9Danko2");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_1055(object var_98_object)
{
	object var_100_object;
	@self(var_100_object);
	var_100_object = var_98_object;
}
EMIT "Stack[-1] = 0";


void func_1061(cvector var_62_cvector, cvector var_63_cvector)
{
	float var_66_float = sqrt(var_63_cvector | var_63_cvector);
	if(var_66_float < 0.000001)
		var_62_cvector = [0.0, 0.0, 0.0];
	var_62_cvector = var_63_cvector / var_66_float;
}


void func_1321(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x538";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_1193(bool var_284_bool)
{
	int var_286_int;
	func_1071(var_286_int, "oob9Danko3");
	if(var_286_int == 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


void func_1071(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1076(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


// @pe
void func_1205(bool var_270_bool)
{
	int var_272_int;
	func_1071(var_272_int, "oob9Danko4");
	if(var_272_int == 0) {
		var_270_bool = true;
		return 0;
	}
	var_270_bool = false;
}


void func_1338(int var_84_int)
{
	var_84_int = 515573;
}


void func_1340(int var_83_int)
{
	var_83_int = 504032;
}


// @pe
void func_1085(void)
{
	@SetVariable("oob9Danko1", 1);
}


void func_1342(string var_85_string)
{
	var_85_string = "ui/NPC_Bakalavr.png";
}


void func_959(bool var_138_bool, object var_139_object)
{
	bool var_147_bool; int var_148_int; string var_149_string;
	int var_151_int;
	func_1076(var_151_int);
	string var_145_string = ("d" + var_151_int) + "m";
	int var_146_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_139_object->HasProperty((var_145_string + (var_146_int + 1)), var_147_bool);
			if(!var_147_bool) { //@nz
			} else {
				var_146_int += 1;
			}
		}
		if(!var_146_int) { //@nz
			var_138_bool = false;
			return 10;
		}
		var_148_int = 0;
		if(var_146_int > 1)
			@irand(var_148_int, var_146_int);
		var_139_object->GetProperty((var_145_string + (var_148_int + 1)), var_149_string);
		bool var_170_bool; string var_171_string;
		var_149_string = var_171_string;
		func_1033(var_170_bool, var_171_string);
		var_170_bool = var_138_bool;
		return 10;

	}
}


void func_1344(string var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr_b.png";
}


void func_1217(void)
{
	object var_16_object;
	@CreateDiaryEntry(var_16_object, 303, 1, 521618);
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_1243(var_20_bool, var_21_object, 297);
}
EMIT "Stack[-1] = 0";


void func_1346(bool var_78_bool)
{
	var_78_bool = true;
}


// @pe
void func_1091(void)
{
	@SetVariable("oob9Danko2", 1);
}


// @pe
void func_706(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(0);
	int var_24_int;
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


// @pe
void func_1097(void)
{
	@SetVariable("b9q01", 3);
	func_1217();
}


void func_846(void)
{
	bool var_299_bool;
	@CameraSwitchToNormal(true);
	bool var_301_bool;
	func_1346(var_301_bool);
	if(var_301_bool != 0) {
	} else {
		@HasAnimationTrack(var_299_bool, "head");
		if(var_299_bool == 0) goto Label_863;
		@UnlookAsync("head");
	}
Label_863:
	
}


void func_1230(object var_29_object)
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


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_191_object, object var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_198_bool = false;
		bool var_199_bool;
		func_1157(var_1_object);
		if(var_199_bool != 0) {
			bool var_207_bool;
			func_1169(var_1_object);
			if(var_207_bool != 0)
				var_198_bool = true;
		}
		if(var_198_bool != 0) {
			object var_213_object; object var_214_object;
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_1085();
			func_219(var_192_object, "Menace");
			var_0_object->SetMessage(521581); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531554, 32918, 32917); //@t
		} else {
					bool var_256_bool;
					func_1157(var_1_object);
					var_258_bool = !var_256_bool; //@nz
					if(var_258_bool == 0) goto Label_162;
					func_219(var_192_object, "Neutral");
					var_0_object->SetMessage(521577); //@t
					var_0_object->ClearReplies(); //@t
					bool var_261_bool;
					func_1181(var_1_object);
					if(var_261_bool != 0)
						var_0_object->AddReply(521578, 22740, 22739); //@t
					bool var_270_bool;
					func_1205(var_1_object);
					if(var_270_bool != 0)
						var_0_object->AddReply(522381, 23547, 23546); //@t
					var_0_object->AddReply(521586, -1, 22747); //@t
		}
	}
Label_189:
	for(;;) {
		bool var_238_bool;
		func_1346(var_238_bool);
		if(var_238_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1002(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_218;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_218:
			return 0;

		}

	}
	
Label_162:
	func_219(var_192_object, "Neutral");
	var_0_object->SetMessage(521601); //@t
	var_0_object->ClearReplies(); //@t
	bool var_284_bool;
	func_1193(var_1_object);
	if(var_284_bool != 0)
		var_0_object->AddReply(522385, 23551, 23550); //@t
	var_0_object->AddReply(521602, -1, 22767); //@t
	goto Label_189;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1106(void)
{
	@SetVariable("b9q01DankoAmmo", 1);
}


// @pe
void func_1112(void)
{
	@SetVariable("oob9Danko3", 1);
}


// @pe
void func_219(object var_2_object, string var_217_string)
{
	bool var_218_bool;
	func_1346(var_218_bool);
	if(!var_218_bool) //@nz
		return 0;
	if(var_217_string == var_2_object)
		return 0;
	string var_221_string; bool var_222_bool;
	var_217_string = var_221_string;
	if(var_217_string == "")
		var_222_bool = false;
	else
		var_222_bool = true;
	func_1018(var_221_string, var_222_bool);
	var_2_object = var_217_string;
	
}


void func_1243(bool var_20_bool, object var_21_object, int var_22_int)
{
	object var_29_object;
	func_1230(var_29_object);
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
void func_1118(void)
{
	@SetVariable("oob9Danko4", 1);
}


void func_864(bool var_96_bool, object var_97_object)
{
	int var_103_int; int var_104_int;
	@GetVariable("voice_common", var_103_int);
	if(var_103_int != 0) {
		bool var_107_bool; object var_108_object;
		var_97_object = var_108_object;
		func_922(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			bool var_138_bool; object var_139_object;
			var_97_object = var_139_object;
			func_959(var_138_bool, var_139_object);
			if(!var_138_bool) { //@nz
				var_96_bool = false;
				return 4;
			}
		}
		@irand(var_104_int, 2);
		if(var_104_int != 0)
			@SetVariable("voice_common", ((var_103_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_183_bool; object var_184_object;
		var_97_object = var_184_object;
		func_959(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			bool var_186_bool; object var_187_object;
			var_97_object = var_187_object;
			func_922(var_186_bool, var_187_object);
			if(!var_186_bool) { //@nz
				var_96_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_920;
	
Label_920:
	var_96_bool = true;
	
}


// @pe
void func_1124(void)
{
	int var_40_int;
	func_1071(var_40_int, "map_chertez_state");
	if(var_40_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_1002(string var_9_string)
{
	bool var_13_bool; float var_14_float; float var_15_float;
	@lshHasAnimation(var_13_bool, var_9_string);
	if(var_13_bool != 0) {
		@lshGetAnimTimes(var_9_string, var_14_float, var_15_float);
		@lshPlayAnimation(var_14_float, var_15_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_9_string);
	}
	
}


void func_753(bool var_13_bool, cvector var_14_cvector)
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


// @pe
void func_1141(object var_51_object)
{
	object var_55_object;
	func_1271(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	func_1288(var_52_object, "pt_map_aglaja", (float)-1);
	object var_81_object;
	func_1271(var_81_object);
	var_51_object->ShowMap(var_81_object);
}


void func_1271(object var_55_object)
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


void func_1018(string var_221_string, bool var_222_bool)
{
	bool var_228_bool; float var_229_float; float var_230_float;
	@lshHasAnimation(var_228_bool, var_221_string);
	if(var_228_bool != 0) {
		@lshGetAnimTimes(var_221_string, var_229_float, var_230_float);
		@lshPlayAnimation(var_229_float, var_230_float, var_222_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_221_string);
	}
	
}


void func_763(bool var_9_bool, object var_10_object)
{
	cvector var_12_cvector;
	var_10_object->GetPosition(var_12_cvector);
	bool var_13_bool; cvector var_14_cvector;
	var_12_cvector = var_14_cvector;
	func_753(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
}


