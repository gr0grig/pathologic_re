// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_37_cvector == 26622) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2932();
			}
			if(var_37_cvector == 26641) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_2941();
			}
			if(var_36_bool == 26619) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525251); //@t
				var_0_object->ClearReplies(); //@t
				bool var_98_bool;
				func_3027(var_1_object);
				if(var_98_bool != 0)
					var_0_object->AddReply(525252, 26621, 26620); //@t
				bool var_109_bool;
				func_3039(var_1_object);
				if(var_109_bool != 0)
					var_0_object->AddReply(525263, 26632, 26631); //@t
				var_0_object->AddReply(525255, -1, 26623); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0xbb";
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
			if(var_36_bool == 26632) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525265, 26634, 26633); //@t
				return 0;
			}
			if(var_36_bool == 26634) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529215, 30668, 30667); //@t
				return 0;
			}
			if(var_36_bool == 30668) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529217, 30670, 30669); //@t
				return 0;
			}
			if(var_36_bool == 30670) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525267, 26636, 26635); //@t
				return 0;
			}
			if(var_36_bool == 26636) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525269, 26638, 26637); //@t
				return 0;
			}
			if(var_36_bool == 26638) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525271, 26640, 26639); //@t
				return 0;
			}
			if(var_36_bool == 26640) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525273, -1, 26641); //@t
				return 0;
			}
			if(var_36_bool == 26621) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529213, 30666, 30665); //@t
				return 0;
			}
			if(var_36_bool == 30666) {
				func_187(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525254, -1, 26622); //@t
				return 0;
			}
			var_3_string = true;
			bool var_184_bool;
			func_2930(var_184_bool);
			if(var_184_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_36_bool == 26875) {
				func_603(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525520, 30224, 26876); //@t
				var_0_object->AddReply(528815, 30230, 30229); //@t
				return 0;
			}
			if(var_36_bool == 30230) {
				func_603(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528817, 30224, 30231); //@t
				return 0;
			}
			if(var_36_bool == 30224) {
				func_603(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528810); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528811, 30226, 30225); //@t
				var_0_object->AddReply(528818, 30226, 30233); //@t
				return 0;
			}
			if(var_36_bool == 30226) {
				func_603(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528813, -1, 30227); //@t
				var_0_object->AddReply(528814, -1, 30228); //@t
				return 0;
			}
			var_3_string = true;
			bool var_88_bool;
			func_2930(var_88_bool);
			if(var_88_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x272";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_37_cvector == 27378) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2950();
			}
			if(var_37_cvector == 27380) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_2956();
			}
			if(var_36_bool == 27377) {
				func_893(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526091); //@t
				var_0_object->ClearReplies(); //@t
				bool var_88_bool = false;
				bool var_89_bool = false;
				bool var_90_bool;
				func_3051(var_1_object);
				if(var_90_bool != 0) {
					bool var_98_bool;
					func_3063(var_1_object);
					if(var_98_bool != 0)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					bool var_104_bool;
					func_3075(var_1_object);
					if(var_104_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_object->AddReply(526092, 27379, 27378); //@t
				var_0_object->AddReply(526095, -1, 27381); //@t
				return 0;
			}
			if(var_36_bool == 27379) {
				func_893(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528804, 30219, 30218); //@t
				return 0;
			}
			if(var_36_bool == 30219) {
				func_893(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528806, 30222, 30220); //@t
				var_0_object->AddReply(528807, -1, 30221); //@t
				return 0;
			}
			if(var_36_bool == 30222) {
				func_893(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526094, -1, 27380); //@t
				return 0;
			}
			var_3_string = true;
			bool var_140_bool;
			func_2930(var_140_bool);
			if(var_140_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x394";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_37_cvector == 30428) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_2961();
			}
			if(var_37_cvector == 30433) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_2961();
			}
			if(var_37_cvector == 27723) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_2961();
			}
			if(var_36_bool == 27716) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526441); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool;
				func_3087(var_1_object);
				if(var_92_bool != 0)
					var_0_object->AddReply(526442, 27718, 27717); //@t
				var_0_object->AddReply(526449, -1, 27724); //@t
				var_0_object->AddReply(528982, -1, 30419); //@t
				return 0;
			}
			if(var_36_bool == 27718) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528983, 30421, 30420); //@t
				return 0;
			}
			if(var_36_bool == 30421) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528984); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528985, 30423, 30422); //@t
				return 0;
			}
			if(var_36_bool == 30423) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528986); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526444, 27720, 27719); //@t
				return 0;
			}
			if(var_36_bool == 27720) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526446, 27722, 27721); //@t
				return 0;
			}
			if(var_36_bool == 27722) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528987, 30425, 30424); //@t
				var_0_object->AddReply(526448, -1, 27723); //@t
				return 0;
			}
			if(var_36_bool == 30425) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528989, 30427, 30426); //@t
				return 0;
			}
			if(var_36_bool == 30427) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528991, -1, 30428); //@t
				var_0_object->AddReply(528992, 30430, 30429); //@t
				return 0;
			}
			if(var_36_bool == 30430) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528994, 30432, 30431); //@t
				return 0;
			}
			if(var_36_bool == 30432) {
				func_1204(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528995); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528996, -1, 30433); //@t
				return 0;
			}
			var_3_string = true;
			bool var_178_bool;
			func_2930(var_178_bool);
			if(var_178_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4cb";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_37_cvector == 28960) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3021();
			}
			if(var_37_cvector == 28972) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_2970();
			}
			if(var_36_bool == 28958) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527613); //@t
				var_0_object->ClearReplies(); //@t
				bool var_146_bool = false;
				bool var_147_bool;
				func_3111(var_1_object);
				if(var_147_bool != 0) {
					bool var_155_bool;
					func_3099(var_1_object);
					if(var_155_bool != 0)
						var_146_bool = true;
				}
				if(var_146_bool != 0)
					var_0_object->AddReply(527615, 28961, 28960); //@t
				var_0_object->AddReply(527614, -1, 28959); //@t
				return 0;
			}
			if(var_36_bool == 28961) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527616); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527631, 28978, 28977); //@t
				return 0;
			}
			if(var_36_bool == 28978) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527617, 28963, 28962); //@t
				var_0_object->AddReply(527628, 28974, 28973); //@t
				return 0;
			}
			if(var_36_bool == 28974) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527633, 28980, 28979); //@t
				return 0;
			}
			if(var_36_bool == 28980) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527630, 28965, 28975); //@t
				return 0;
			}
			if(var_36_bool == 28963) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527619, 28965, 28964); //@t
				return 0;
			}
			if(var_36_bool == 28965) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527621, 28967, 28966); //@t
				return 0;
			}
			if(var_36_bool == 28967) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527622); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527623, 28969, 28968); //@t
				return 0;
			}
			if(var_36_bool == 28969) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527625, 28971, 28970); //@t
				var_0_object->AddReply(527635, 28982, 28981); //@t
				return 0;
			}
			if(var_36_bool == 28982) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527637, 28971, 28983); //@t
				return 0;
			}
			if(var_36_bool == 28971) {
				func_1627(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527627, -1, 28972); //@t
				return 0;
			}
			var_3_string = true;
			bool var_243_bool;
			func_2930(var_243_bool);
			if(var_243_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x672";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_36_bool == 41240) {
				func_2045(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539298, -1, 41241); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_2930(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x814";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_2855();
			if(var_36_int == 42548) {
				func_2243(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2930(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8da";
	
	}

}


maintask task_15
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		var_36_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2314(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2385();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2599(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2354(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2334(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_2862(var_82_object);
					var_82_object = var_81_object;
					func_2747(var_80_bool, var_81_object);
				}
			} else {
				func_2349(var_36_int);
				func_2376();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2567();
		func_2385();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_2385();
		func_2827("Neutral");
		func_2376();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2376();
		else
			func_2827("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2567();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2590(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3311(var_54_object);
			func_2827("Neutral");
			func_2385();
			func_2376();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_41_bool;
	func_2599(var_41_bool);
	if(!var_41_bool) goto Label_0; //@nz
}


// @pe
void func_3075(bool var_403_bool)
{
	int var_405_int;
	func_2878(var_405_int, "ook6Ospina1");
	if(var_405_int == 0) {
		var_403_bool = true;
		return 0;
	}
	var_403_bool = false;
}


void func_2565(bool var_89_bool)
{
	var_89_bool = true;
}


void func_2567(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2314(object var_0_object)
{
	bool var_37_bool;
	func_2599(var_37_bool);
	if(!var_37_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2442();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2496();
	}
}
EMIT "Return(); Pop(0)";


void func_2827(string var_44_string)
{
	float var_47_float; float var_48_float;
	@lshGetAnimTimes(var_44_string, var_47_float, var_48_float);
	@lshPlayAnimation(var_47_float, var_48_float, false);
}


void func_2572(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_13(object var_0_object, int var_274_int, object var_275_object)
{
	var_0_object = var_275_object;
	bool var_285_bool; object var_286_object;
	object var_287_object;
	func_2862(var_287_object);
	var_287_object = var_286_object;
	func_2689(var_285_bool, var_286_object);
	bool var_288_bool; object var_289_object;
	var_275_object = var_289_object;
	func_2604(var_288_bool, var_289_object, 70.0);
	if(!var_288_bool) { //@nz
		var_274_int = -2;
		return 8;
	}
	object var_281_object;
	@CreateDialog(var_281_object);
	int var_292_int;
	func_2924(var_292_int);
	var_281_object->SetNPCName(var_292_int);
	int var_293_int;
	func_2922(var_293_int);
	var_281_object->SetNPCDescription(var_293_int);
	string var_294_string;
	func_2926(var_294_string);
	var_281_object->SetPhoto(var_294_string);
	string var_295_string;
	func_2928(var_295_string);
	var_281_object->SetPhoto2(var_295_string);
	int var_296_int;
	func_3294(var_296_int);
	var_281_object->SetPlayerName(var_296_int);
	bool var_282_bool;
	@IsOverrideActive(var_282_bool);
	if(var_282_bool != 0) {
		var_274_int = -2;
		return 8;
	}
	@DoDialog(var_281_object);
	object var_298_object; object var_299_object;
	var_275_object = var_298_object;
	var_281_object = var_299_object;
	TaskCall(2);
	func_94(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object);
	TaskReturn();
	bool var_284_bool;
	var_281_object->IsDialogEnd(var_284_bool);
	
	for(;;) {
		var_345_bool = !var_284_bool; //@nz
		if(var_345_bool == 0) goto Label_83;
		@sync();
		var_281_object->IsDialogEnd(var_284_bool);
	}
	
Label_83:
	object var_346_object;
	var_275_object = var_346_object;
	func_2672();
	@StopDialog(var_281_object);
	var_281_object->GetReturnValue(-1);
	int var_283_int = var_274_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3087(bool var_467_bool)
{
	int var_469_int;
	func_2878(var_469_int, "k8q01");
	if(var_469_int == 5)
		var_467_bool = true;
	var_467_bool = false;
}


void func_2834(string var_234_string, bool var_235_bool)
{
	float var_240_float; float var_241_float;
	@lshGetAnimTimes(var_234_string, var_240_float, var_241_float);
	@lshPlayAnimation(var_240_float, var_241_float, var_235_bool);
}


// @pe
void func_1555(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_518_object, object var_519_object)
{
	var_0_object = var_519_object;
	var_1_object = var_518_object;
	var_3_string = false;
	if(1 != 0) {
		func_1627(var_519_object, "Neutral");
		var_0_object->SetMessage(527613); //@t
		var_0_object->ClearReplies(); //@t
		bool var_534_bool = false;
		bool var_535_bool;
		func_3111(var_1_object);
		if(var_535_bool != 0) {
			bool var_541_bool;
			func_3099(var_1_object);
			if(var_541_bool != 0)
				var_534_bool = true;
		}
		if(var_534_bool != 0)
			var_0_object->AddReply(527615, 28961, 28960); //@t
		var_0_object->AddReply(527614, -1, 28959); //@t
		goto Label_1597;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x617";
	}
Label_1597:
	bool var_553_bool;
	func_2930(var_553_bool);
	if(var_553_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1626;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1626:
		return 0;

	}
	
}


void func_2580(bool var_44_bool, cvector var_45_cvector)
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


void func_2840(bool var_102_bool, string var_103_string)
{
	bool var_105_bool;
	bool var_106_bool;
	func_2930(var_106_bool);
	if(var_106_bool != 0) {
		@lshHasSpeech(var_105_bool, var_103_string);
		if(var_105_bool != 0) {
			@lshPlaySpeech(var_103_string);
			var_102_bool = true;
		}
	}
	var_102_bool = false;
}


// @pe
void func_3099(bool var_541_bool)
{
	int var_543_int;
	func_2878(var_543_int, "k11q01");
	if(var_543_int == 9)
		var_541_bool = true;
	var_541_bool = false;
}


void func_2590(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2580(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_1055(object var_0_object, int var_427_int, object var_428_object)
{
	var_0_object = var_428_object;
	bool var_438_bool; object var_439_object;
	object var_440_object;
	func_2862(var_440_object);
	var_440_object = var_439_object;
	func_2689(var_438_bool, var_439_object);
	bool var_441_bool; object var_442_object;
	var_428_object = var_442_object;
	func_2604(var_441_bool, var_442_object, 70.0);
	if(!var_441_bool) { //@nz
		var_427_int = -2;
		return 8;
	}
	object var_434_object;
	@CreateDialog(var_434_object);
	int var_445_int;
	func_2924(var_445_int);
	var_434_object->SetNPCName(var_445_int);
	int var_446_int;
	func_2922(var_446_int);
	var_434_object->SetNPCDescription(var_446_int);
	string var_447_string;
	func_2926(var_447_string);
	var_434_object->SetPhoto(var_447_string);
	string var_448_string;
	func_2928(var_448_string);
	var_434_object->SetPhoto2(var_448_string);
	int var_449_int;
	func_3294(var_449_int);
	var_434_object->SetPlayerName(var_449_int);
	bool var_435_bool;
	@IsOverrideActive(var_435_bool);
	if(var_435_bool != 0) {
		var_427_int = -2;
		return 8;
	}
	@DoDialog(var_434_object);
	object var_451_object; object var_452_object;
	var_428_object = var_451_object;
	var_434_object = var_452_object;
	TaskCall(8);
	func_1136(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object);
	TaskReturn();
	bool var_437_bool;
	var_434_object->IsDialogEnd(var_437_bool);
	
	for(;;) {
		var_490_bool = !var_437_bool; //@nz
		if(var_490_bool == 0) goto Label_1125;
		@sync();
		var_434_object->IsDialogEnd(var_437_bool);
	}
	
Label_1125:
	object var_491_object;
	var_428_object = var_491_object;
	func_2672();
	@StopDialog(var_434_object);
	var_434_object->GetReturnValue(-1);
	int var_436_int = var_427_int;
}
EMIT "Stack[-4] = 0";


void func_2334(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2590(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_545(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_223_object, object var_224_object)
{
	var_0_object = var_224_object;
	var_1_object = var_223_object;
	var_3_string = false;
	if(1 != 0) {
		func_603(var_224_object, "Neutral");
		var_0_object->SetMessage(525519); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525520, 30224, 26876); //@t
		var_0_object->AddReply(528815, 30230, 30229); //@t
		goto Label_573;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x225";
	}
Label_573:
	bool var_249_bool;
	func_2930(var_249_bool);
	if(var_249_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_602;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_602:
		return 0;

	}
	
}


void func_2599(bool var_37_bool)
{
	bool var_39_bool;
	@IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
}


// @pe
void func_3111(bool var_535_bool)
{
	int var_537_int;
	func_2878(var_537_int, "ook11Ospina1");
	if(var_537_int == 0) {
		var_535_bool = true;
		return 0;
	}
	var_535_bool = false;
}


void func_2855(void)
{
	bool var_39_bool;
	func_2930(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_2604(bool var_163_bool, object var_164_object, float var_165_float)
{
	cvector var_176_cvector; bool var_183_bool;
	var_164_object->GetPosition(var_176_cvector);
	float var_175_float;
	var_164_object->GetEyesHeight(var_175_float);
	var_184_float = GetByIndex(var_176_cvector, 1);
	SetByIndex(var_176_cvector, 1) = (var_184_float + var_175_float);
	cvector var_177_cvector;
	@GetPosition(var_177_cvector);
	@GetEyesHeight(var_175_float);
	var_185_float = GetByIndex(var_177_cvector, 1);
	SetByIndex(var_177_cvector, 1) = (var_185_float + var_175_float);
	cvector var_178_cvector = var_176_cvector - var_177_cvector;
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (float)0;
	var_188_float = sqrt(var_178_cvector | var_178_cvector);
	var_178_cvector /= var_188_float;
	cvector var_179_cvector = -var_178_cvector;
	cvector var_190_cvector;
	func_2868(var_190_cvector, (var_179_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_180_cvector = ((var_178_cvector * var_165_float) + (var_190_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_182_bool;
	@IsOverrideActive(var_182_bool);
	if(var_182_bool != 0)
		var_163_bool = false;
	@StopWorld();
	@CameraTransit((var_177_cvector + var_180_cvector), var_179_cvector);
	var_203_float = GetByIndex(var_180_cvector, 0);
	var_204_float = GetByIndex(var_180_cvector, 2);
	@Rotate(var_203_float, var_204_float);
	bool var_205_bool;
	func_2930(var_205_bool);
	if(var_205_bool != 0) {
	} else {
		@HasAnimationTrack(var_183_bool, "head");
		if(var_183_bool == 0) goto Label_2666;
		@LookAsyncCamera("head");
	}
Label_2666:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_163_bool = true;
	
}


// @pe
void func_812(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_373_object, object var_374_object)
{
	var_0_object = var_374_object;
	var_1_object = var_373_object;
	var_3_string = false;
	if(1 != 0) {
		func_893(var_374_object, "Neutral");
		var_0_object->SetMessage(526091); //@t
		var_0_object->ClearReplies(); //@t
		bool var_389_bool = false;
		bool var_390_bool = false;
		bool var_391_bool;
		func_3051(var_1_object);
		if(var_391_bool != 0) {
			bool var_397_bool;
			func_3063(var_1_object);
			if(var_397_bool != 0)
				var_390_bool = true;
		}
		if(var_390_bool != 0) {
			bool var_403_bool;
			func_3075(var_1_object);
			if(var_403_bool != 0)
				var_389_bool = true;
		}
		if(var_389_bool != 0)
			var_0_object->AddReply(526092, 27379, 27378); //@t
		var_0_object->AddReply(526095, -1, 27381); //@t
		goto Label_863;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x330";
	}
Label_863:
	bool var_415_bool;
	func_2930(var_415_bool);
	if(var_415_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_892;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_892:
		return 0;

	}
	
}


void func_2349(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_2862(object var_70_object)
{
	object var_72_object;
	@self(var_72_object);
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";


void func_2354(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2572(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3123(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 498, 1, 528065);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_3266(var_128_bool, var_129_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2868(cvector var_190_cvector, cvector var_191_cvector)
{
	float var_194_float = sqrt(var_191_cvector | var_191_cvector);
	if(var_194_float < 0.000001)
		var_190_cvector = [0.0, 0.0, 0.0];
	var_190_cvector = var_191_cvector / var_194_float;
}


void func_2104(object var_0_object, int var_618_int, object var_619_object)
{
	var_0_object = var_619_object;
	bool var_629_bool; object var_630_object;
	object var_631_object;
	func_2862(var_631_object);
	var_631_object = var_630_object;
	func_2689(var_629_bool, var_630_object);
	bool var_632_bool; object var_633_object;
	var_619_object = var_633_object;
	func_2604(var_632_bool, var_633_object, 70.0);
	if(!var_632_bool) { //@nz
		var_618_int = -2;
		return 8;
	}
	object var_625_object;
	@CreateDialog(var_625_object);
	int var_636_int;
	func_2924(var_636_int);
	var_625_object->SetNPCName(var_636_int);
	int var_637_int;
	func_2922(var_637_int);
	var_625_object->SetNPCDescription(var_637_int);
	string var_638_string;
	func_2926(var_638_string);
	var_625_object->SetPhoto(var_638_string);
	string var_639_string;
	func_2928(var_639_string);
	var_625_object->SetPhoto2(var_639_string);
	int var_640_int;
	func_3294(var_640_int);
	var_625_object->SetPlayerName(var_640_int);
	bool var_626_bool;
	@IsOverrideActive(var_626_bool);
	if(var_626_bool != 0) {
		var_618_int = -2;
		return 8;
	}
	@DoDialog(var_625_object);
	object var_642_object; object var_643_object;
	var_619_object = var_642_object;
	var_625_object = var_643_object;
	TaskCall(14);
	func_2185(var_644_object, var_645_object, var_646_string, var_647_bool, var_642_object, var_643_object);
	TaskReturn();
	bool var_628_bool;
	var_625_object->IsDialogEnd(var_628_bool);
	
	for(;;) {
		var_672_bool = !var_628_bool; //@nz
		if(var_672_bool == 0) goto Label_2174;
		@sync();
		var_625_object->IsDialogEnd(var_628_bool);
	}
	
Label_2174:
	object var_673_object;
	var_619_object = var_673_object;
	func_2672();
	@StopDialog(var_625_object);
	var_625_object->GetReturnValue(-1);
	int var_627_int = var_618_int;
}
EMIT "Stack[-4] = 0";


void func_2878(int var_316_int, string var_317_string)
{
	int var_319_int;
	@GetVariable(var_317_string, var_319_int);
	var_319_int = var_316_int;
}


void func_3136(void)
{
	object var_114_object;
	@CreateDiaryEntry(var_114_object, 497, 1, 528064);
	bool var_118_bool; object var_119_object;
	var_114_object = var_119_object;
	func_3266(var_118_bool, var_119_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2883(int var_123_int)
{
	float var_125_float;
	@GetGameTime(var_125_float);
	var_123_int = 1 + (var_125_float / 24);
}


void func_2376(void)
{
	float var_51_float;
	@rand(var_51_float, 8, 16);
	@SetTimer(10, var_51_float);
}


// @pe
void func_2892(bool var_271_bool, int var_272_int)
{
	int var_273_int;
	func_2883(var_273_int);
	var_271_bool = var_273_int == var_272_int;
}


void func_3149(void)
{
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 496, 1, 528063);
	bool var_108_bool; object var_109_object;
	var_104_object = var_109_object;
	func_3266(var_108_bool, var_109_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2385(void)
{
	@KillTimer(10);
}


void func_2898(string var_75_string, int var_76_int)
{
	string var_78_string = "idle";
	if(var_76_int != 0)
		var_78_string += var_76_int;
	var_78_string = var_75_string;
}


void func_2905(int var_69_int)
{
	int var_72_int; bool var_73_bool;
	var_72_int = 0;
	
	for(;;) {
		string var_75_string; int var_76_int;
		var_72_int = var_76_int;
		func_2898(var_75_string, var_76_int);
		@HasAnimation(var_73_bool, "all", var_75_string);
		if(!var_73_bool) //@nz
			break;
		var_72_int += 1;
	}
	var_72_int = var_69_int;
}


void func_3162(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 495, 1, 528062);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_3266(var_98_bool, var_99_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_603(object var_2_object, string var_230_string)
{
	bool var_231_bool;
	func_2930(var_231_bool);
	if(!var_231_bool) //@nz
		return 0;
	if(var_230_string == var_2_object)
		return 0;
	string var_234_string; bool var_235_bool;
	var_230_string = var_234_string;
	if(var_230_string == "")
		var_235_bool = false;
	else
		var_235_bool = true;
	func_2834(var_234_string, var_235_bool);
	var_2_object = var_230_string;
	
}


// @pe
void func_1627(object var_2_object, string var_525_string)
{
	bool var_526_bool;
	func_2930(var_526_bool);
	if(!var_526_bool) //@nz
		return 0;
	if(var_525_string == var_2_object)
		return 0;
	string var_529_string; bool var_530_bool;
	var_525_string = var_529_string;
	if(var_525_string == "")
		var_530_bool = false;
	else
		var_530_bool = true;
	func_2834(var_529_string, var_530_bool);
	var_2_object = var_525_string;
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_298_object, object var_299_object)
{
	var_0_object = var_299_object;
	var_1_object = var_298_object;
	var_3_string = false;
	if(1 != 0) {
		func_187(var_299_object, "Neutral");
		var_0_object->SetMessage(525251); //@t
		var_0_object->ClearReplies(); //@t
		bool var_314_bool;
		func_3027(var_1_object);
		if(var_314_bool != 0)
			var_0_object->AddReply(525252, 26621, 26620); //@t
		bool var_325_bool;
		func_3039(var_1_object);
		if(var_325_bool != 0)
			var_0_object->AddReply(525263, 26632, 26631); //@t
		var_0_object->AddReply(525255, -1, 26623); //@t
		goto Label_157;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=89";
	EMIT "Call2 0xbb";
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
	EMIT "GOTO 0x9d";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_157:
	bool var_337_bool;
	func_2930(var_337_bool);
	if(var_337_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_186;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_186:
		return 0;

	}
	
}


void func_3175(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 494, 1, 528061);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3266(var_88_bool, var_89_object, 480);
}
EMIT "Stack[-1] = 0";


void func_2922(int var_211_int)
{
	var_211_int = 515549;
}


void func_2924(int var_210_int)
{
	var_210_int = 502874;
}


void func_2926(string var_212_string)
{
	var_212_string = "ui/NPC_Ospina.png";
}


void func_2672(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal();
	bool var_266_bool;
	func_2930(var_266_bool);
	if(var_266_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_2688;
		@UnlookAsync("head");
	}
Label_2688:
	
}


// @pe
void func_1136(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_451_object, object var_452_object)
{
	var_0_object = var_452_object;
	var_3_string = false;
	if(1 != 0) {
		func_1204(var_452_object, "Neutral");
		var_0_object->SetMessage(526441); //@t
		var_0_object->ClearReplies(); //@t
		bool var_467_bool;
		func_3087(var_451_object);
		if(var_467_bool != 0)
			var_0_object->AddReply(526442, 27718, 27717); //@t
		var_0_object->AddReply(526449, -1, 27724); //@t
		var_0_object->AddReply(528982, -1, 30419); //@t
		goto Label_1174;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x474";
	}
Label_1174:
	bool var_482_bool;
	func_2930(var_482_bool);
	if(var_482_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1203;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1203:
		return 0;

	}
	
}


void func_2928(string var_213_string)
{
	var_213_string = "ui/NPC_Ospina_b.png";
}


void func_2930(bool var_106_bool)
{
	var_106_bool = true;
}


void func_3188(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 493, 1, 528060);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_3266(var_63_bool, var_64_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2932(void)
{
	@SetVariable("k2q01", 4);
	func_3214();
}


void func_1911(object var_0_object, int var_565_int, object var_566_object)
{
	var_0_object = var_566_object;
	bool var_576_bool; object var_577_object;
	object var_578_object;
	func_2862(var_578_object);
	var_578_object = var_577_object;
	func_2689(var_576_bool, var_577_object);
	bool var_579_bool; object var_580_object;
	var_566_object = var_580_object;
	func_2604(var_579_bool, var_580_object, 70.0);
	if(!var_579_bool) { //@nz
		var_565_int = -2;
		return 8;
	}
	object var_572_object;
	@CreateDialog(var_572_object);
	int var_583_int;
	func_2924(var_583_int);
	var_572_object->SetNPCName(var_583_int);
	int var_584_int;
	func_2922(var_584_int);
	var_572_object->SetNPCDescription(var_584_int);
	string var_585_string;
	func_2926(var_585_string);
	var_572_object->SetPhoto(var_585_string);
	string var_586_string;
	func_2928(var_586_string);
	var_572_object->SetPhoto2(var_586_string);
	int var_587_int;
	func_3294(var_587_int);
	var_572_object->SetPlayerName(var_587_int);
	bool var_573_bool;
	@IsOverrideActive(var_573_bool);
	if(var_573_bool != 0) {
		var_565_int = -2;
		return 8;
	}
	@DoDialog(var_572_object);
	object var_589_object; object var_590_object;
	var_566_object = var_589_object;
	var_572_object = var_590_object;
	TaskCall(12);
	func_1992(var_591_object, var_592_object, var_593_string, var_594_bool, var_589_object, var_590_object);
	TaskReturn();
	bool var_575_bool;
	var_572_object->IsDialogEnd(var_575_bool);
	
	for(;;) {
		var_616_bool = !var_575_bool; //@nz
		if(var_616_bool == 0) goto Label_1981;
		@sync();
		var_572_object->IsDialogEnd(var_575_bool);
	}
	
Label_1981:
	object var_617_object;
	var_566_object = var_617_object;
	func_2672();
	@StopDialog(var_572_object);
	var_572_object->GetReturnValue(-1);
	int var_574_int = var_565_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2941(void)
{
	@SetVariable("k2q01", 6);
	func_3201();
}


// @pe
void func_893(object var_2_object, string var_380_string)
{
	bool var_381_bool;
	func_2930(var_381_bool);
	if(!var_381_bool) //@nz
		return 0;
	if(var_380_string == var_2_object)
		return 0;
	string var_384_string; bool var_385_bool;
	var_380_string = var_384_string;
	if(var_380_string == "")
		var_385_bool = false;
	else
		var_385_bool = true;
	func_2834(var_384_string, var_385_bool);
	var_2_object = var_380_string;
	
}


void func_2689(bool var_68_bool, object var_69_object)
{
	int var_75_int; int var_76_int;
	@GetVariable("voice_common", var_75_int);
	if(var_75_int != 0) {
		bool var_79_bool; object var_80_object;
		var_69_object = var_80_object;
		func_2747(var_79_bool, var_80_object);
		if(!var_79_bool) { //@nz
			bool var_110_bool; object var_111_object;
			var_69_object = var_111_object;
			func_2784(var_110_bool, var_111_object);
			if(!var_110_bool) { //@nz
				var_68_bool = false;
				return 4;
			}
		}
		@irand(var_76_int, 2);
		if(var_76_int != 0)
			@SetVariable("voice_common", ((var_75_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_155_bool; object var_156_object;
		var_69_object = var_156_object;
		func_2784(var_155_bool, var_156_object);
		if(!var_155_bool) { //@nz
			bool var_158_bool; object var_159_object;
			var_69_object = var_159_object;
			func_2747(var_158_bool, var_159_object);
			if(!var_158_bool) { //@nz
				var_68_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2745;
	
Label_2745:
	var_68_bool = true;
	
}


void func_3201(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 467, 1, 527783);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_3266(var_80_bool, var_81_object, 461);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2950(void)
{
	@SetVariable("ook6Ospina1", 1);
}


// @pe
void func_2185(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_642_object, object var_643_object)
{
	var_0_object = var_643_object;
	var_1_object = var_642_object;
	var_3_string = false;
	if(1 != 0) {
		func_2243(var_643_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2213;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x88d";
	}
Label_2213:
	bool var_664_bool;
	func_2930(var_664_bool);
	if(var_664_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2242;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2242:
		return 0;

	}
	
}


// @pe
void func_2956(void)
{
	func_3227();
}


void func_3214(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 465, 1, 527781);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3266(var_51_bool, var_52_object, 461);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2961(void)
{
	@SetVariable("k8q01", 6);
	func_3240();
}


void func_2970(void)
{
	int var_51_int;
	@GetVariable("k11q01SoulCount", var_51_int);
	@SetVariable("k11q01SoulCount", (var_51_int + 1));
	if(var_51_int == 2) {
		func_3188();
	} else if(var_51_int == 3) {
			func_3175();
	}

	for(;;) {
		return 2;

	}
	
	if(var_51_int == 4) {
		func_3162();
	} else if(var_51_int == 5) {
		func_3149();
	} else if(var_51_int == 6) {
		func_3136();
	} else if(var_51_int == 7) {
		func_3123();
	}
}


void func_3227(void)
{
	object var_51_object;
	@CreateDiaryEntry(var_51_object, 414, 1, 526115);
	bool var_55_bool; object var_56_object;
	var_51_object = var_56_object;
	func_3266(var_55_bool, var_56_object, 408);
}
EMIT "Stack[-1] = 0";


void func_3240(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 444, 1, 526469);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_3266(var_51_bool, var_52_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1204(object var_2_object, string var_458_string)
{
	bool var_459_bool;
	func_2930(var_459_bool);
	if(!var_459_bool) //@nz
		return 0;
	if(var_458_string == var_2_object)
		return 0;
	string var_462_string; bool var_463_bool;
	var_458_string = var_462_string;
	if(var_458_string == "")
		var_463_bool = false;
	else
		var_463_bool = true;
	func_2834(var_462_string, var_463_bool);
	var_2_object = var_458_string;
	
}


void func_3253(object var_72_object)
{
	object var_74_object;
	@GetDiaryRoot(var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_72_object = false;
	}
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_187(object var_2_object, string var_305_string)
{
	bool var_306_bool;
	func_2930(var_306_bool);
	if(!var_306_bool) //@nz
		return 0;
	if(var_305_string == var_2_object)
		return 0;
	string var_309_string; bool var_310_bool;
	var_305_string = var_309_string;
	if(var_305_string == "")
		var_310_bool = false;
	else
		var_310_bool = true;
	func_2834(var_309_string, var_310_bool);
	var_2_object = var_305_string;
	
}


void func_2747(bool var_79_bool, object var_80_object)
{
	string var_86_string; bool var_88_bool; int var_89_int; string var_90_string;
	var_86_string = "c";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_102_bool; string var_103_string;
		var_90_string = var_103_string;
		func_2840(var_102_bool, var_103_string);
		var_102_bool = var_79_bool;
		return 10;

	}
}


void func_2496(void)
{
	bool var_63_bool; int var_64_int; int var_65_int; bool var_66_bool;
	@WaitForAnimEnd();
	bool var_67_bool;
	func_2599(var_67_bool);
	if(!var_67_bool) //@nz
		return 12;
	int var_69_int;
	func_2905(var_69_int);
	int var_61_int;
	var_69_int = var_61_int;
	int var_62_int = 0;
	
	for(;;) {
		bool var_82_bool = false;
		if(var_62_int < 5) {
			bool var_85_bool;
			func_2599(var_85_bool);
			if(var_85_bool != 0)
				var_82_bool = true;
		}
		if(var_82_bool != 0) {
			if(!var_61_int) { //@nz
				@Sleep(3, var_63_bool);
				if(!var_63_bool) { //@nz
				} else {
			} else {
			@irand(var_64_int, var_61_int);
			@irand(var_65_int, 5);
			if(var_65_int != 0)
				var_64_int = 0;
			string var_96_string; int var_97_int;
			var_64_int = var_97_int;
			func_2898(var_96_string, var_97_int);
			@PlayAnimation("all", var_96_string);
			@WaitForAnimEnd(var_66_bool);
			var_98_bool = !var_66_bool; //@nz
			if(var_98_bool == 0) goto Label_2551;
			goto Label_2562;
			}
				Label_2551:
					bool var_89_bool;
					func_2565(var_89_bool);
					var_90_bool = !var_89_bool; //@nz
					if(var_90_bool == 0) goto Label_2557;
			}
		}
	Label_2562:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2557:
		@ResetAAS();
		var_62_int += 1;
	}
	
}


void func_3266(bool var_63_bool, object var_64_object, int var_65_int)
{
	object var_72_object;
	func_3253(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	object var_70_object;
	var_69_object->Find(var_65_int, var_70_object);
	if(!var_70_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_65_int);
		var_63_bool = false;
	}
	var_70_object->AddChild(var_64_object);
	@SendWorldWndMessage(7);
	int var_71_int;
	var_64_object->GetCategory(var_71_int);
	@SetDiarySection(var_71_int);
	var_63_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_2243(object var_2_object, string var_649_string)
{
	bool var_650_bool;
	func_2930(var_650_bool);
	if(!var_650_bool) //@nz
		return 0;
	if(var_649_string == var_2_object)
		return 0;
	string var_653_string; bool var_654_bool;
	var_649_string = var_653_string;
	if(var_649_string == "")
		var_654_bool = false;
	else
		var_654_bool = true;
	func_2834(var_653_string, var_654_bool);
	var_2_object = var_649_string;
	
}


void func_1474(object var_0_object, int var_494_int, object var_495_object)
{
	var_0_object = var_495_object;
	bool var_505_bool; object var_506_object;
	object var_507_object;
	func_2862(var_507_object);
	var_507_object = var_506_object;
	func_2689(var_505_bool, var_506_object);
	bool var_508_bool; object var_509_object;
	var_495_object = var_509_object;
	func_2604(var_508_bool, var_509_object, 70.0);
	if(!var_508_bool) { //@nz
		var_494_int = -2;
		return 8;
	}
	object var_501_object;
	@CreateDialog(var_501_object);
	int var_512_int;
	func_2924(var_512_int);
	var_501_object->SetNPCName(var_512_int);
	int var_513_int;
	func_2922(var_513_int);
	var_501_object->SetNPCDescription(var_513_int);
	string var_514_string;
	func_2926(var_514_string);
	var_501_object->SetPhoto(var_514_string);
	string var_515_string;
	func_2928(var_515_string);
	var_501_object->SetPhoto2(var_515_string);
	int var_516_int;
	func_3294(var_516_int);
	var_501_object->SetPlayerName(var_516_int);
	bool var_502_bool;
	@IsOverrideActive(var_502_bool);
	if(var_502_bool != 0) {
		var_494_int = -2;
		return 8;
	}
	@DoDialog(var_501_object);
	object var_518_object; object var_519_object;
	var_495_object = var_518_object;
	var_501_object = var_519_object;
	TaskCall(10);
	func_1555(var_520_object, var_521_object, var_522_string, var_523_bool, var_518_object, var_519_object);
	TaskReturn();
	bool var_504_bool;
	var_501_object->IsDialogEnd(var_504_bool);
	
	for(;;) {
		var_561_bool = !var_504_bool; //@nz
		if(var_561_bool == 0) goto Label_1544;
		@sync();
		var_501_object->IsDialogEnd(var_504_bool);
	}
	
Label_1544:
	object var_562_object;
	var_495_object = var_562_object;
	func_2672();
	@StopDialog(var_501_object);
	var_501_object->GetReturnValue(-1);
	int var_503_int = var_494_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1992(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_589_object, object var_590_object)
{
	var_0_object = var_590_object;
	var_1_object = var_589_object;
	var_3_string = false;
	if(1 != 0) {
		func_2045(var_590_object, "Neutral");
		var_0_object->SetMessage(539297); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539298, -1, 41241); //@t
		goto Label_2015;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7cc";
	}
Label_2015:
	bool var_608_bool;
	func_2930(var_608_bool);
	if(var_608_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2827(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2044;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2044:
		return 0;

	}
	
}


// @pe
void func_3021(void)
{
	@SetVariable("ook11Ospina1", 1);
}


void func_464(object var_0_object, int var_57_int, object var_58_object)
{
	var_0_object = var_58_object;
	bool var_68_bool; object var_69_object;
	object var_70_object;
	func_2862(var_70_object);
	var_70_object = var_69_object;
	func_2689(var_68_bool, var_69_object);
	bool var_163_bool; object var_164_object;
	var_58_object = var_164_object;
	func_2604(var_163_bool, var_164_object, 70.0);
	if(!var_163_bool) { //@nz
		var_57_int = -2;
		return 8;
	}
	object var_64_object;
	@CreateDialog(var_64_object);
	int var_210_int;
	func_2924(var_210_int);
	var_64_object->SetNPCName(var_210_int);
	int var_211_int;
	func_2922(var_211_int);
	var_64_object->SetNPCDescription(var_211_int);
	string var_212_string;
	func_2926(var_212_string);
	var_64_object->SetPhoto(var_212_string);
	string var_213_string;
	func_2928(var_213_string);
	var_64_object->SetPhoto2(var_213_string);
	int var_214_int;
	func_3294(var_214_int);
	var_64_object->SetPlayerName(var_214_int);
	bool var_65_bool;
	@IsOverrideActive(var_65_bool);
	if(var_65_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	@DoDialog(var_64_object);
	object var_223_object; object var_224_object;
	var_58_object = var_223_object;
	var_64_object = var_224_object;
	TaskCall(4);
	func_545(var_225_object, var_226_object, var_227_string, var_228_bool, var_223_object, var_224_object);
	TaskReturn();
	bool var_67_bool;
	var_64_object->IsDialogEnd(var_67_bool);
	
	for(;;) {
		var_262_bool = !var_67_bool; //@nz
		if(var_262_bool == 0) goto Label_534;
		@sync();
		var_64_object->IsDialogEnd(var_67_bool);
	}
	
Label_534:
	object var_263_object;
	var_58_object = var_263_object;
	func_2672();
	@StopDialog(var_64_object);
	var_64_object->GetReturnValue(-1);
	int var_66_int = var_57_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3027(bool var_314_bool)
{
	int var_316_int;
	func_2878(var_316_int, "k2q01");
	if(var_316_int == 3)
		var_314_bool = true;
	var_314_bool = false;
}


void func_731(object var_0_object, int var_349_int, object var_350_object)
{
	var_0_object = var_350_object;
	bool var_360_bool; object var_361_object;
	object var_362_object;
	func_2862(var_362_object);
	var_362_object = var_361_object;
	func_2689(var_360_bool, var_361_object);
	bool var_363_bool; object var_364_object;
	var_350_object = var_364_object;
	func_2604(var_363_bool, var_364_object, 70.0);
	if(!var_363_bool) { //@nz
		var_349_int = -2;
		return 8;
	}
	object var_356_object;
	@CreateDialog(var_356_object);
	int var_367_int;
	func_2924(var_367_int);
	var_356_object->SetNPCName(var_367_int);
	int var_368_int;
	func_2922(var_368_int);
	var_356_object->SetNPCDescription(var_368_int);
	string var_369_string;
	func_2926(var_369_string);
	var_356_object->SetPhoto(var_369_string);
	string var_370_string;
	func_2928(var_370_string);
	var_356_object->SetPhoto2(var_370_string);
	int var_371_int;
	func_3294(var_371_int);
	var_356_object->SetPlayerName(var_371_int);
	bool var_357_bool;
	@IsOverrideActive(var_357_bool);
	if(var_357_bool != 0) {
		var_349_int = -2;
		return 8;
	}
	@DoDialog(var_356_object);
	object var_373_object; object var_374_object;
	var_350_object = var_373_object;
	var_356_object = var_374_object;
	TaskCall(6);
	func_812(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object);
	TaskReturn();
	bool var_359_bool;
	var_356_object->IsDialogEnd(var_359_bool);
	
	for(;;) {
		var_423_bool = !var_359_bool; //@nz
		if(var_423_bool == 0) goto Label_801;
		@sync();
		var_356_object->IsDialogEnd(var_359_bool);
	}
	
Label_801:
	object var_424_object;
	var_350_object = var_424_object;
	func_2672();
	@StopDialog(var_356_object);
	var_356_object->GetReturnValue(-1);
	int var_358_int = var_349_int;
}
EMIT "Stack[-4] = 0";


void func_3294(int var_214_int)
{
	int var_216_int;
	@GetVariable("branch", var_216_int);
	if(var_216_int == 0) {
		var_214_int = 1;
		return 2;
	EMIT "GOTO 0xced";
	}
	if(var_216_int == 1) {
		var_214_int = 2;
		return 2;
	}
	var_214_int = 3;
}


// @pe
void func_3039(bool var_325_bool)
{
	int var_327_int;
	func_2878(var_327_int, "k2q01");
	if(var_327_int == 5)
		var_325_bool = true;
	var_325_bool = false;
}


void func_2784(bool var_110_bool, object var_111_object)
{
	bool var_119_bool; int var_120_int; string var_121_string;
	int var_123_int;
	func_2883(var_123_int);
	string var_117_string = ("d" + var_123_int) + "m";
	int var_118_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_111_object->HasProperty((var_117_string + (var_118_int + 1)), var_119_bool);
			if(!var_119_bool) { //@nz
			} else {
				var_118_int += 1;
			}
		}
		if(!var_118_int) { //@nz
			var_110_bool = false;
			return 10;
		}
		var_120_int = 0;
		if(var_118_int > 1)
			@irand(var_120_int, var_118_int);
		var_111_object->GetProperty((var_117_string + (var_120_int + 1)), var_121_string);
		bool var_142_bool; string var_143_string;
		var_121_string = var_143_string;
		func_2840(var_142_bool, var_143_string);
		var_142_bool = var_110_bool;
		return 10;

	}
}


// @pe
void func_3051(bool var_391_bool)
{
	int var_393_int;
	func_2878(var_393_int, "k6q01");
	if(var_393_int == 2)
		var_391_bool = true;
	var_391_bool = false;
}


// @pe
void func_3311(object var_54_object)
{
	var_55_bool = GlobalVars[1];
	if(!var_55_bool) { //@nz
		int var_57_int; object var_58_object;
		var_54_object = var_58_object;
		TaskCall(3);
		func_464(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_270_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_271_bool;
	func_2892(var_271_bool, 2);
	if(var_271_bool != 0) {
		int var_274_int; object var_275_object;
		var_54_object = var_275_object;
		TaskCall(1);
		func_13(var_276_object, var_274_int, var_275_object);
		TaskReturn();
		return 0;
	}
	bool var_347_bool;
	func_2892(var_347_bool, 6);
	if(var_347_bool != 0) {
		int var_349_int; object var_350_object;
		var_54_object = var_350_object;
		TaskCall(5);
		func_731(var_351_object, var_349_int, var_350_object);
		TaskReturn();
		return 0;
	}
	bool var_425_bool;
	func_2892(var_425_bool, 8);
	if(var_425_bool != 0) {
		int var_427_int; object var_428_object;
		var_54_object = var_428_object;
		TaskCall(7);
		func_1055(var_429_object, var_427_int, var_428_object);
		TaskReturn();
		return 0;
	}
	bool var_492_bool;
	func_2892(var_492_bool, 11);
	if(var_492_bool != 0) {
		int var_494_int; object var_495_object;
		var_54_object = var_495_object;
		TaskCall(9);
		func_1474(var_496_object, var_494_int, var_495_object);
		TaskReturn();
		return 0;
	}
	bool var_563_bool;
	func_2892(var_563_bool, 12);
	if(var_563_bool != 0) {
		int var_565_int; object var_566_object;
		var_54_object = var_566_object;
		TaskCall(11);
		func_1911(var_567_object, var_565_int, var_566_object);
		TaskReturn();
		return 0;
	}
	int var_618_int; object var_619_object;
	var_54_object = var_619_object;
	TaskCall(13);
	func_2104(var_620_object, var_618_int, var_619_object);
	TaskReturn();
}


// @pe
void func_3063(bool var_397_bool)
{
	int var_399_int;
	func_2878(var_399_int, "k6q01DankoPos");
	if(var_399_int > 3)
		var_397_bool = true;
	var_397_bool = false;
}


// @pe
void func_2045(object var_2_object, string var_596_string)
{
	bool var_597_bool;
	func_2930(var_597_bool);
	if(!var_597_bool) //@nz
		return 0;
	if(var_596_string == var_2_object)
		return 0;
	string var_600_string; bool var_601_bool;
	var_596_string = var_600_string;
	if(var_596_string == "")
		var_601_bool = false;
	else
		var_601_bool = true;
	func_2834(var_600_string, var_601_bool);
	var_2_object = var_596_string;
	
}


