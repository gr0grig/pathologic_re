// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,CreateIntVector/1,HasInvItemProperty/3,GetInvItemProperty/3,Trace/1,ChooseItem/2,SetVariable/2,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,self/1,CreateObjectVector/1,GetVariable/2,FindActor/2,Trigger/2,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetItemCount|A:GetItem|A:GetItemID|W:Microscope|A:add|A:size|W:b6q01 error, no blood to open bull|A:get|A:RemoveItem|W:quest_b6_01|W:sacrifice|W:b6q01|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:oob6Morlok1|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x283
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe4 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x21f vars=object
// @EVENT_26: op=0x2ac vars=string
// @EVENT_5: op=0x2b4 vars=
// @EVENT_6: op=0x2b9 vars=
// @PE: 0x4a,0xce,0xe4,0x2ac,0x3e2,0x3e8,0x3ed,0x3f2,0x3fc,0x408

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_924();
		var_11_bool = var_7_bool == (int)21843;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1000(var_13_object);
		}
		var_16_bool = var_7_bool == (int)21844;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_1000(var_18_object);
		}
		var_20_bool = var_7_bool == (int)21846;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_994();
		}
		var_26_bool = var_7_bool == (int)21856;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1005();
		}
		var_53_bool = var_7_bool == (int)21861;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_1005();
		}
		var_57_bool = var_6_int == (int)21840;
		if(var_57_bool != 0) {
			var_58_bool = 0;
			var_58_bool = 0;
			var_59_bool = 0; var_60_object = Obj();
			var_60_object = var_1_object;
			func_1032(var_60_object);
			if(var_59_bool != 0) {
				var_67_bool = 0; var_68_object = Obj();
				var_68_object = var_1_object;
				func_1010(var_67_bool, var_68_object);
				if(var_67_bool != 0) {
					var_58_bool = 1;
				}
			}
			if(var_58_bool != 0) {
				var_92_string = "";
				func_206(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)520631);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520632, (int)21842, (int)21841);
				@@@var_0_object:AddReply((int)520635, (int)-1, (int)21844);
				return 0;
			}
			var_116_bool = 0;
			var_116_bool = 0;
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_1032(var_118_object);
			if(var_117_bool != 0) {
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_1010(var_119_bool, var_120_object);
				var_121_bool = var_119_bool == 0; //@nz
				if(var_121_bool != 0) {
					var_116_bool = 1;
				}
			}
			if(var_116_bool != 0) {
				var_122_string = "";
				func_206(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)520636);
				@@@var_0_object:ClearReplies();
				var_124_bool = 0; var_125_object = Obj();
				var_125_object = var_1_object;
				func_1020(var_125_object);
				if(var_124_bool != 0) {
					@@@var_0_object:AddReply((int)520637, (int)21847, (int)21846);
				}
				@@@var_0_object:AddReply((int)520693, (int)-1, (int)21903);
				return 0;
			}
			var_136_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520695, (int)-1, (int)21905);
			@@@var_0_object:AddReply((int)520696, (int)-1, (int)21906);
			return 0;
		}
		var_145_bool = var_6_int == (int)21847;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520639, (int)21849, (int)21848);
			return 0;
		}
		var_152_bool = var_6_int == (int)21849;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520640);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520641, (int)21851, (int)21850);
			@@@var_0_object:AddReply((int)520654, (int)21858, (int)21864);
			return 0;
		}
		var_162_bool = var_6_int == (int)21851;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520642);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520643, (int)21853, (int)21852);
			@@@var_0_object:AddReply((int)520653, (int)21858, (int)21862);
			return 0;
		}
		var_172_bool = var_6_int == (int)21853;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520645, (int)21855, (int)21854);
			@@@var_0_object:AddReply((int)520648, (int)21858, (int)21857);
			return 0;
		}
		var_182_bool = var_6_int == (int)21858;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520650, (int)21860, (int)21859);
			return 0;
		}
		var_189_bool = var_6_int == (int)21860;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520652, (int)-1, (int)21861);
			return 0;
		}
		var_196_bool = var_6_int == (int)21855;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520647, (int)-1, (int)21856);
			return 0;
		}
		var_203_bool = var_6_int == (int)21842;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_206(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520634, (int)-1, (int)21843);
			return 0;
		}
		var_3_string = true;
		var_209_bool = 0;
		func_1155(var_209_bool);
		if(var_209_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe5";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_796();
	var_31_int = 0; var_32_object = Obj();
	var_6_object = var_32_object;
	TaskCall(0);
	func_0(var_33_object, var_31_int, var_32_object);
	TaskReturn();
	var_224_bool = var_33_object == (int)1;
	if(var_224_bool != 0) {
		func_947(Obj());
		var_225_object = var_19_object;
		CreateIntVector(var_20_object);
		@@var_6_object:GetItemCount(var_21_int, (int)4);
		var_22_int = 0;

	Label_566:
		var_229_bool = var_22_int < var_21_int;
		if(var_229_bool != 0) {
			@@var_6_object:GetItem(var_23_object, var_22_int, (int)4);
			@@var_23_object:GetItemID(var_24_int);
			HasInvItemProperty(var_25_bool, var_24_int, "Microscope");
			var_232_bool = var_25_bool == 0; //@nz
			if(var_232_bool != 0) {
			} else {
				GetInvItemProperty(var_26_int, var_24_int, "Microscope");
				var_236_bool = var_26_int != (int)2;
				if(var_236_bool != 0) {
					goto Label_591;
				}
				@@var_19_object:add(var_23_object);
				@@var_20_object:add(var_22_int);
				var_23_object = 0;
		}
			@@var_19_object:size(var_21_int);
			var_238_bool = var_21_int == (int)0;
			if(var_238_bool != 0) {
				Trace("b6q01 error, no blood to open bull");
				return 24;
			}
			var_241_bool = var_21_int == (int)1;
			if(var_241_bool != 0) {
				var_27_int = 0;
			} else {
				CreateIntVector(var_28_object);
				ChooseItem(var_19_object, var_28_object);
				@@var_28_object:size(var_21_int);
				var_252_int = var_21_int;
				if(var_252_int != 0) {
					@@var_28_object:get(var_27_int, (int)0);
				} else {
					return 24;
				}
				var_28_object = 0;
			}
			@@var_19_object:get(var_29_object, var_27_int);
			@@var_20_object:get(var_30_int, var_27_int);
			@@var_6_object:RemoveItem(var_30_int, (int)1, (int)4);
			var_244_bool = 0; var_245_string = ""; var_246_string = "";
			func_958(var_244_bool, "quest_b6_01", "sacrifice");
			SetVariable("b6q01", (int)5);
			var_29_object = 0;
			var_20_object = 0;
			var_19_object = 0;
	}
		return 24;
	}
Label_591:
	var_22_int = var_22_int + (int)1;
	goto Label_566;
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_664(var_6_string);
	}
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_713(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_931(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_644:
	var_8_bool = 0;
	func_801(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_644;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_715();
	goto Label_644;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_0_object = var_32_object;
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0;
	var_32_object = var_43_object;
	func_806(var_42_bool, var_43_object, (float)110.0);
	var_89_bool = var_42_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	CreateDialog(var_38_object);
	var_90_int = 0;
	func_1149(var_90_int);
	@@var_38_object:SetNPCName(var_90_int);
	var_91_int = 0;
	func_1147(var_91_int);
	@@var_38_object:SetNPCDescription(var_91_int);
	var_92_string = "";
	func_1151(var_92_string);
	@@var_38_object:SetPhoto(var_92_string);
	var_93_string = "";
	func_1153(var_93_string);
	@@var_38_object:SetPhoto2(var_93_string);
	var_94_int = 0;
	func_1130(var_94_int);
	@@var_38_object:SetPlayerName(var_94_int);
	IsOverrideActive(var_39_bool);
	var_102_bool = var_39_bool;
	if(var_102_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	DoDialog(var_38_object);
	var_103_object = Obj(); var_104_object = Obj();
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(1);
	func_74(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	@@var_38_object:IsDialogEnd(var_41_bool);
	
Label_56:
	var_214_bool = var_41_bool == 0; //@nz
	if(var_214_bool != 0) {
		sync();
		@@var_38_object:IsDialogEnd(var_41_bool);
		goto Label_56;
	}
	var_32_object = Obj();
	func_875();
	StopDialog(var_38_object);
	@@var_38_object:GetReturnValue((int)-1);
	var_40_int = var_31_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1153(var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_1155(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_1032(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_953(var_113_int, "b6q01");
	var_118_bool = var_113_int == (int)4;
	if(var_118_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_909(var_148_string, var_149_bool)
{
	var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_float = 0; var_157_float = 0;
	lshHasAnimation(var_155_bool, var_148_string);
	var_158_bool = var_155_bool;
	if(var_158_bool != 0) {
		lshGetAnimTimes(var_148_string, var_156_float, var_157_float);
		lshPlayAnimation(var_156_float, var_157_float, var_149_bool);
	} else {
		var_160_int = "Can't find lsh animation : " + var_148_string;
		Trace(var_160_int);
	}
	return 6;
	
}


func_893(var_170_string)
{
	var_171_bool = 0; var_172_float = 0; var_173_float = 0; var_174_bool = 0; var_175_float = 0; var_176_float = 0;
	lshHasAnimation(var_174_bool, var_170_string);
	var_177_bool = var_174_bool;
	if(var_177_bool != 0) {
		lshGetAnimTimes(var_170_string, var_175_float, var_176_float);
		lshPlayAnimation(var_175_float, var_176_float, (bool)0);
	} else {
		var_180_int = "Can't find lsh animation : " + var_170_string;
		Trace(var_180_int);
	}
	return 6;
	
}


func_1044(var_121_bool, var_122_object)
{
	var_123_int = 0; var_124_int = 0; var_125_object = Obj(); var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_bool = 0; var_134_int = 0;
	@@var_122_object:GetItemCount(var_129_int, (int)4);
	var_130_int = 0;
	
Label_1049:
	var_136_bool = var_130_int < var_129_int;
	if(var_136_bool != 0) {
		@@var_122_object:GetItem(var_131_object, var_130_int, (int)4);
		@@var_131_object:GetItemID(var_132_int);
		HasInvItemProperty(var_133_bool, var_132_int, "Microscope");
		var_139_bool = var_133_bool == 0; //@nz
		if(var_139_bool != 0) {
		} else {
			GetInvItemProperty(var_134_int, var_132_int, "Microscope");
			var_143_bool = var_134_int == (int)2;
			if(var_143_bool != 0) {
				var_121_bool = 1;
				return 12;
			}
			var_131_object = 0;
	}
		var_121_bool = 0;
		var_130_int = var_130_int + (int)1;
		goto Label_1049;
	}
	return 12;
	
}


func_664(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_713(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_931(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_794(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_796()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_924()
{
	var_9_bool = 0;
	func_1155(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_801(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_931(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_806(var_42_bool, var_43_object, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0;
	@@var_43_object:GetPosition(var_55_cvector);
	@@var_43_object:GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	var_63_float = var_63_float + var_54_float;
	SetByIndex(var_55_cvector, 1) = var_63_float;
	GetPosition(var_56_cvector);
	GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	var_64_float = var_64_float + var_54_float;
	SetByIndex(var_56_cvector, 1) = var_64_float;
	var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_66_int = var_57_cvector | var_57_cvector;
	var_67_float = sqrt(var_66_int);
	var_57_cvector = var_57_cvector / var_67_float;
	var_58_cvector = -var_57_cvector;
	var_68_float = var_57_cvector * var_44_float;
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_70_cvector = var_58_cvector ^ CVector(0.0, 1.0, 0.0);
	func_937(var_69_cvector, var_70_cvector);
	var_78_float = var_69_cvector * (int)25;
	var_79_int = var_68_float + var_78_float;
	var_59_cvector = var_79_int - CVector(0.0, 10.0, 0.0);
	var_60_cvector = var_56_cvector + var_59_cvector;
	IsOverrideActive(var_61_bool);
	var_81_bool = var_61_bool;
	if(var_81_bool != 0) {
		var_42_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_60_cvector, var_58_cvector, (bool)1);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	Rotate(var_83_float, var_84_float);
	var_85_bool = 0;
	func_1155(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		HasAnimationTrack(var_62_bool, "head");
		var_87_bool = var_62_bool;
		if(var_87_bool == 0) goto Label_869;
		LookAsyncCamera("head");
	}
Label_869:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_42_bool = 1;
	return 18;
	
}


func_937(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0;
	var_74_int = var_70_cvector | var_70_cvector;
	var_73_float = sqrt(var_74_int);
	var_75_float = 9.999999974752427e-07;
	var_76_bool = var_73_float < var_75_float;
	if(var_76_bool != 0) {
		var_69_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_69_cvector = var_70_cvector / var_73_float;
	return 2;
}


func_947(var_225_object)
{
	var_226_object = Obj(); var_227_object = Obj();
	CreateObjectVector(var_227_object);
	var_227_object = var_225_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1076()
{
	var_29_object = Obj(); var_30_object = Obj();
	CreateDiaryEntry(var_30_object, (int)365, (int)1, (int)525665);
	var_34_bool = 0; var_35_object = Obj(); var_36_int = 0;
	var_30_object = var_35_object;
	func_1102(var_34_bool, var_35_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_953(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
	return 2;
}


func_958(var_244_bool, var_245_string, var_246_string)
{
	var_247_object = Obj(); var_248_object = Obj();
	FindActor(var_248_object, var_245_string);
	var_249_bool = var_248_object == 0; //@ne
	if(var_249_bool != 0) {
		var_244_bool = 0;
		return 2;
	}
	Trigger(var_248_object, var_246_string);
	var_244_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1089(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj();
	GetDiaryRoot(var_45_object);
	var_46_bool = var_45_object == 0; //@nz
	if(var_46_bool != 0) {
		Trace("Can't retrieve diary root");
		var_43_object = 0;
		return 2;
	}
	var_45_object = var_43_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_713(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_103_object, var_104_object)
{
	var_0_object = var_104_object;
	var_1_object = var_103_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_110_bool = 0;
		var_110_bool = 0;
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_1032(var_112_object);
		if(var_111_bool != 0) {
			var_119_bool = 0; var_120_object = Obj();
			var_120_object = var_1_object;
			func_1010(var_119_bool, var_120_object);
			if(var_119_bool != 0) {
				var_110_bool = 1;
			}
		}
		if(var_110_bool != 0) {
			var_144_string = "";
			func_206(var_104_object, "Neutral");
			@@@var_0_object:SetMessage((int)520631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520632, (int)21842, (int)21841);
			@@@var_0_object:AddReply((int)520635, (int)-1, (int)21844);
		} else {
				var_186_bool = 0;
				var_186_bool = 0;
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_1032(var_188_object);
				if(var_187_bool != 0) {
					var_189_bool = 0; var_190_object = Obj();
					var_190_object = var_1_object;
					func_1010(var_189_bool, var_190_object);
					var_191_bool = var_189_bool == 0; //@nz
					if(var_191_bool != 0) {
						var_186_bool = 1;
					}
				}
				if(var_186_bool != 0) {
					var_192_string = "";
					func_206(var_104_object, "Neutral");
					@@@var_0_object:SetMessage((int)520636);
					@@@var_0_object:ClearReplies();
					var_194_bool = 0; var_195_object = Obj();
					var_195_object = var_1_object;
					func_1020(var_195_object);
					if(var_194_bool != 0) {
						@@@var_0_object:AddReply((int)520637, (int)21847, (int)21846);
					}
					@@@var_0_object:AddReply((int)520693, (int)-1, (int)21903);
					goto Label_176;
				}
				var_206_string = "";
				func_206(var_104_object, "Neutral");
				@@@var_0_object:SetMessage((int)520694);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520695, (int)-1, (int)21905);
				@@@var_0_object:AddReply((int)520696, (int)-1, (int)21906);
				goto Label_176;
		}
	}
Label_176:
	var_168_bool = 0;
	func_1155(var_168_bool);
	if(var_168_bool != 0) {

	Label_180:
		lshWaitForAnimEnd();
		var_169_string = var_3_string;
		if(var_169_string != 0) {
		} else {
			var_170_string = "";
			var_170_string = var_2_object;
			func_893(var_170_string);
			goto Label_180;
	}
		PlayAnimation("all", "idle");

	Label_195:
		WaitForAnimEnd();
		var_183_string = var_3_string;
		if(var_183_string != 0) {
			goto Label_205;
		}
		PlayAnimation("all", "idle");
		goto Label_195;

	}
	goto Label_205;
	
Label_205:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_715()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_801(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_977((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_729:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_801(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_762;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_970(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_791;
					}
					goto Label_780;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_780;
				goto Label_791;
		}
		Label_780:
			var_56_bool = 0;
			func_794(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_791;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_729;

		}
	}
Label_791:
	ResetAAS();
	return 14;
	
}


func_970(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_206(var_2_object, var_144_string)
{
	var_145_bool = 0;
	func_1155(var_145_bool);
	var_146_bool = var_145_bool == 0; //@nz
	if(var_146_bool != 0) {
		return 0;
	}
	var_147_bool = var_144_string == var_2_object;
	if(var_147_bool != 0) {
		return 0;
	}
	var_148_string = ""; var_149_bool = 0;
	var_144_string = var_148_string;
	var_151_bool = var_144_string == "";
	if(var_151_bool != 0) {
		var_149_bool = 0;
	} else {
		var_149_bool = 1;
	}
	func_909(var_148_string, var_149_bool);
	var_2_object = var_144_string;
	return 0;
	
}


func_1102(var_34_bool, var_35_object, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0;
	func_1089(Obj());
	var_43_object = var_40_object;
	@@var_40_object:Find(var_36_int, var_41_object);
	var_48_bool = var_41_object == 0; //@nz
	if(var_48_bool != 0) {
		var_50_int = "Can't find diary parent with id: " + var_36_int;
		Trace(var_50_int);
		var_34_bool = 0;
		return 6;
	}
	@@var_41_object:AddChild(var_35_object);
	SendWorldWndMessage((int)7);
	@@var_35_object:GetCategory(var_42_int);
	SetDiarySection(var_42_int);
	var_34_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_977(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_979:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_970(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_979;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_994()
{
	SetVariable("oob6Morlok1", (int)1);
	return 0;
}


func_1000(var_13_object)
{
	@@var_13_object:SetReturnValue((int)1);
	return 0;
}


func_1130(var_94_int)
{
	var_95_int = 0; var_96_int = 0;
	GetVariable("branch", var_96_int);
	var_99_bool = var_96_int == (int)0;
	if(var_99_bool != 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x479";
	}
	var_101_bool = var_96_int == (int)1;
	if(var_101_bool != 0) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
	return 2;
}


func_875()
{
	var_216_bool = 0; var_217_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_219_bool = 0;
	func_1155(var_219_bool);
	if(var_219_bool != 0) {
	} else {
		HasAnimationTrack(var_217_bool, "head");
		var_221_bool = var_217_bool;
		if(var_221_bool == 0) goto Label_892;
		UnlookAsync("head");
	}
Label_892:
	return 2;
	
}


func_1005()
{
	func_1076();
	return 0;
}


func_1010(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj();
	var_120_object = var_122_object;
	func_1044(var_121_bool, var_122_object);
	if(var_121_bool != 0) {
		var_119_bool = 1;
		return 0;
	}
	var_119_bool = 0;
	return 0;
}


func_1147(var_91_int)
{
	var_91_int = 521048;
	return 0;
}


func_1020(var_194_bool)
{
	var_196_int = 0; var_197_string = "";
	func_953(var_196_int, "oob6Morlok1");
	var_199_bool = var_196_int == (int)0;
	if(var_199_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_1149(var_90_int)
{
	var_90_int = 521047;
	return 0;
}


func_1151(var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png";
	return 0;
}


