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
			func_923();
			if(var_6_int == 23196) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1003();
				object var_25_object; object var_26_object;
				var_25_object = var_1_object;
				var_26_object = var_0_object;
				func_1028();
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_994();
			}
			if(var_6_int == 23199) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_1003();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_1028();
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_994();
			}
			if(var_5_int == 23193) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_1039(var_1_object);
				if(!var_73_bool) { //@nz
					bool var_82_bool;
					func_1051(var_1_object);
					if(var_82_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_1022();
					func_205(var_6_int, "Untrust");
					var_0_object->SetMessage(522023); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523350, 24567, 24566); //@t
					return 0;
				}
				bool var_113_bool;
				func_1039(var_1_object);
				if(!var_113_bool) { //@nz
					func_205(var_6_int, "Neutral");
					var_0_object->SetMessage(522028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522029, -1, 23199); //@t
					var_0_object->AddReply(522030, -1, 23200); //@t
					return 0;
				}
				func_205(var_6_int, "Neutral");
				var_0_object->SetMessage(522031); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522032, -1, 23202); //@t
				bool var_129_bool;
				func_1063(var_1_object);
				if(var_129_bool != 0)
					var_0_object->AddReply(523383, -1, 24601); //@t
				return 0;
			}
			if(var_5_int == 24567) {
				func_205(var_6_int, "Untrust");
				var_0_object->SetMessage(523351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523352, 24569, 24568); //@t
				var_0_object->AddReply(523360, 24577, 24576); //@t
				var_0_object->AddReply(523369, 24586, 24585); //@t
				return 0;
			}
			if(var_5_int == 24586) {
				func_205(var_6_int, "Untrust");
				var_0_object->SetMessage(523370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523371, 24588, 24587); //@t
				var_0_object->AddReply(541842, 24591, 44060); //@t
				return 0;
			}
			if(var_5_int == 24591) {
				func_205(var_6_int, "Untrust");
				var_0_object->SetMessage(523374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523375, 24582, 24592); //@t
				return 0;
			}
			if(var_5_int == 24588) {
				func_205(var_6_int, "Untrust");
				var_0_object->SetMessage(523372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523373, 24582, 24589); //@t
				return 0;
			}
			if(var_5_int == 24577) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523362, 24579, 24578); //@t
				return 0;
			}
			if(var_5_int == 24579) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523364, 24573, 24580); //@t
				var_0_object->AddReply(523365, 24582, 24581); //@t
				return 0;
			}
			if(var_5_int == 24582) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523367, 24573, 24583); //@t
				var_0_object->AddReply(523368, 24573, 24584); //@t
				return 0;
			}
			if(var_5_int == 24569) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523354, 24571, 24570); //@t
				return 0;
			}
			if(var_5_int == 24571) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523356, 24573, 24572); //@t
				return 0;
			}
			if(var_5_int == 24573) {
				func_205(var_6_int, "Fear");
				var_0_object->SetMessage(523357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522026, -1, 23196); //@t
				var_0_object->AddReply(523359, -1, 24575); //@t
				return 0;
			}
			var_3_string = true;
			bool var_226_bool;
			func_992(var_226_bool);
			if(var_226_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		bool var_5_bool;
		func_647(var_5_bool);
		if(!var_5_bool) //@nz
			@Hold();
		for(;;) {
			func_877("Neutral");
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
			func_638(var_9_bool, var_10_object);
			enable OnUse;
			object var_23_object;
			var_5_object = var_23_object;
			func_581(var_23_object);
		}
	}

}


void func_0(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_652(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_986(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_984(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_988(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_990(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1129(var_87_int);
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
	func_930(var_98_object);
	var_98_object = var_97_object;
	func_739(var_96_bool, var_97_object);
	object var_191_object; object var_192_object;
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_282_bool = !var_34_bool; //@nz
		if(var_282_bool == 0) goto Label_70;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_70:
	object var_283_object;
	var_25_object = var_283_object;
	func_721();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1028(void)
{
	@SetVariable("b11q01", 2);
	bool var_29_bool;
	func_951(var_29_bool, "quest_b11_01", "open_well_exit");
}


void func_647(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


void func_652(bool var_35_bool, object var_36_object, float var_37_float)
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
	func_936(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
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
	func_992(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_715;
		@LookAsyncCamera("head");
	}
Label_715:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


void func_908(bool var_130_bool, string var_131_string)
{
	bool var_133_bool;
	bool var_134_bool;
	func_992(var_134_bool);
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
void func_1039(bool var_199_bool)
{
	int var_201_int;
	func_946(var_201_int, "b11q01VictimChoosed");
	if(var_201_int != 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


// @pe
void func_1022(void)
{
	@SetVariable("oob11Julia1", 1);
}


// @pe
void func_1051(bool var_208_bool)
{
	int var_210_int;
	func_946(var_210_int, "oob11Julia1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_923(void)
{
	bool var_8_bool;
	func_992(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_797(bool var_107_bool, object var_108_object)
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
		func_908(var_130_bool, var_131_string);
		var_130_bool = var_107_bool;
		return 10;

	}
}


void func_930(object var_98_object)
{
	object var_100_object;
	@self(var_100_object);
	var_100_object = var_98_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1063(bool var_273_bool)
{
	int var_275_int;
	func_946(var_275_int, "b11q01KillJulia");
	if(var_275_int != 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


void func_936(cvector var_62_cvector, cvector var_63_cvector)
{
	float var_66_float = sqrt(var_63_cvector | var_63_cvector);
	if(var_66_float < 0.000001)
		var_62_cvector = [0.0, 0.0, 0.0];
	var_62_cvector = var_63_cvector / var_66_float;
}


void func_946(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1075(void)
{
	object var_40_object;
	@CreateDiaryEntry(var_40_object, 315, 1, 522057);
	bool var_44_bool; object var_45_object;
	var_40_object = var_45_object;
	func_1101(var_44_bool, var_45_object, 313);
}
EMIT "Stack[-1] = 0";


void func_951(bool var_29_bool, string var_30_string, string var_31_string)
{
	object var_33_object;
	@FindActor(var_33_object, var_30_string);
	if(var_33_object == null)
		var_29_bool = false;
	@Trigger(var_33_object, var_31_string);
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1088(object var_53_object)
{
	object var_55_object;
	@GetDiaryRoot(var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_53_object = false;
	}
	var_55_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_834(bool var_138_bool, object var_139_object)
{
	bool var_147_bool; int var_148_int; string var_149_string;
	int var_151_int;
	func_975(var_151_int);
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
		func_908(var_170_bool, var_171_string);
		var_170_bool = var_138_bool;
		return 10;

	}
}


void func_963(bool var_17_bool, string var_18_string, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_18_string);
	if(var_22_object == null)
		var_17_bool = false;
	@Trigger(var_22_object, var_19_string, var_20_string);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_581(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(0);
	int var_24_int;
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


// @pe
void func_205(object var_2_object, string var_218_string)
{
	bool var_219_bool;
	func_992(var_219_bool);
	if(!var_219_bool) //@nz
		return 0;
	if(var_218_string == var_2_object)
		return 0;
	string var_222_string; bool var_223_bool;
	var_218_string = var_222_string;
	if(var_218_string == "")
		var_223_bool = false;
	else
		var_223_bool = true;
	func_893(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	
}


void func_1101(bool var_44_bool, object var_45_object, int var_46_int)
{
	object var_53_object;
	func_1088(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	object var_51_object;
	var_50_object->Find(var_46_int, var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_46_int);
		var_44_bool = false;
	}
	var_51_object->AddChild(var_45_object);
	@SendWorldWndMessage(7);
	int var_52_int;
	var_45_object->GetCategory(var_52_int);
	@SetDiarySection(var_52_int);
	var_44_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_975(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_191_object, object var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_198_bool = false;
		bool var_199_bool;
		func_1039(var_1_object);
		if(!var_199_bool) { //@nz
			bool var_208_bool;
			func_1051(var_1_object);
			if(var_208_bool != 0)
				var_198_bool = true;
		}
		if(var_198_bool != 0) {
			object var_214_object; object var_215_object;
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1022();
			func_205(var_192_object, "Untrust");
			var_0_object->SetMessage(522023); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523350, 24567, 24566); //@t
		} else {
					bool var_257_bool;
					func_1039(var_1_object);
					var_259_bool = !var_257_bool; //@nz
					if(var_259_bool == 0) goto Label_148;
					func_205(var_192_object, "Neutral");
					var_0_object->SetMessage(522028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522029, -1, 23199); //@t
					var_0_object->AddReply(522030, -1, 23200); //@t
		}
	}
Label_175:
	for(;;) {
		bool var_239_bool;
		func_992(var_239_bool);
		if(var_239_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_877(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_204;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_204:
			return 0;

		}

	}
	
Label_148:
	func_205(var_192_object, "Neutral");
	var_0_object->SetMessage(522031); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(522032, -1, 23202); //@t
	bool var_273_bool;
	func_1063(var_1_object);
	if(var_273_bool != 0)
		var_0_object->AddReply(523383, -1, 24601); //@t
	goto Label_175;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_721(void)
{
	bool var_285_bool;
	@CameraSwitchToNormal(true);
	bool var_287_bool;
	func_992(var_287_bool);
	if(var_287_bool != 0) {
	} else {
		@HasAnimationTrack(var_285_bool, "head");
		if(var_285_bool == 0) goto Label_738;
		@UnlookAsync("head");
	}
Label_738:
	
}


void func_984(int var_84_int)
{
	var_84_int = 515537;
}


void func_986(int var_83_int)
{
	var_83_int = 502862;
}


void func_988(string var_85_string)
{
	var_85_string = "ui/NPC_Julia.png";
}


void func_990(string var_86_string)
{
	var_86_string = "ui/NPC_Julia_b.png";
}


void func_992(bool var_78_bool)
{
	var_78_bool = true;
}


// @pe
void func_994(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_1075();
}


void func_739(bool var_96_bool, object var_97_object)
{
	int var_103_int; int var_104_int;
	@GetVariable("voice_common", var_103_int);
	if(var_103_int != 0) {
		bool var_107_bool; object var_108_object;
		var_97_object = var_108_object;
		func_797(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			bool var_138_bool; object var_139_object;
			var_97_object = var_139_object;
			func_834(var_138_bool, var_139_object);
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
		func_834(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			bool var_186_bool; object var_187_object;
			var_97_object = var_187_object;
			func_797(var_186_bool, var_187_object);
			if(!var_186_bool) { //@nz
				var_96_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_795;
	
Label_795:
	var_96_bool = true;
	
}


void func_1129(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x478";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_1003(void)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillJulia", 1);
	bool var_17_bool;
	func_963(var_17_bool, "volonteers_burah", "disease", "julia");
	@Trace("Julia is diseased");
}


void func_877(string var_9_string)
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


void func_628(bool var_13_bool, cvector var_14_cvector)
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


void func_893(string var_222_string, bool var_223_bool)
{
	bool var_229_bool; float var_230_float; float var_231_float;
	@lshHasAnimation(var_229_bool, var_222_string);
	if(var_229_bool != 0) {
		@lshGetAnimTimes(var_222_string, var_230_float, var_231_float);
		@lshPlayAnimation(var_230_float, var_231_float, var_223_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_222_string);
	}
	
}


void func_638(bool var_9_bool, object var_10_object)
{
	cvector var_12_cvector;
	var_10_object->GetPosition(var_12_cvector);
	bool var_13_bool; cvector var_14_cvector;
	var_12_cvector = var_14_cvector;
	func_628(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
}


