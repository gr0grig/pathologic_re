// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,StopGroup0/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,Trigger/3,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Untrust|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Fear|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Julia.png|W:ui/NPC_Julia_b.png|W:b11q01KnowWhoKilled|W:b11q01VictimChoosed|W:b11q01KillJulia|W:volonteers_burah|W:disease|W:julia|W:Julia is diseased|W:oob11Julia1|W:b11q01|W:quest_b11_01|W:open_well_exit|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x24d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe3 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_6: op=0x25e vars=
// @EVENT_5: op=0x261 vars=
// @EVENT_0: op=0x264 vars=object
// @PE: 0x51,0xcd,0xe3,0x245,0x3e2,0x3eb,0x3fe,0x404,0x40f,0x41b,0x427

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_923();
		var_10_bool = var_6_int == (int)23196;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_1003();
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_object;
			func_1028();
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_994();
		}
		var_63_bool = var_6_int == (int)23199;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_1003();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_1028();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_994();
		}
		var_71_bool = var_5_int == (int)23193;
		if(var_71_bool != 0) {
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_1039(var_74_object);
			var_81_bool = var_73_bool == 0; //@nz
			if(var_81_bool != 0) {
				var_82_bool = 0; var_83_object = Obj();
				var_83_object = var_1_object;
				func_1051(var_83_object);
				if(var_82_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				var_88_object = Obj(); var_89_object = Obj();
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1022();
				var_92_string = "";
				func_205(var_6_int, "Untrust");
				@@@var_0_object:SetMessage((int)522023);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523350, (int)24567, (int)24566);
				return 0;
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_1039(var_114_object);
			var_115_bool = var_113_bool == 0; //@nz
			if(var_115_bool != 0) {
				var_116_string = "";
				func_205(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)522028);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522029, (int)-1, (int)23199);
				@@@var_0_object:AddReply((int)522030, (int)-1, (int)23200);
				return 0;
			}
			var_124_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)522031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522032, (int)-1, (int)23202);
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_1063(var_130_object);
			if(var_129_bool != 0) {
				@@@var_0_object:AddReply((int)523383, (int)-1, (int)24601);
			}
			return 0;
		}
		var_139_bool = var_5_int == (int)24567;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_205(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)523351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523352, (int)24569, (int)24568);
			@@@var_0_object:AddReply((int)523360, (int)24577, (int)24576);
			@@@var_0_object:AddReply((int)523369, (int)24586, (int)24585);
			return 0;
		}
		var_152_bool = var_5_int == (int)24586;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_205(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)523370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523371, (int)24588, (int)24587);
			@@@var_0_object:AddReply((int)541842, (int)24591, (int)44060);
			return 0;
		}
		var_162_bool = var_5_int == (int)24591;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_205(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)523374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523375, (int)24582, (int)24592);
			return 0;
		}
		var_169_bool = var_5_int == (int)24588;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_205(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)523372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523373, (int)24582, (int)24589);
			return 0;
		}
		var_176_bool = var_5_int == (int)24577;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523362, (int)24579, (int)24578);
			return 0;
		}
		var_183_bool = var_5_int == (int)24579;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523364, (int)24573, (int)24580);
			@@@var_0_object:AddReply((int)523365, (int)24582, (int)24581);
			return 0;
		}
		var_193_bool = var_5_int == (int)24582;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523367, (int)24573, (int)24583);
			@@@var_0_object:AddReply((int)523368, (int)24573, (int)24584);
			return 0;
		}
		var_203_bool = var_5_int == (int)24569;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523354, (int)24571, (int)24570);
			return 0;
		}
		var_210_bool = var_5_int == (int)24571;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523356, (int)24573, (int)24572);
			return 0;
		}
		var_217_bool = var_5_int == (int)24573;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_205(var_6_int, "Fear");
			@@@var_0_object:SetMessage((int)523357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522026, (int)-1, (int)23196);
			@@@var_0_object:AddReply((int)523359, (int)-1, (int)24575);
			return 0;
		}
		var_3_string = true;
		var_226_bool = 0;
		func_992(var_226_bool);
		if(var_226_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe4";
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0();
	return 0;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0;
	IsOverrideActive(var_7_bool);
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		EventDisable(0);
		var_9_bool = 0; var_10_object = Obj();
		var_5_object = var_10_object;
		func_638(var_9_bool, var_10_object);
		EventEnable(0);
		var_23_object = Obj();
		var_5_object = var_23_object;
		func_581(var_23_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0;
	func_647(var_5_bool);
	var_8_bool = var_5_bool == 0; //@nz
	if(var_8_bool != 0) {
		Hold();
	}
Label_596:
	var_9_string = "";
	func_877("Neutral");
	lshWaitForAnimEnd();
	goto Label_596;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_652(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_986(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_984(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_988(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_990(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1129(var_87_int);
	@@var_31_object:SetPlayerName(var_87_int);
	IsOverrideActive(var_32_bool);
	var_95_bool = var_32_bool;
	if(var_95_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_96_bool = 0; var_97_object = Obj();
	func_930(Obj());
	var_98_object = var_97_object;
	func_739(var_96_bool, var_97_object);
	var_191_object = Obj(); var_192_object = Obj();
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_63:
	var_282_bool = var_34_bool == 0; //@nz
	if(var_282_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_63;
	}
	var_25_object = Obj();
	func_721();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1028()
{
	SetVariable("b11q01", (int)2);
	var_29_bool = 0; var_30_string = ""; var_31_string = "";
	func_951(var_29_bool, "quest_b11_01", "open_well_exit");
	return 0;
}


func_647(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
	return 2;
}


func_652(var_35_bool, var_36_object, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0;
	@@var_36_object:GetPosition(var_48_cvector);
	@@var_36_object:GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_47_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	GetPosition(var_49_cvector);
	GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_47_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_60_float = sqrt(var_59_int);
	var_50_cvector = var_50_cvector / var_60_float;
	var_51_cvector = -var_50_cvector;
	var_61_float = var_50_cvector * var_37_float;
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_63_cvector = var_51_cvector ^ CVector(0.0, 1.0, 0.0);
	func_936(var_62_cvector, var_63_cvector);
	var_71_float = var_62_cvector * (int)25;
	var_72_int = var_61_float + var_71_float;
	var_52_cvector = var_72_int - CVector(0.0, 10.0, 0.0);
	var_53_cvector = var_49_cvector + var_52_cvector;
	IsOverrideActive(var_54_bool);
	var_74_bool = var_54_bool;
	if(var_74_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_53_cvector, var_51_cvector, (bool)1);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	Rotate(var_76_float, var_77_float);
	var_78_bool = 0;
	func_992(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_715;
		LookAsyncCamera("head");
	}
Label_715:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_908(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0;
	var_134_bool = 0;
	func_992(var_134_bool);
	if(var_134_bool != 0) {
		lshHasSpeech(var_133_bool, var_131_string);
		var_135_bool = var_133_bool;
		if(var_135_bool != 0) {
			lshPlaySpeech(var_131_string);
			var_130_bool = 1;
			return 2;
		}
	}
	var_130_bool = 0;
	return 2;
}


func_1039(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_946(var_201_int, "b11q01VictimChoosed");
	var_206_bool = var_201_int != (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_1022()
{
	SetVariable("oob11Julia1", (int)1);
	return 0;
}


func_1051(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_946(var_210_int, "oob11Julia1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_923()
{
	var_8_bool = 0;
	func_992(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_797(var_107_bool, var_108_object)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = "";
	var_114_string = "c";
	var_115_int = 0;
	
Label_800:
	if((int)1 != 0) {
		var_121_int = var_115_int + (int)1;
		var_122_int = var_114_string + var_121_int;
		@@var_108_object:HasProperty(var_122_int, var_116_bool);
		var_123_bool = var_116_bool == 0; //@nz
		if(var_123_bool != 0) {
		} else {
			var_115_int = var_115_int + (int)1;
			goto Label_800;
		}
	}
	var_124_bool = var_115_int == 0; //@nz
	if(var_124_bool != 0) {
		var_107_bool = 0;
		return 10;
	}
	var_117_int = 0;
	var_126_bool = var_115_int > (int)1;
	if(var_126_bool != 0) {
		irand(var_117_int, var_115_int);
	}
	var_128_int = var_117_int + (int)1;
	var_129_int = var_114_string + var_128_int;
	@@var_108_object:GetProperty(var_129_int, var_118_string);
	var_130_bool = 0; var_131_string = "";
	var_118_string = var_131_string;
	func_908(var_130_bool, var_131_string);
	var_130_bool = var_107_bool;
	return 10;
	
}


func_930(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj();
	self(var_100_object);
	var_100_object = var_98_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1063(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_946(var_275_int, "b11q01KillJulia");
	var_278_bool = var_275_int != (int)0;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_936(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0;
	var_67_int = var_63_cvector | var_63_cvector;
	var_66_float = sqrt(var_67_int);
	var_68_float = 9.999999974752427e-07;
	var_69_bool = var_66_float < var_68_float;
	if(var_69_bool != 0) {
		var_62_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_62_cvector = var_63_cvector / var_66_float;
	return 2;
}


func_946(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0;
	GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
	return 2;
}


func_1075()
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateDiaryEntry(var_40_object, (int)315, (int)1, (int)522057);
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0;
	var_40_object = var_45_object;
	func_1101(var_44_bool, var_45_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_951(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj();
	FindActor(var_33_object, var_30_string);
	var_34_bool = var_33_object == 0; //@ne
	if(var_34_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	Trigger(var_33_object, var_31_string);
	var_29_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1088(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	GetDiaryRoot(var_55_object);
	var_56_bool = var_55_object == 0; //@nz
	if(var_56_bool != 0) {
		Trace("Can't retrieve diary root");
		var_53_object = 0;
		return 2;
	}
	var_55_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_834(var_138_bool, var_139_object)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = "";
	var_151_int = 0;
	func_975(var_151_int);
	var_157_int = "d" + var_151_int;
	var_145_string = var_157_int + "m";
	var_146_int = 0;
	
Label_843:
	if((int)1 != 0) {
		var_161_int = var_146_int + (int)1;
		var_162_int = var_145_string + var_161_int;
		@@var_139_object:HasProperty(var_162_int, var_147_bool);
		var_163_bool = var_147_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_146_int = var_146_int + (int)1;
			goto Label_843;
		}
	}
	var_164_bool = var_146_int == 0; //@nz
	if(var_164_bool != 0) {
		var_138_bool = 0;
		return 10;
	}
	var_148_int = 0;
	var_166_bool = var_146_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_148_int, var_146_int);
	}
	var_168_int = var_148_int + (int)1;
	var_169_int = var_145_string + var_168_int;
	@@var_139_object:GetProperty(var_169_int, var_149_string);
	var_170_bool = 0; var_171_string = "";
	var_149_string = var_171_string;
	func_908(var_170_bool, var_171_string);
	var_170_bool = var_138_bool;
	return 10;
	
}


func_963(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, var_18_string);
	var_23_bool = var_22_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	Trigger(var_22_object, var_19_string, var_20_string);
	var_17_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_581(var_23_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(0);
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	return 0;
}


func_205(var_2_object, var_218_string)
{
	var_219_bool = 0;
	func_992(var_219_bool);
	var_220_bool = var_219_bool == 0; //@nz
	if(var_220_bool != 0) {
		return 0;
	}
	var_221_bool = var_218_string == var_2_object;
	if(var_221_bool != 0) {
		return 0;
	}
	var_222_string = ""; var_223_bool = 0;
	var_218_string = var_222_string;
	var_225_bool = var_218_string == "";
	if(var_225_bool != 0) {
		var_223_bool = 0;
	} else {
		var_223_bool = 1;
	}
	func_893(var_222_string, var_223_bool);
	var_2_object = var_218_string;
	return 0;
	
}


func_1101(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	func_1088(Obj());
	var_53_object = var_50_object;
	@@var_50_object:Find(var_46_int, var_51_object);
	var_58_bool = var_51_object == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Can't find diary parent with id: " + var_46_int;
		Trace(var_60_int);
		var_44_bool = 0;
		return 6;
	}
	@@var_51_object:AddChild(var_45_object);
	SendWorldWndMessage((int)7);
	@@var_45_object:GetCategory(var_52_int);
	SetDiarySection(var_52_int);
	var_44_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_975(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_198_bool = 0;
		var_198_bool = 0;
		var_199_bool = 0; var_200_object = Obj();
		var_200_object = var_1_object;
		func_1039(var_200_object);
		var_207_bool = var_199_bool == 0; //@nz
		if(var_207_bool != 0) {
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1051(var_209_object);
			if(var_208_bool != 0) {
				var_198_bool = 1;
			}
		}
		if(var_198_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1022();
			var_218_string = "";
			func_205(var_192_object, "Untrust");
			@@@var_0_object:SetMessage((int)522023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523350, (int)24567, (int)24566);
		} else {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1039(var_258_object);
				var_259_bool = var_257_bool == 0; //@nz
				if(var_259_bool != 0) {
					var_260_string = "";
					func_205(var_192_object, "Neutral");
					@@@var_0_object:SetMessage((int)522028);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)522029, (int)-1, (int)23199);
					@@@var_0_object:AddReply((int)522030, (int)-1, (int)23200);
					goto Label_175;
				}
				var_268_string = "";
				func_205(var_192_object, "Neutral");
				@@@var_0_object:SetMessage((int)522031);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522032, (int)-1, (int)23202);
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_1063(var_274_object);
				if(var_273_bool != 0) {
					@@@var_0_object:AddReply((int)523383, (int)-1, (int)24601);
				}
				goto Label_175;
		}
	}
Label_175:
	var_239_bool = 0;
	func_992(var_239_bool);
	if(var_239_bool != 0) {

	Label_179:
		lshWaitForAnimEnd();
		var_240_string = var_3_string;
		if(var_240_string != 0) {
		} else {
			var_241_string = "";
			var_241_string = var_2_object;
			func_877(var_241_string);
			goto Label_179;
	}
		PlayAnimation("all", "idle");

	Label_194:
		WaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
			goto Label_204;
		}
		PlayAnimation("all", "idle");
		goto Label_194;

	}
	goto Label_204;
	
Label_204:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_721()
{
	var_284_bool = 0; var_285_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_287_bool = 0;
	func_992(var_287_bool);
	if(var_287_bool != 0) {
	} else {
		HasAnimationTrack(var_285_bool, "head");
		var_289_bool = var_285_bool;
		if(var_289_bool == 0) goto Label_738;
		UnlookAsync("head");
	}
Label_738:
	return 2;
	
}


func_984(var_84_int)
{
	var_84_int = 515537;
	return 0;
}


func_986(var_83_int)
{
	var_83_int = 502862;
	return 0;
}


func_988(var_85_string)
{
	var_85_string = "ui/NPC_Julia.png";
	return 0;
}


func_990(var_86_string)
{
	var_86_string = "ui/NPC_Julia_b.png";
	return 0;
}


func_992(var_78_bool)
{
	var_78_bool = 1;
	return 0;
}


func_994()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_1075();
	return 0;
}


func_739(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	GetVariable("voice_common", var_103_int);
	var_106_int = var_103_int;
	if(var_106_int != 0) {
		var_107_bool = 0; var_108_object = Obj();
		var_97_object = var_108_object;
		func_797(var_107_bool, var_108_object);
		var_137_bool = var_107_bool == 0; //@nz
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_97_object = var_139_object;
			func_834(var_138_bool, var_139_object);
			var_173_bool = var_138_bool == 0; //@nz
			if(var_173_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		irand(var_104_int, (int)2);
		var_175_int = var_104_int;
		if(var_175_int != 0) {
			var_178_int = var_103_int + (int)1;
			var_180_int = var_178_int % (int)3;
			SetVariable("voice_common", var_180_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_183_bool = 0; var_184_object = Obj();
		var_97_object = var_184_object;
		func_834(var_183_bool, var_184_object);
		var_185_bool = var_183_bool == 0; //@nz
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_97_object = var_187_object;
			func_797(var_186_bool, var_187_object);
			var_188_bool = var_186_bool == 0; //@nz
			if(var_188_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_795;
	
Label_795:
	var_96_bool = 1;
	return 4;
	
}


func_1129(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x478";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_1003()
{
	SetVariable("b11q01VictimChoosed", (int)1);
	SetVariable("b11q01KillJulia", (int)1);
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = "";
	func_963(var_17_bool, "volonteers_burah", "disease", "julia");
	Trace("Julia is diseased");
	return 0;
}


func_877(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0;
	lshHasAnimation(var_13_bool, var_9_string);
	var_16_bool = var_13_bool;
	if(var_16_bool != 0) {
		lshGetAnimTimes(var_9_string, var_14_float, var_15_float);
		lshPlayAnimation(var_14_float, var_15_float, (bool)0);
	} else {
		var_19_int = "Can't find lsh animation : " + var_9_string;
		Trace(var_19_int);
	}
	return 6;
	
}


func_628(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0;
	GetPosition(var_18_cvector);
	var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
	return 6;
}


func_893(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0;
	lshHasAnimation(var_229_bool, var_222_string);
	var_232_bool = var_229_bool;
	if(var_232_bool != 0) {
		lshGetAnimTimes(var_222_string, var_230_float, var_231_float);
		lshPlayAnimation(var_230_float, var_231_float, var_223_bool);
	} else {
		var_234_int = "Can't find lsh animation : " + var_222_string;
		Trace(var_234_int);
	}
	return 6;
	
}


func_638(var_9_bool, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0);
	@@var_10_object:GetPosition(var_12_cvector);
	var_13_bool = 0; var_14_cvector = CVector(0,0,0);
	var_12_cvector = var_14_cvector;
	func_628(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
	return 2;
}


