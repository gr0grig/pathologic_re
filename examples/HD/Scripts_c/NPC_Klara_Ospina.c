// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_37_cvector == 26622) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3350();
			}
			if(var_37_cvector == 44528) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_3451();
			}
			if(var_37_cvector == 44526) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_3451();
			}
			if(var_37_cvector == 26641) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_3359();
			}
			if(var_37_cvector == 44534) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_3359();
			}
			if(var_37_cvector == 44498) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3445();
			}
			if(var_36_bool == 26619) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525251); //@t
				var_0_object->ClearReplies(); //@t
				bool var_131_bool;
				func_3460(var_1_object);
				if(var_131_bool != 0)
					var_0_object->AddReply(525252, 44489, 26620); //@t
				bool var_142_bool;
				func_3472(var_1_object);
				if(var_142_bool != 0)
					var_0_object->AddReply(525263, 26632, 26631); //@t
				bool var_151_bool;
				func_3556(var_1_object);
				if(var_151_bool != 0)
					var_0_object->AddReply(542179, 44499, 44498); //@t
				var_0_object->AddReply(525255, -1, 26623); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0xb8";
			EMIT "Pop(1)";
			EMIT "Push((int) 525280)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
			EMIT "Pop(0)";
			EMIT "Push((int) 525281)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 26649)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Push((int) 528809)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 30223)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_36_bool == 44499) {
				func_184(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(542180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542181, 44502, 44500); //@t
				var_0_object->AddReply(542182, 44502, 44501); //@t
				return 0;
			}
			if(var_36_bool == 44502) {
				func_184(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(542183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542184, -1, 44504); //@t
				var_0_object->AddReply(542185, -1, 44505); //@t
				return 0;
			}
			if(var_36_bool == 26632) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542194, 44520, 44518); //@t
				var_0_object->AddReply(542195, 44520, 44519); //@t
				return 0;
			}
			if(var_36_bool == 44520) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525265, 44524, 26633); //@t
				var_0_object->AddReply(542197, 26634, 44522); //@t
				var_0_object->AddReply(542198, 44524, 44523); //@t
				return 0;
			}
			if(var_36_bool == 26634) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529215, 30668, 30667); //@t
				var_0_object->AddReply(542204, 30670, 44530); //@t
				return 0;
			}
			if(var_36_bool == 30668) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529217, 30670, 30669); //@t
				return 0;
			}
			if(var_36_bool == 30670) {
				func_184(var_37_cvector, "Fear");
				var_0_object->SetMessage(529218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525267, 26636, 26635); //@t
				var_0_object->AddReply(542205, 26638, 44532); //@t
				return 0;
			}
			if(var_36_bool == 26636) {
				func_184(var_37_cvector, "Fear");
				var_0_object->SetMessage(525268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525269, 26638, 26637); //@t
				return 0;
			}
			if(var_36_bool == 26638) {
				func_184(var_37_cvector, "Strange");
				var_0_object->SetMessage(525270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525271, 26640, 26639); //@t
				var_0_object->AddReply(542206, -1, 44534); //@t
				return 0;
			}
			if(var_36_bool == 26640) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525273, -1, 26641); //@t
				return 0;
			}
			if(var_36_bool == 44524) {
				func_184(var_37_cvector, "Grin");
				var_0_object->SetMessage(542199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542200, 44527, 44525); //@t
				var_0_object->AddReply(542201, -1, 44526); //@t
				return 0;
			}
			if(var_36_bool == 44527) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542202); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542203, -1, 44528); //@t
				return 0;
			}
			if(var_36_bool == 44489) {
				func_184(var_37_cvector, "Strange");
				var_0_object->SetMessage(542172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542173, 44491, 44490); //@t
				var_0_object->AddReply(542186, 44507, 44506); //@t
				return 0;
			}
			if(var_36_bool == 44507) {
				func_184(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(542187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542188, 26621, 44508); //@t
				var_0_object->AddReply(542190, 26621, 44510); //@t
				return 0;
			}
			if(var_36_bool == 44491) {
				func_184(var_37_cvector, "Strange");
				var_0_object->SetMessage(542174); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542175, 26621, 44492); //@t
				var_0_object->AddReply(542189, 26621, 44509); //@t
				return 0;
			}
			if(var_36_bool == 26621) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529213, 30666, 30665); //@t
				var_0_object->AddReply(542191, 44515, 44514); //@t
				return 0;
			}
			if(var_36_bool == 44515) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542193, 30666, 44516); //@t
				return 0;
			}
			if(var_36_bool == 30666) {
				func_184(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525254, -1, 26622); //@t
				return 0;
			}
			var_3_string = true;
			bool var_328_bool;
			func_3348(var_328_bool);
			if(var_328_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcf";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_36_bool == 26875) {
				func_869(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525520, 30224, 26876); //@t
				var_0_object->AddReply(528815, 30230, 30229); //@t
				return 0;
			}
			if(var_36_bool == 30230) {
				func_869(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528817, 30224, 30231); //@t
				return 0;
			}
			if(var_36_bool == 30224) {
				func_869(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528810); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528811, 30226, 30225); //@t
				var_0_object->AddReply(528818, 30226, 30233); //@t
				return 0;
			}
			if(var_36_bool == 30226) {
				func_869(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528813, -1, 30227); //@t
				var_0_object->AddReply(528814, -1, 30228); //@t
				return 0;
			}
			var_3_string = true;
			bool var_93_bool;
			func_3348(var_93_bool);
			if(var_93_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x37c";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_37_cvector == 27378) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3368();
			}
			if(var_37_cvector == 27380) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3374();
			}
			if(var_37_cvector == 43716) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_3374();
			}
			if(var_36_bool == 27377) {
				func_1159(var_37_cvector, "Fear");
				var_0_object->SetMessage(526091); //@t
				var_0_object->ClearReplies(); //@t
				bool var_97_bool = false;
				bool var_98_bool = false;
				bool var_99_bool;
				func_3484(var_1_object);
				if(var_99_bool != 0) {
					bool var_107_bool;
					func_3496(var_1_object);
					if(var_107_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0) {
					bool var_113_bool;
					func_3508(var_1_object);
					if(var_113_bool != 0)
						var_97_bool = true;
				}
				if(var_97_bool != 0)
					var_0_object->AddReply(526092, 27379, 27378); //@t
				var_0_object->AddReply(526095, -1, 27381); //@t
				return 0;
			}
			if(var_36_bool == 27379) {
				func_1159(var_37_cvector, "Grin");
				var_0_object->SetMessage(526093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528804, 30219, 30218); //@t
				return 0;
			}
			if(var_36_bool == 30219) {
				func_1159(var_37_cvector, "Grin");
				var_0_object->SetMessage(528805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528806, 30222, 30220); //@t
				var_0_object->AddReply(528807, 30222, 30221); //@t
				return 0;
			}
			if(var_36_bool == 30222) {
				func_1159(var_37_cvector, "Strange");
				var_0_object->SetMessage(528808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526094, -1, 27380); //@t
				var_0_object->AddReply(541550, -1, 43716); //@t
				return 0;
			}
			var_3_string = true;
			bool var_152_bool;
			func_3348(var_152_bool);
			if(var_152_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x49e";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_37_cvector == 30428) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3379();
			}
			if(var_37_cvector == 30433) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_3379();
			}
			if(var_37_cvector == 27723) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_3379();
			}
			if(var_36_bool == 27716) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526441); //@t
				var_0_object->ClearReplies(); //@t
				bool var_97_bool;
				func_3520(var_1_object);
				if(var_97_bool != 0)
					var_0_object->AddReply(526442, 27718, 27717); //@t
				var_0_object->AddReply(526449, -1, 27724); //@t
				var_0_object->AddReply(528982, -1, 30419); //@t
				return 0;
			}
			if(var_36_bool == 27718) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528983, 30421, 30420); //@t
				return 0;
			}
			if(var_36_bool == 30421) {
				func_1483(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(528984); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528985, 30423, 30422); //@t
				return 0;
			}
			if(var_36_bool == 30423) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528986); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526444, 27720, 27719); //@t
				return 0;
			}
			if(var_36_bool == 27720) {
				func_1483(var_37_cvector, "Strange");
				var_0_object->SetMessage(526445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526446, 27722, 27721); //@t
				return 0;
			}
			if(var_36_bool == 27722) {
				func_1483(var_37_cvector, "Strange");
				var_0_object->SetMessage(526447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528987, 30425, 30424); //@t
				var_0_object->AddReply(526448, -1, 27723); //@t
				return 0;
			}
			if(var_36_bool == 30425) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528989, 30427, 30426); //@t
				return 0;
			}
			if(var_36_bool == 30427) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528991, -1, 30428); //@t
				var_0_object->AddReply(528992, 30430, 30429); //@t
				return 0;
			}
			if(var_36_bool == 30430) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528994, 30432, 30431); //@t
				return 0;
			}
			if(var_36_bool == 30432) {
				func_1483(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528996, -1, 30433); //@t
				return 0;
			}
			var_3_string = true;
			bool var_183_bool;
			func_3348(var_183_bool);
			if(var_183_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5e2";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_37_cvector == 28960) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3439();
			}
			if(var_37_cvector == 28972) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3388();
			}
			if(var_36_bool == 28958) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527613); //@t
				var_0_object->ClearReplies(); //@t
				bool var_150_bool = false;
				bool var_151_bool;
				func_3544(var_1_object);
				if(var_151_bool != 0) {
					bool var_159_bool;
					func_3532(var_1_object);
					if(var_159_bool != 0)
						var_150_bool = true;
				}
				if(var_150_bool != 0)
					var_0_object->AddReply(527615, 28961, 28960); //@t
				var_0_object->AddReply(527614, -1, 28959); //@t
				return 0;
			}
			if(var_36_bool == 28961) {
				func_1906(var_37_cvector, "Strange");
				var_0_object->SetMessage(527616); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527631, 28978, 28977); //@t
				return 0;
			}
			if(var_36_bool == 28978) {
				func_1906(var_37_cvector, "Strange");
				var_0_object->SetMessage(527632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527617, 28963, 28962); //@t
				var_0_object->AddReply(527628, 28974, 28973); //@t
				return 0;
			}
			if(var_36_bool == 28974) {
				func_1906(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(527629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527633, 28980, 28979); //@t
				return 0;
			}
			if(var_36_bool == 28980) {
				func_1906(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(527634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527630, 28965, 28975); //@t
				return 0;
			}
			if(var_36_bool == 28963) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527619, 28965, 28964); //@t
				return 0;
			}
			if(var_36_bool == 28965) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527621, 28967, 28966); //@t
				return 0;
			}
			if(var_36_bool == 28967) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527622); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527623, 28969, 28968); //@t
				return 0;
			}
			if(var_36_bool == 28969) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527625, 28971, 28970); //@t
				var_0_object->AddReply(527635, 28982, 28981); //@t
				return 0;
			}
			if(var_36_bool == 28982) {
				func_1906(var_37_cvector, "Grimacing");
				var_0_object->SetMessage(527636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527637, 28971, 28983); //@t
				return 0;
			}
			if(var_36_bool == 28971) {
				func_1906(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527627, -1, 28972); //@t
				return 0;
			}
			var_3_string = true;
			bool var_247_bool;
			func_3348(var_247_bool);
			if(var_247_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x789";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_36_bool == 41240) {
				func_2334(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542655, 45059, 45057); //@t
				var_0_object->AddReply(539298, -1, 41241); //@t
				var_0_object->AddReply(542656, -1, 45058); //@t
				return 0;
			}
			if(var_36_bool == 45059) {
				func_2334(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542657); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542658, 45061, 45060); //@t
				var_0_object->AddReply(542662, 45063, 45064); //@t
				return 0;
			}
			if(var_36_bool == 45061) {
				func_2334(var_37_cvector, "Strange");
				var_0_object->SetMessage(542659); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542660, 45063, 45062); //@t
				return 0;
			}
			if(var_36_bool == 45063) {
				func_2334(var_37_cvector, "Strange");
				var_0_object->SetMessage(542661); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542663, 45067, 45065); //@t
				var_0_object->AddReply(542667, 45071, 45070); //@t
				return 0;
			}
			if(var_36_bool == 45071) {
				func_2334(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542669, 45067, 45072); //@t
				return 0;
			}
			if(var_36_bool == 45067) {
				func_2334(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542665, -1, 45068); //@t
				var_0_object->AddReply(542666, -1, 45069); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_3348(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x935";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3273();
			if(var_36_int == 42548) {
				func_2647(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3348(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa6e";
	
	}

}


maintask task_14
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		var_36_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2718(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2783();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2997(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2752(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2732(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3280(var_82_object);
					var_82_object = var_81_object;
					func_3147(var_80_bool, var_81_object);
				}
			} else {
				func_2747(var_36_int);
				func_2774();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2965();
		func_2783();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_2783();
		func_3227("Neutral");
		func_2774();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2774();
		else
			func_3227("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2965();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2988(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3769(var_54_object);
			func_3227("Neutral");
			func_2783();
			func_2774();
		}
	}

}


void func_0(object var_0_object, int var_286_int, object var_287_object)
{
	var_0_object = var_287_object;
	bool var_297_bool; object var_298_object;
	var_287_object = var_298_object;
	func_3002(var_297_bool, var_298_object, 70.0);
	if(!var_297_bool) { //@nz
		var_286_int = -2;
		return 8;
	}
	object var_293_object;
	@CreateDialog(var_293_object);
	int var_301_int;
	func_3342(var_301_int);
	var_293_object->SetNPCName(var_301_int);
	int var_302_int;
	func_3340(var_302_int);
	var_293_object->SetNPCDescription(var_302_int);
	string var_303_string;
	func_3344(var_303_string);
	var_293_object->SetPhoto(var_303_string);
	string var_304_string;
	func_3346(var_304_string);
	var_293_object->SetPhoto2(var_304_string);
	int var_305_int;
	func_3752(var_305_int);
	var_293_object->SetPlayerName(var_305_int);
	bool var_294_bool;
	@IsOverrideActive(var_294_bool);
	if(var_294_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	@DoDialog(var_293_object);
	bool var_307_bool; object var_308_object;
	object var_309_object;
	func_3280(var_309_object);
	var_309_object = var_308_object;
	func_3089(var_307_bool, var_308_object);
	object var_310_object; object var_311_object;
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(1);
	func_81(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	bool var_296_bool;
	var_293_object->IsDialogEnd(var_296_bool);
	
	for(;;) {
		var_366_bool = !var_296_bool; //@nz
		if(var_366_bool == 0) goto Label_70;
		@sync();
		var_293_object->IsDialogEnd(var_296_bool);
	}
	
Label_70:
	object var_367_object;
	var_287_object = var_367_object;
	func_3071();
	@StopDialog(var_293_object);
	var_293_object->GetReturnValue(-1);
	int var_295_int = var_286_int;
}
EMIT "Stack[-4] = 0";


void func_3594(void)
{
	object var_103_object;
	@CreateDiaryEntry(var_103_object, 496, 1, 528063);
	bool var_107_bool; object var_108_object;
	var_103_object = var_108_object;
	func_3724(var_107_bool, var_108_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3340(int var_117_int)
{
	var_117_int = 515549;
}


void func_3342(int var_116_int)
{
	var_116_int = 502874;
}


void func_3344(string var_118_string)
{
	var_118_string = "ui/NPC_Ospina.png";
}


void func_3089(bool var_129_bool, object var_130_object)
{
	int var_136_int; int var_137_int;
	@GetVariable("voice_common", var_136_int);
	if(var_136_int != 0) {
		bool var_140_bool; object var_141_object;
		var_130_object = var_141_object;
		func_3147(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_171_bool; object var_172_object;
			var_130_object = var_172_object;
			func_3184(var_171_bool, var_172_object);
			if(!var_171_bool) { //@nz
				var_129_bool = false;
				return 4;
			}
		}
		@irand(var_137_int, 2);
		if(var_137_int != 0)
			@SetVariable("voice_common", ((var_136_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_216_bool; object var_217_object;
		var_130_object = var_217_object;
		func_3184(var_216_bool, var_217_object);
		if(!var_216_bool) { //@nz
			bool var_219_bool; object var_220_object;
			var_130_object = var_220_object;
			func_3147(var_219_bool, var_220_object);
			if(!var_219_bool) { //@nz
				var_129_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3145;
	
Label_3145:
	var_129_bool = true;
	
}


void func_3346(string var_119_string)
{
	var_119_string = "ui/NPC_Ospina_b.png";
}


void func_3348(bool var_111_bool)
{
	var_111_bool = true;
}


// @pe
void func_3350(void)
{
	@SetVariable("k2q01", 4);
	func_3672();
}


void func_3607(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 495, 1, 528062);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_3724(var_97_bool, var_98_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2589(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_669_object, object var_670_object)
{
	var_0_object = var_670_object;
	var_1_object = var_669_object;
	var_3_string = false;
	if(1 != 0) {
		func_2647(var_670_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2617;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa21";
	}
Label_2617:
	bool var_691_bool;
	func_3348(var_691_bool);
	if(var_691_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2646;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2646:
		return 0;

	}
	
}


// @pe
void func_2334(object var_2_object, string var_617_string)
{
	bool var_618_bool;
	func_3348(var_618_bool);
	if(!var_618_bool) //@nz
		return 0;
	if(var_617_string == var_2_object)
		return 0;
	string var_621_string; bool var_622_bool;
	var_617_string = var_621_string;
	if(var_617_string == "")
		var_622_bool = false;
	else
		var_622_bool = true;
	func_3243(var_621_string, var_622_bool);
	var_2_object = var_617_string;
	
}


// @pe
void func_3359(void)
{
	@SetVariable("k2q01", 6);
	func_3659();
}


void func_3620(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 494, 1, 528061);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_3724(var_87_bool, var_88_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3368(void)
{
	@SetVariable("ook6Ospina1", 1);
}


// @pe
void func_1834(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_539_object, object var_540_object)
{
	var_0_object = var_540_object;
	var_1_object = var_539_object;
	var_3_string = false;
	if(1 != 0) {
		func_1906(var_540_object, "Neutral");
		var_0_object->SetMessage(527613); //@t
		var_0_object->ClearReplies(); //@t
		bool var_555_bool = false;
		bool var_556_bool;
		func_3544(var_1_object);
		if(var_556_bool != 0) {
			bool var_562_bool;
			func_3532(var_1_object);
			if(var_562_bool != 0)
				var_555_bool = true;
		}
		if(var_555_bool != 0)
			var_0_object->AddReply(527615, 28961, 28960); //@t
		var_0_object->AddReply(527614, -1, 28959); //@t
		goto Label_1876;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x72e";
	}
Label_1876:
	bool var_574_bool;
	func_3348(var_574_bool);
	if(var_574_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1905;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1905:
		return 0;

	}
	
}


// @pe
void func_811(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_224_object, object var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if(1 != 0) {
		func_869(var_225_object, "Neutral");
		var_0_object->SetMessage(525519); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525520, 30224, 26876); //@t
		var_0_object->AddReply(528815, 30230, 30229); //@t
		goto Label_839;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x32f";
	}
Label_839:
	bool var_255_bool;
	func_3348(var_255_bool);
	if(var_255_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_868;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_868:
		return 0;

	}
	
}


// @pe
void func_3374(void)
{
	func_3685();
}


void func_3633(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 493, 1, 528060);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_3724(var_62_bool, var_63_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3379(void)
{
	@SetVariable("k8q01", 6);
	func_3698();
}


// @pe
void func_1078(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_394_object, object var_395_object)
{
	var_0_object = var_395_object;
	var_1_object = var_394_object;
	var_3_string = false;
	if(1 != 0) {
		func_1159(var_395_object, "Fear");
		var_0_object->SetMessage(526091); //@t
		var_0_object->ClearReplies(); //@t
		bool var_410_bool = false;
		bool var_411_bool = false;
		bool var_412_bool;
		func_3484(var_1_object);
		if(var_412_bool != 0) {
			bool var_418_bool;
			func_3496(var_1_object);
			if(var_418_bool != 0)
				var_411_bool = true;
		}
		if(var_411_bool != 0) {
			bool var_424_bool;
			func_3508(var_1_object);
			if(var_424_bool != 0)
				var_410_bool = true;
		}
		if(var_410_bool != 0)
			var_0_object->AddReply(526092, 27379, 27378); //@t
		var_0_object->AddReply(526095, -1, 27381); //@t
		goto Label_1129;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43a";
	}
Label_1129:
	bool var_436_bool;
	func_3348(var_436_bool);
	if(var_436_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1158;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1158:
		return 0;

	}
	
}


void func_1334(object var_0_object, int var_448_int, object var_449_object)
{
	var_0_object = var_449_object;
	bool var_459_bool; object var_460_object;
	var_449_object = var_460_object;
	func_3002(var_459_bool, var_460_object, 70.0);
	if(!var_459_bool) { //@nz
		var_448_int = -2;
		return 8;
	}
	object var_455_object;
	@CreateDialog(var_455_object);
	int var_463_int;
	func_3342(var_463_int);
	var_455_object->SetNPCName(var_463_int);
	int var_464_int;
	func_3340(var_464_int);
	var_455_object->SetNPCDescription(var_464_int);
	string var_465_string;
	func_3344(var_465_string);
	var_455_object->SetPhoto(var_465_string);
	string var_466_string;
	func_3346(var_466_string);
	var_455_object->SetPhoto2(var_466_string);
	int var_467_int;
	func_3752(var_467_int);
	var_455_object->SetPlayerName(var_467_int);
	bool var_456_bool;
	@IsOverrideActive(var_456_bool);
	if(var_456_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	@DoDialog(var_455_object);
	bool var_469_bool; object var_470_object;
	object var_471_object;
	func_3280(var_471_object);
	var_471_object = var_470_object;
	func_3089(var_469_bool, var_470_object);
	object var_472_object; object var_473_object;
	var_449_object = var_472_object;
	var_455_object = var_473_object;
	TaskCall(7);
	func_1415(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object);
	TaskReturn();
	bool var_458_bool;
	var_455_object->IsDialogEnd(var_458_bool);
	
	for(;;) {
		var_511_bool = !var_458_bool; //@nz
		if(var_511_bool == 0) goto Label_1404;
		@sync();
		var_455_object->IsDialogEnd(var_458_bool);
	}
	
Label_1404:
	object var_512_object;
	var_449_object = var_512_object;
	func_3071();
	@StopDialog(var_455_object);
	var_455_object->GetReturnValue(-1);
	int var_457_int = var_448_int;
}
EMIT "Stack[-4] = 0";


void func_3388(void)
{
	int var_51_int;
	@GetVariable("k11q01SoulCount", var_51_int);
	var_51_int += 1;
	@SetVariable("k11q01SoulCount", var_51_int);
	if(var_51_int == 2) {
		func_3633();
	} else if(var_51_int == 3) {
			func_3620();
	}

	for(;;) {
		return 2;

	}
	
	if(var_51_int == 4) {
		func_3607();
	} else if(var_51_int == 5) {
		func_3594();
	} else if(var_51_int == 6) {
		func_3581();
	} else if(var_51_int == 7) {
		func_3568();
	}
}


void func_3646(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 790, 1, 542526);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_3724(var_80_bool, var_81_object, 461);
}
EMIT "Stack[-1] = 0";


void func_3147(bool var_140_bool, object var_141_object)
{
	string var_147_string; bool var_149_bool; int var_150_int; string var_151_string;
	var_147_string = "c";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_163_bool; string var_164_string;
		var_151_string = var_164_string;
		func_3258(var_163_bool, var_164_string);
		var_163_bool = var_140_bool;
		return 10;

	}
}


void func_3659(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 467, 1, 527783);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_3724(var_98_bool, var_99_object, 461);
}
EMIT "Stack[-1] = 0";


void func_2894(void)
{
	bool var_49_bool; int var_50_int; int var_51_int; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_2997(var_53_bool);
	if(!var_53_bool) //@nz
		return 12;
	int var_55_int;
	func_3323(var_55_int);
	int var_47_int;
	var_55_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_68_bool = false;
		if(var_48_int < 5) {
			bool var_71_bool;
			func_2997(var_71_bool);
			if(var_71_bool != 0)
				var_68_bool = true;
		}
		if(var_68_bool != 0) {
			if(!var_47_int) { //@nz
				@Sleep(3, var_49_bool);
				if(!var_49_bool) { //@nz
				} else {
			} else {
			@irand(var_50_int, var_47_int);
			@irand(var_51_int, 5);
			if(var_51_int != 0)
				var_50_int = 0;
			string var_82_string; int var_83_int;
			var_50_int = var_83_int;
			func_3316(var_82_string, var_83_int);
			@PlayAnimation("all", var_82_string);
			@WaitForAnimEnd(var_52_bool);
			var_84_bool = !var_52_bool; //@nz
			if(var_84_bool == 0) goto Label_2949;
			goto Label_2960;
			}
				Label_2949:
					bool var_75_bool;
					func_2963(var_75_bool);
					var_76_bool = !var_75_bool; //@nz
					if(var_76_bool == 0) goto Label_2955;
			}
		}
	Label_2960:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2955:
		@ResetAAS();
		var_48_int += 1;
	}
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_310_object, object var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if(1 != 0) {
		func_184(var_311_object, "Neutral");
		var_0_object->SetMessage(525251); //@t
		var_0_object->ClearReplies(); //@t
		bool var_326_bool;
		func_3460(var_1_object);
		if(var_326_bool != 0)
			var_0_object->AddReply(525252, 44489, 26620); //@t
		bool var_337_bool;
		func_3472(var_1_object);
		if(var_337_bool != 0)
			var_0_object->AddReply(525263, 26632, 26631); //@t
		bool var_346_bool;
		func_3556(var_1_object);
		if(var_346_bool != 0)
			var_0_object->AddReply(542179, 44499, 44498); //@t
		var_0_object->AddReply(525255, -1, 26623); //@t
		goto Label_154;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=89";
	EMIT "Call2 0xb8";
	EMIT "Pop(1)";
	EMIT "Push((int) 525280)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
	EMIT "Pop(0)";
	EMIT "Push((int) 525281)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 26649)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "Push((int) 528809)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 30223)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "GOTO 0x9a";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_154:
	bool var_358_bool;
	func_3348(var_358_bool);
	if(var_358_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_183;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_183:
		return 0;

	}
	
}


// @pe
void func_2647(object var_2_object, string var_676_string)
{
	bool var_677_bool;
	func_3348(var_677_bool);
	if(!var_677_bool) //@nz
		return 0;
	if(var_676_string == var_2_object)
		return 0;
	string var_680_string; bool var_681_bool;
	var_676_string = var_680_string;
	if(var_676_string == "")
		var_681_bool = false;
	else
		var_681_bool = true;
	func_3243(var_680_string, var_681_bool);
	var_2_object = var_676_string;
	
}


void func_3672(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 465, 1, 527781);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3724(var_51_bool, var_52_object, 461);
}
EMIT "Stack[-1] = 0";


void func_3685(void)
{
	object var_51_object;
	@CreateDiaryEntry(var_51_object, 414, 1, 526115);
	bool var_55_bool; object var_56_object;
	var_51_object = var_56_object;
	func_3724(var_55_bool, var_56_object, 408);
}
EMIT "Stack[-1] = 0";


// @pe
void func_869(object var_2_object, string var_231_string)
{
	bool var_232_bool;
	func_3348(var_232_bool);
	if(!var_232_bool) //@nz
		return 0;
	if(var_231_string == var_2_object)
		return 0;
	string var_235_string; bool var_236_bool;
	var_231_string = var_235_string;
	if(var_231_string == "")
		var_236_bool = false;
	else
		var_236_bool = true;
	func_3243(var_235_string, var_236_bool);
	var_2_object = var_231_string;
	
}


// @pe
void func_3439(void)
{
	@SetVariable("ook11Ospina1", 1);
}


void func_3184(bool var_171_bool, object var_172_object)
{
	bool var_180_bool; int var_181_int; string var_182_string;
	int var_184_int;
	func_3301(var_184_int);
	string var_178_string = ("d" + var_184_int) + "m";
	int var_179_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_172_object->HasProperty((var_178_string + (var_179_int + 1)), var_180_bool);
			if(!var_180_bool) { //@nz
			} else {
				var_179_int += 1;
			}
		}
		if(!var_179_int) { //@nz
			var_171_bool = false;
			return 10;
		}
		var_181_int = 0;
		if(var_179_int > 1)
			@irand(var_181_int, var_179_int);
		var_172_object->GetProperty((var_178_string + (var_181_int + 1)), var_182_string);
		bool var_203_bool; string var_204_string;
		var_182_string = var_204_string;
		func_3258(var_203_bool, var_204_string);
		var_203_bool = var_171_bool;
		return 10;

	}
}


void func_3698(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 444, 1, 526469);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3724(var_51_bool, var_52_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1906(object var_2_object, string var_546_string)
{
	bool var_547_bool;
	func_3348(var_547_bool);
	if(!var_547_bool) //@nz
		return 0;
	if(var_546_string == var_2_object)
		return 0;
	string var_550_string; bool var_551_bool;
	var_546_string = var_550_string;
	if(var_546_string == "")
		var_551_bool = false;
	else
		var_551_bool = true;
	func_3243(var_550_string, var_551_bool);
	var_2_object = var_546_string;
	
}


// @pe
void func_3445(void)
{
	@SetVariable("ook2Ospina1", 1);
}


// @pe
void func_3451(void)
{
	@SetVariable("k2q01", -1);
	func_3646();
}


void func_3711(object var_71_object)
{
	object var_73_object;
	@GetDiaryRoot(var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_71_object = false;
	}
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3460(bool var_326_bool)
{
	int var_328_int;
	func_3296(var_328_int, "k2q01");
	if(var_328_int == 2)
		var_326_bool = true;
	var_326_bool = false;
}


// @pe
void func_1159(object var_2_object, string var_401_string)
{
	bool var_402_bool;
	func_3348(var_402_bool);
	if(!var_402_bool) //@nz
		return 0;
	if(var_401_string == var_2_object)
		return 0;
	string var_405_string; bool var_406_bool;
	var_401_string = var_405_string;
	if(var_401_string == "")
		var_406_bool = false;
	else
		var_406_bool = true;
	func_3243(var_405_string, var_406_bool);
	var_2_object = var_401_string;
	
}


// @pe
void func_1415(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_472_object, object var_473_object)
{
	var_0_object = var_473_object;
	var_3_string = false;
	if(1 != 0) {
		func_1483(var_473_object, "Neutral");
		var_0_object->SetMessage(526441); //@t
		var_0_object->ClearReplies(); //@t
		bool var_488_bool;
		func_3520(var_472_object);
		if(var_488_bool != 0)
			var_0_object->AddReply(526442, 27718, 27717); //@t
		var_0_object->AddReply(526449, -1, 27724); //@t
		var_0_object->AddReply(528982, -1, 30419); //@t
		goto Label_1453;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x58b";
	}
Label_1453:
	bool var_503_bool;
	func_3348(var_503_bool);
	if(var_503_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1482;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1482:
		return 0;

	}
	
}


void func_3724(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_3711(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	object var_69_object;
	var_68_object->Find(var_64_int, var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_64_int);
		var_62_bool = false;
	}
	var_69_object->AddChild(var_63_object);
	@SendWorldWndMessage(7);
	int var_70_int;
	var_63_object->GetCategory(var_70_int);
	@SetDiarySection(var_70_int);
	var_62_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2190(object var_0_object, int var_586_int, object var_587_object)
{
	var_0_object = var_587_object;
	bool var_597_bool; object var_598_object;
	var_587_object = var_598_object;
	func_3002(var_597_bool, var_598_object, 70.0);
	if(!var_597_bool) { //@nz
		var_586_int = -2;
		return 8;
	}
	object var_593_object;
	@CreateDialog(var_593_object);
	int var_601_int;
	func_3342(var_601_int);
	var_593_object->SetNPCName(var_601_int);
	int var_602_int;
	func_3340(var_602_int);
	var_593_object->SetNPCDescription(var_602_int);
	string var_603_string;
	func_3344(var_603_string);
	var_593_object->SetPhoto(var_603_string);
	string var_604_string;
	func_3346(var_604_string);
	var_593_object->SetPhoto2(var_604_string);
	int var_605_int;
	func_3752(var_605_int);
	var_593_object->SetPlayerName(var_605_int);
	bool var_594_bool;
	@IsOverrideActive(var_594_bool);
	if(var_594_bool != 0) {
		var_586_int = -2;
		return 8;
	}
	@DoDialog(var_593_object);
	bool var_607_bool; object var_608_object;
	object var_609_object;
	func_3280(var_609_object);
	var_609_object = var_608_object;
	func_3089(var_607_bool, var_608_object);
	object var_610_object; object var_611_object;
	var_587_object = var_610_object;
	var_593_object = var_611_object;
	TaskCall(11);
	func_2271(var_612_object, var_613_object, var_614_string, var_615_bool, var_610_object, var_611_object);
	TaskReturn();
	bool var_596_bool;
	var_593_object->IsDialogEnd(var_596_bool);
	
	for(;;) {
		var_643_bool = !var_596_bool; //@nz
		if(var_643_bool == 0) goto Label_2260;
		@sync();
		var_593_object->IsDialogEnd(var_596_bool);
	}
	
Label_2260:
	object var_644_object;
	var_587_object = var_644_object;
	func_3071();
	@StopDialog(var_593_object);
	var_593_object->GetReturnValue(-1);
	int var_595_int = var_586_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3472(bool var_337_bool)
{
	int var_339_int;
	func_3296(var_339_int, "k2q01");
	if(var_339_int == 5)
		var_337_bool = true;
	var_337_bool = false;
}


void func_2963(bool var_75_bool)
{
	var_75_bool = true;
}


void func_2965(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2970(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_3227(string var_257_string)
{
	bool var_261_bool; float var_262_float; float var_263_float;
	@lshHasAnimation(var_261_bool, var_257_string);
	if(var_261_bool != 0) {
		@lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		@lshPlayAnimation(var_262_float, var_263_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_257_string);
	}
	
}


// @pe
void func_3484(bool var_412_bool)
{
	int var_414_int;
	func_3296(var_414_int, "k6q01");
	if(var_414_int == 2)
		var_412_bool = true;
	var_412_bool = false;
}


void func_2718(object var_0_object)
{
	bool var_37_bool;
	func_2997(var_37_bool);
	if(!var_37_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2894();
	}
}
EMIT "Return(); Pop(0)";


void func_2978(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


void func_3752(int var_120_int)
{
	int var_122_int;
	@GetVariable("branch", var_122_int);
	if(var_122_int == 0) {
		var_120_int = 1;
		return 2;
	EMIT "GOTO 0xeb7";
	}
	if(var_122_int == 1) {
		var_120_int = 2;
		return 2;
	}
	var_120_int = 3;
}


// @pe
void func_3496(bool var_418_bool)
{
	int var_420_int;
	func_3296(var_420_int, "k6q01DankoPos");
	if(var_420_int > 3)
		var_418_bool = true;
	var_418_bool = false;
}


void func_3243(string var_235_string, bool var_236_bool)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_235_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_235_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, var_236_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_235_string);
	}
	
}


void func_2732(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2988(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_2988(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2978(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


// @pe
void func_3508(bool var_424_bool)
{
	int var_426_int;
	func_3296(var_426_int, "ook6Ospina1");
	if(var_426_int == 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_2997(bool var_37_bool)
{
	bool var_39_bool;
	@IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
}


// @pe
void func_184(object var_2_object, string var_317_string)
{
	bool var_318_bool;
	func_3348(var_318_bool);
	if(!var_318_bool) //@nz
		return 0;
	if(var_317_string == var_2_object)
		return 0;
	string var_321_string; bool var_322_bool;
	var_317_string = var_321_string;
	if(var_317_string == "")
		var_322_bool = false;
	else
		var_322_bool = true;
	func_3243(var_321_string, var_322_bool);
	var_2_object = var_317_string;
	
}


// @pe
void func_3769(object var_54_object)
{
	var_55_bool = GlobalVars[1];
	if(!var_55_bool) { //@nz
		int var_57_int; object var_58_object;
		var_54_object = var_58_object;
		TaskCall(2);
		func_730(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_282_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_283_bool;
	func_3310(var_283_bool, 2);
	if(var_283_bool != 0) {
		int var_286_int; object var_287_object;
		var_54_object = var_287_object;
		TaskCall(0);
		func_0(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	bool var_368_bool;
	func_3310(var_368_bool, 6);
	if(var_368_bool != 0) {
		int var_370_int; object var_371_object;
		var_54_object = var_371_object;
		TaskCall(4);
		func_997(var_372_object, var_370_int, var_371_object);
		TaskReturn();
		return 0;
	}
	bool var_446_bool;
	func_3310(var_446_bool, 8);
	if(var_446_bool != 0) {
		int var_448_int; object var_449_object;
		var_54_object = var_449_object;
		TaskCall(6);
		func_1334(var_450_object, var_448_int, var_449_object);
		TaskReturn();
		return 0;
	}
	bool var_513_bool;
	func_3310(var_513_bool, 11);
	if(var_513_bool != 0) {
		int var_515_int; object var_516_object;
		var_54_object = var_516_object;
		TaskCall(8);
		func_1753(var_517_object, var_515_int, var_516_object);
		TaskReturn();
		return 0;
	}
	bool var_584_bool;
	func_3310(var_584_bool, 12);
	if(var_584_bool != 0) {
		int var_586_int; object var_587_object;
		var_54_object = var_587_object;
		TaskCall(10);
		func_2190(var_588_object, var_586_int, var_587_object);
		TaskReturn();
		return 0;
	}
	int var_645_int; object var_646_object;
	var_54_object = var_646_object;
	TaskCall(12);
	func_2508(var_647_object, var_645_int, var_646_object);
	TaskReturn();
}


void func_3258(bool var_163_bool, string var_164_string)
{
	bool var_166_bool;
	bool var_167_bool;
	func_3348(var_167_bool);
	if(var_167_bool != 0) {
		@lshHasSpeech(var_166_bool, var_164_string);
		if(var_166_bool != 0) {
			@lshPlaySpeech(var_164_string);
			var_163_bool = true;
		}
	}
	var_163_bool = false;
}


void func_2747(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_3002(bool var_68_bool, object var_69_object, float var_70_float)
{
	cvector var_81_cvector; bool var_88_bool;
	var_69_object->GetPosition(var_81_cvector);
	float var_80_float;
	var_69_object->GetEyesHeight(var_80_float);
	var_89_float = GetByIndex(var_81_cvector, 1);
	SetByIndex(var_81_cvector, 1) = (var_89_float + var_80_float);
	cvector var_82_cvector;
	@GetPosition(var_82_cvector);
	@GetEyesHeight(var_80_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	SetByIndex(var_82_cvector, 1) = (var_90_float + var_80_float);
	cvector var_83_cvector = var_81_cvector - var_82_cvector;
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (float)0;
	var_93_float = sqrt(var_83_cvector | var_83_cvector);
	var_83_cvector /= var_93_float;
	cvector var_84_cvector = -var_83_cvector;
	cvector var_95_cvector;
	func_3286(var_95_cvector, (var_84_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_85_cvector = ((var_83_cvector * var_70_float) + (var_95_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_87_bool;
	@IsOverrideActive(var_87_bool);
	if(var_87_bool != 0)
		var_68_bool = false;
	@StopWorld();
	@CameraTransit((var_82_cvector + var_85_cvector), var_84_cvector, true);
	var_109_float = GetByIndex(var_85_cvector, 0);
	var_110_float = GetByIndex(var_85_cvector, 2);
	@Rotate(var_109_float, var_110_float);
	bool var_111_bool;
	func_3348(var_111_bool);
	if(var_111_bool != 0) {
	} else {
		@HasAnimationTrack(var_88_bool, "head");
		if(var_88_bool == 0) goto Label_3065;
		@LookAsyncCamera("head");
	}
Label_3065:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_68_bool = true;
	
}


void func_2752(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2970(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_3520(bool var_488_bool)
{
	int var_490_int;
	func_3296(var_490_int, "k8q01");
	if(var_490_int == 5)
		var_488_bool = true;
	var_488_bool = false;
}


void func_3273(void)
{
	bool var_39_bool;
	func_3348(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1483(object var_2_object, string var_479_string)
{
	bool var_480_bool;
	func_3348(var_480_bool);
	if(!var_480_bool) //@nz
		return 0;
	if(var_479_string == var_2_object)
		return 0;
	string var_483_string; bool var_484_bool;
	var_479_string = var_483_string;
	if(var_479_string == "")
		var_484_bool = false;
	else
		var_484_bool = true;
	func_3243(var_483_string, var_484_bool);
	var_2_object = var_479_string;
	
}


// @pe
void func_3532(bool var_562_bool)
{
	int var_564_int;
	func_3296(var_564_int, "k11q01");
	if(var_564_int == 9)
		var_562_bool = true;
	var_562_bool = false;
}


void func_2508(object var_0_object, int var_645_int, object var_646_object)
{
	var_0_object = var_646_object;
	bool var_656_bool; object var_657_object;
	var_646_object = var_657_object;
	func_3002(var_656_bool, var_657_object, 70.0);
	if(!var_656_bool) { //@nz
		var_645_int = -2;
		return 8;
	}
	object var_652_object;
	@CreateDialog(var_652_object);
	int var_660_int;
	func_3342(var_660_int);
	var_652_object->SetNPCName(var_660_int);
	int var_661_int;
	func_3340(var_661_int);
	var_652_object->SetNPCDescription(var_661_int);
	string var_662_string;
	func_3344(var_662_string);
	var_652_object->SetPhoto(var_662_string);
	string var_663_string;
	func_3346(var_663_string);
	var_652_object->SetPhoto2(var_663_string);
	int var_664_int;
	func_3752(var_664_int);
	var_652_object->SetPlayerName(var_664_int);
	bool var_653_bool;
	@IsOverrideActive(var_653_bool);
	if(var_653_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	@DoDialog(var_652_object);
	bool var_666_bool; object var_667_object;
	object var_668_object;
	func_3280(var_668_object);
	var_668_object = var_667_object;
	func_3089(var_666_bool, var_667_object);
	object var_669_object; object var_670_object;
	var_646_object = var_669_object;
	var_652_object = var_670_object;
	TaskCall(13);
	func_2589(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object);
	TaskReturn();
	bool var_655_bool;
	var_652_object->IsDialogEnd(var_655_bool);
	
	for(;;) {
		var_699_bool = !var_655_bool; //@nz
		if(var_699_bool == 0) goto Label_2578;
		@sync();
		var_652_object->IsDialogEnd(var_655_bool);
	}
	
Label_2578:
	object var_700_object;
	var_646_object = var_700_object;
	func_3071();
	@StopDialog(var_652_object);
	var_652_object->GetReturnValue(-1);
	int var_654_int = var_645_int;
}
EMIT "Stack[-4] = 0";


void func_3280(object var_131_object)
{
	object var_133_object;
	@self(var_133_object);
	var_133_object = var_131_object;
}
EMIT "Stack[-1] = 0";


void func_2774(void)
{
	float var_704_float;
	@rand(var_704_float, 8, 16);
	@SetTimer(10, var_704_float);
}


void func_3286(cvector var_95_cvector, cvector var_96_cvector)
{
	float var_99_float = sqrt(var_96_cvector | var_96_cvector);
	if(var_99_float < 0.000001)
		var_95_cvector = [0.0, 0.0, 0.0];
	var_95_cvector = var_96_cvector / var_99_float;
}


// @pe
void func_3544(bool var_556_bool)
{
	int var_558_int;
	func_3296(var_558_int, "ook11Ospina1");
	if(var_558_int == 0) {
		var_556_bool = true;
		return 0;
	}
	var_556_bool = false;
}


void func_1753(object var_0_object, int var_515_int, object var_516_object)
{
	var_0_object = var_516_object;
	bool var_526_bool; object var_527_object;
	var_516_object = var_527_object;
	func_3002(var_526_bool, var_527_object, 70.0);
	if(!var_526_bool) { //@nz
		var_515_int = -2;
		return 8;
	}
	object var_522_object;
	@CreateDialog(var_522_object);
	int var_530_int;
	func_3342(var_530_int);
	var_522_object->SetNPCName(var_530_int);
	int var_531_int;
	func_3340(var_531_int);
	var_522_object->SetNPCDescription(var_531_int);
	string var_532_string;
	func_3344(var_532_string);
	var_522_object->SetPhoto(var_532_string);
	string var_533_string;
	func_3346(var_533_string);
	var_522_object->SetPhoto2(var_533_string);
	int var_534_int;
	func_3752(var_534_int);
	var_522_object->SetPlayerName(var_534_int);
	bool var_523_bool;
	@IsOverrideActive(var_523_bool);
	if(var_523_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	@DoDialog(var_522_object);
	bool var_536_bool; object var_537_object;
	object var_538_object;
	func_3280(var_538_object);
	var_538_object = var_537_object;
	func_3089(var_536_bool, var_537_object);
	object var_539_object; object var_540_object;
	var_516_object = var_539_object;
	var_522_object = var_540_object;
	TaskCall(9);
	func_1834(var_541_object, var_542_object, var_543_string, var_544_bool, var_539_object, var_540_object);
	TaskReturn();
	bool var_525_bool;
	var_522_object->IsDialogEnd(var_525_bool);
	
	for(;;) {
		var_582_bool = !var_525_bool; //@nz
		if(var_582_bool == 0) goto Label_1823;
		@sync();
		var_522_object->IsDialogEnd(var_525_bool);
	}
	
Label_1823:
	object var_583_object;
	var_516_object = var_583_object;
	func_3071();
	@StopDialog(var_522_object);
	var_522_object->GetReturnValue(-1);
	int var_524_int = var_515_int;
}
EMIT "Stack[-4] = 0";


void func_730(object var_0_object, int var_57_int, object var_58_object)
{
	var_0_object = var_58_object;
	bool var_68_bool; object var_69_object;
	var_58_object = var_69_object;
	func_3002(var_68_bool, var_69_object, 70.0);
	if(!var_68_bool) { //@nz
		var_57_int = -2;
		return 8;
	}
	object var_64_object;
	@CreateDialog(var_64_object);
	int var_116_int;
	func_3342(var_116_int);
	var_64_object->SetNPCName(var_116_int);
	int var_117_int;
	func_3340(var_117_int);
	var_64_object->SetNPCDescription(var_117_int);
	string var_118_string;
	func_3344(var_118_string);
	var_64_object->SetPhoto(var_118_string);
	string var_119_string;
	func_3346(var_119_string);
	var_64_object->SetPhoto2(var_119_string);
	int var_120_int;
	func_3752(var_120_int);
	var_64_object->SetPlayerName(var_120_int);
	bool var_65_bool;
	@IsOverrideActive(var_65_bool);
	if(var_65_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	@DoDialog(var_64_object);
	bool var_129_bool; object var_130_object;
	object var_131_object;
	func_3280(var_131_object);
	var_131_object = var_130_object;
	func_3089(var_129_bool, var_130_object);
	object var_224_object; object var_225_object;
	var_58_object = var_224_object;
	var_64_object = var_225_object;
	TaskCall(3);
	func_811(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	bool var_67_bool;
	var_64_object->IsDialogEnd(var_67_bool);
	
	for(;;) {
		var_273_bool = !var_67_bool; //@nz
		if(var_273_bool == 0) goto Label_800;
		@sync();
		var_64_object->IsDialogEnd(var_67_bool);
	}
	
Label_800:
	object var_274_object;
	var_58_object = var_274_object;
	func_3071();
	@StopDialog(var_64_object);
	var_64_object->GetReturnValue(-1);
	int var_66_int = var_57_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2271(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_610_object, object var_611_object)
{
	var_0_object = var_611_object;
	var_1_object = var_610_object;
	var_3_string = false;
	if(1 != 0) {
		func_2334(var_611_object, "Neutral");
		var_0_object->SetMessage(539297); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(542655, 45059, 45057); //@t
		var_0_object->AddReply(539298, -1, 41241); //@t
		var_0_object->AddReply(542656, -1, 45058); //@t
		goto Label_2304;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8e3";
	}
Label_2304:
	bool var_635_bool;
	func_3348(var_635_bool);
	if(var_635_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3227(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2333;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2333:
		return 0;

	}
	
}


void func_2783(void)
{
	@KillTimer(10);
}


void func_3296(int var_328_int, string var_329_string)
{
	int var_331_int;
	@GetVariable(var_329_string, var_331_int);
	var_331_int = var_328_int;
}


// @pe
void func_3556(bool var_346_bool)
{
	int var_348_int;
	func_3296(var_348_int, "ook2Ospina1");
	if(var_348_int == 0) {
		var_346_bool = true;
		return 0;
	}
	var_346_bool = false;
}


void func_3301(int var_184_int)
{
	float var_186_float;
	@GetGameTime(var_186_float);
	var_184_int = 1 + (var_186_float / 24);
}


void func_997(object var_0_object, int var_370_int, object var_371_object)
{
	var_0_object = var_371_object;
	bool var_381_bool; object var_382_object;
	var_371_object = var_382_object;
	func_3002(var_381_bool, var_382_object, 70.0);
	if(!var_381_bool) { //@nz
		var_370_int = -2;
		return 8;
	}
	object var_377_object;
	@CreateDialog(var_377_object);
	int var_385_int;
	func_3342(var_385_int);
	var_377_object->SetNPCName(var_385_int);
	int var_386_int;
	func_3340(var_386_int);
	var_377_object->SetNPCDescription(var_386_int);
	string var_387_string;
	func_3344(var_387_string);
	var_377_object->SetPhoto(var_387_string);
	string var_388_string;
	func_3346(var_388_string);
	var_377_object->SetPhoto2(var_388_string);
	int var_389_int;
	func_3752(var_389_int);
	var_377_object->SetPlayerName(var_389_int);
	bool var_378_bool;
	@IsOverrideActive(var_378_bool);
	if(var_378_bool != 0) {
		var_370_int = -2;
		return 8;
	}
	@DoDialog(var_377_object);
	bool var_391_bool; object var_392_object;
	object var_393_object;
	func_3280(var_393_object);
	var_393_object = var_392_object;
	func_3089(var_391_bool, var_392_object);
	object var_394_object; object var_395_object;
	var_371_object = var_394_object;
	var_377_object = var_395_object;
	TaskCall(5);
	func_1078(var_396_object, var_397_object, var_398_string, var_399_bool, var_394_object, var_395_object);
	TaskReturn();
	bool var_380_bool;
	var_377_object->IsDialogEnd(var_380_bool);
	
	for(;;) {
		var_444_bool = !var_380_bool; //@nz
		if(var_444_bool == 0) goto Label_1067;
		@sync();
		var_377_object->IsDialogEnd(var_380_bool);
	}
	
Label_1067:
	object var_445_object;
	var_371_object = var_445_object;
	func_3071();
	@StopDialog(var_377_object);
	var_377_object->GetReturnValue(-1);
	int var_379_int = var_370_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3310(bool var_283_bool, int var_284_int)
{
	int var_285_int;
	func_3301(var_285_int);
	var_283_bool = var_285_int == var_284_int;
}


void func_3568(void)
{
	object var_123_object;
	@CreateDiaryEntry(var_123_object, 498, 1, 528065);
	bool var_127_bool; object var_128_object;
	var_123_object = var_128_object;
	func_3724(var_127_bool, var_128_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3316(string var_61_string, int var_62_int)
{
	string var_64_string = "idle";
	if(var_62_int != 0)
		var_64_string += var_62_int;
	var_64_string = var_61_string;
}


void func_3323(int var_55_int)
{
	int var_58_int; bool var_59_bool;
	var_58_int = 0;
	
	for(;;) {
		string var_61_string; int var_62_int;
		var_58_int = var_62_int;
		func_3316(var_61_string, var_62_int);
		@HasAnimation(var_59_bool, "all", var_61_string);
		if(!var_59_bool) //@nz
			break;
		var_58_int += 1;
	}
	var_58_int = var_55_int;
}


void func_3581(void)
{
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 497, 1, 528064);
	bool var_117_bool; object var_118_object;
	var_113_object = var_118_object;
	func_3724(var_117_bool, var_118_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3071(void)
{
	bool var_276_bool;
	@CameraSwitchToNormal(true);
	bool var_278_bool;
	func_3348(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		@HasAnimationTrack(var_276_bool, "head");
		if(var_276_bool == 0) goto Label_3088;
		@UnlookAsync("head");
	}
Label_3088:
	
}


