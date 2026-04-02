// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		func_8629();
		bool var_41_bool;
		func_6795(var_41_bool);
		if(!var_41_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_6860("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_41_object;
		var_40_bool = var_41_object;
		func_8633(var_41_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool)
	{
		object var_42_object;
		var_40_bool = var_42_object;
		bool var_41_bool;
		func_6783(var_41_bool, var_42_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_40_string == 336) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7573();
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(288, 340, 337); //@t
				var_0_object->AddReply(289, 340, 338); //@t
				var_0_object->AddReply(290, 340, 339); //@t
				return 0;
			}
			if(var_40_string == 340) {
				func_180(var_41_bool, "Neutral");
				var_0_object->SetMessage(291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(292, -1, 341); //@t
				var_0_object->AddReply(293, -1, 342); //@t
				return 0;
			}
			var_3_string = true;
			bool var_85_bool;
			func_7001(var_85_bool);
			if(var_85_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 13846) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7579();
			}
			if(var_41_bool == 13851) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_7579();
			}
			if(var_41_bool == 13904) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_7579();
			}
			if(var_41_bool == 13829) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_7533();
			}
			if(var_41_bool == 13840) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_7539();
			}
			if(var_41_bool == 13195) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_7545();
			}
			if(var_41_bool == 11744) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_7551();
			}
			if(var_41_bool == 11745) {
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_7551();
			}
			if(var_41_bool == 11756) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_7551();
			}
			if(var_41_bool == 11759) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_7551();
			}
			if(var_41_bool == 11760) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_7551();
			}
			if(var_40_string == 13830) {
				bool var_155_bool = false;
				bool var_156_bool;
				func_8133(var_1_object);
				if(var_156_bool != 0) {
					bool var_164_bool;
					func_8145(var_1_object);
					if(var_164_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0) {
					object var_170_object; object var_171_object;
					var_170_object = var_1_object;
					var_171_object = var_0_object;
					func_7527();
					func_483(var_41_bool, "Neutral");
					var_0_object->SetMessage(12650); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10633, 13839, 11732); //@t
					var_0_object->AddReply(10665, 11772, 11771); //@t
					return 0;
				}
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(11979); //@t
				var_0_object->ClearReplies(); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_8157(var_1_object);
				if(var_199_bool != 0) {
					bool var_205_bool;
					func_8073(var_1_object);
					if(var_205_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_object->AddReply(12649, 13832, 13829); //@t
				bool var_214_bool = false;
				bool var_215_bool;
				func_8169(var_1_object);
				if(var_215_bool != 0) {
					bool var_221_bool;
					func_8073(var_1_object);
					if(var_221_bool != 0)
						var_214_bool = true;
				}
				if(var_214_bool != 0)
					var_0_object->AddReply(12660, 13832, 13840); //@t
				bool var_226_bool = false;
				bool var_227_bool;
				func_8181(var_1_object);
				if(var_227_bool != 0) {
					bool var_233_bool;
					func_8193(var_1_object);
					if(var_233_bool != 0)
						var_226_bool = true;
				}
				if(var_226_bool != 0)
					var_0_object->AddReply(11980, 13196, 13195); //@t
				var_0_object->AddReply(13018, -1, 14224); //@t
				return 0;
			}
			if(var_40_string == 13196) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(11981); //@t
				var_0_object->ClearReplies(); //@t
				bool var_249_bool;
				func_7829(var_249_bool, var_1_object);
				if(var_249_bool != 0)
					var_0_object->AddReply(11982, 13198, 13197); //@t
				var_0_object->AddReply(12658, 11733, 13838); //@t
				return 0;
			}
			if(var_40_string == 11733) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10635, 11735, 11734); //@t
				var_0_object->AddReply(10660, 11766, 11763); //@t
				var_0_object->AddReply(10661, 11766, 11765); //@t
				return 0;
			}
			if(var_40_string == 11766) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10663, 11735, 11767); //@t
				var_0_object->AddReply(10664, 11735, 11769); //@t
				return 0;
			}
			if(var_40_string == 11735) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10637, 11737, 11736); //@t
				var_0_object->AddReply(10647, 11749, 11748); //@t
				return 0;
			}
			if(var_40_string == 11749) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10649, 11737, 11750); //@t
				var_0_object->AddReply(10650, 11753, 11752); //@t
				return 0;
			}
			if(var_40_string == 11753) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10652, 11755, 11754); //@t
				var_0_object->AddReply(10659, 11755, 11761); //@t
				return 0;
			}
			if(var_40_string == 11755) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10653); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10654, -1, 11756); //@t
				var_0_object->AddReply(10655, 11758, 11757); //@t
				return 0;
			}
			if(var_40_string == 11758) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10657, -1, 11759); //@t
				var_0_object->AddReply(10658, -1, 11760); //@t
				return 0;
			}
			if(var_40_string == 11737) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10642, 11743, 11742); //@t
				var_0_object->AddReply(10639, 11739, 11738); //@t
				var_0_object->AddReply(10646, 11739, 11746); //@t
				return 0;
			}
			if(var_40_string == 11739) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10641, 11755, 11740); //@t
				return 0;
			}
			if(var_40_string == 11743) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10644, -1, 11744); //@t
				var_0_object->AddReply(10645, -1, 11745); //@t
				return 0;
			}
			if(var_40_string == 13198) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(11983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11984, 13200, 13199); //@t
				return 0;
			}
			if(var_40_string == 13200) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(11985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11986, -1, 13201); //@t
				return 0;
			}
			if(var_40_string == 13832) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12653, 13834, 13833); //@t
				return 0;
			}
			if(var_40_string == 13834) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12655, -1, 13835); //@t
				return 0;
			}
			if(var_40_string == 11772) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10668, 11776, 11775); //@t
				return 0;
			}
			if(var_40_string == 11776) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(10669); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10670, 13839, 11777); //@t
				return 0;
			}
			if(var_40_string == 13839) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12659); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12648, 13831, 13828); //@t
				return 0;
			}
			if(var_40_string == 13831) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12651); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12656, 13837, 13836); //@t
				var_0_object->AddReply(12695, 13887, 13886); //@t
				var_0_object->AddReply(12701, 13897, 13892); //@t
				return 0;
			}
			if(var_40_string == 13897) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12706); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12707, 13899, 13898); //@t
				return 0;
			}
			if(var_40_string == 13899) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12708); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12709, 13901, 13900); //@t
				var_0_object->AddReply(12715, 13901, 13906); //@t
				return 0;
			}
			if(var_40_string == 13901) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12710); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12711, 13903, 13902); //@t
				var_0_object->AddReply(12714, -1, 13905); //@t
				return 0;
			}
			if(var_40_string == 13903) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12713, -1, 13904); //@t
				return 0;
			}
			if(var_40_string == 13887) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12700, -1, 13891); //@t
				return 0;
			}
			if(var_40_string == 13837) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12657); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12661, 13843, 13842); //@t
				var_0_object->AddReply(12667, 13843, 13849); //@t
				return 0;
			}
			if(var_40_string == 13843) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12663, 13845, 13844); //@t
				return 0;
			}
			if(var_40_string == 13845) {
				func_483(var_41_bool, "Neutral");
				var_0_object->SetMessage(12664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12665, -1, 13846); //@t
				var_0_object->AddReply(12668, -1, 13851); //@t
				return 0;
			}
			var_3_string = true;
			bool var_492_bool;
			func_7001(var_492_bool);
			if(var_492_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1f4";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 5906) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7003();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7194();
			}
			if(var_41_bool == 5766) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_7009();
			}
			if(var_41_bool == 5767) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_7009();
			}
			if(var_41_bool == 5743) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_7015();
			}
			if(var_41_bool == 5753) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_7021();
			}
			if(var_41_bool == 5754) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_7021();
			}
			if(var_41_bool == 5757) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_7021();
			}
			if(var_41_bool == 5758) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_7021();
			}
			if(var_41_bool == 7040) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_7039();
			}
			if(var_41_bool == 7046) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_7045();
			}
			if(var_41_bool == 7054) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_7051();
			}
			if(var_41_bool == 7064) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_7057();
			}
			if(var_41_bool == 7075) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_7063();
			}
			if(var_41_bool == 7086) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_7069();
			}
			if(var_41_bool == 7089) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_7069();
			}
			if(var_41_bool == 7095) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_7075();
			}
			if(var_41_bool == 7099) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_7081();
			}
			if(var_41_bool == 7100) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_7081();
			}
			if(var_40_string == 5734) {
				bool var_160_bool;
				func_7625(var_1_object);
				if(var_160_bool != 0) {
					func_1732(var_41_bool, "Neutral");
					var_0_object->SetMessage(5205); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5206, 5905, 5735); //@t
					var_0_object->AddReply(5365, 5908, 5907); //@t
					return 0;
				}
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6325); //@t
				var_0_object->ClearReplies(); //@t
				bool var_192_bool = false;
				bool var_193_bool;
				func_7637(var_1_object);
				if(var_193_bool != 0) {
					bool var_199_bool;
					func_7673(var_1_object);
					if(var_199_bool != 0)
						var_192_bool = true;
				}
				if(var_192_bool != 0)
					var_0_object->AddReply(6329, 5761, 6985); //@t
				bool var_208_bool = true;
				bool var_209_bool = false;
				bool var_210_bool = false;
				bool var_211_bool;
				func_7964(var_211_bool, var_1_object);
				if(var_211_bool != 0) {
					bool var_222_bool;
					func_7649(var_1_object);
					if(var_222_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0) {
					bool var_228_bool;
					func_7673(var_1_object);
					if(var_228_bool != 0)
						var_209_bool = true;
				}
				if(var_209_bool != 1) {
					bool var_230_bool = false;
					bool var_231_bool = false;
					bool var_232_bool;
					func_8046(var_232_bool, var_1_object);
					if(var_232_bool != 0) {
						bool var_243_bool;
						func_7649(var_1_object);
						if(var_243_bool != 0)
							var_231_bool = true;
					}
					if(var_231_bool != 0) {
						bool var_245_bool;
						func_7673(var_1_object);
						if(var_245_bool != 0)
							var_230_bool = true;
					}
					if(var_230_bool != 1)
						var_208_bool = false;
				}
				if(var_208_bool != 0)
					var_0_object->AddReply(6326, 5738, 6982); //@t
				bool var_250_bool = true;
				bool var_251_bool = false;
				bool var_252_bool = false;
				bool var_253_bool;
				func_8046(var_253_bool, var_1_object);
				if(var_253_bool != 0) {
					bool var_255_bool;
					func_7661(var_1_object);
					if(var_255_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0) {
					bool var_261_bool;
					func_7673(var_1_object);
					if(var_261_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 1) {
					bool var_263_bool = false;
					bool var_264_bool = false;
					bool var_265_bool;
					func_7964(var_265_bool, var_1_object);
					if(var_265_bool != 0) {
						bool var_267_bool;
						func_7661(var_1_object);
						if(var_267_bool != 0)
							var_264_bool = true;
					}
					if(var_264_bool != 0) {
						bool var_269_bool;
						func_7673(var_1_object);
						if(var_269_bool != 0)
							var_263_bool = true;
					}
					if(var_263_bool != 1)
						var_250_bool = false;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(6354, 5748, 7010); //@t
				bool var_274_bool = false;
				bool var_275_bool;
				func_8289(var_1_object);
				if(var_275_bool != 0) {
					bool var_281_bool;
					func_7685(var_1_object);
					if(var_281_bool != 0)
						var_274_bool = true;
				}
				if(var_274_bool != 0)
					var_0_object->AddReply(6330, 7035, 6986); //@t
				bool var_290_bool = false;
				bool var_291_bool;
				func_8265(var_1_object);
				if(var_291_bool != 0) {
					bool var_297_bool;
					func_7697(var_1_object);
					if(var_297_bool != 0)
						var_290_bool = true;
				}
				if(var_290_bool != 0)
					var_0_object->AddReply(6337, 7041, 6993); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_8277(var_1_object);
				if(var_307_bool != 0) {
					bool var_313_bool;
					func_7709(var_1_object);
					if(var_313_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(6332, 7047, 6988); //@t
				bool var_322_bool = false;
				bool var_323_bool = false;
				bool var_324_bool;
				func_8241(var_1_object);
				if(var_324_bool != 0) {
					bool var_330_bool;
					func_7721(var_1_object);
					if(var_330_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0) {
					bool var_336_bool;
					func_7673(var_1_object);
					if(var_336_bool != 0)
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(6339, 7055, 6995); //@t
				bool var_341_bool = false;
				bool var_342_bool;
				func_8229(var_1_object);
				if(var_342_bool != 0) {
					bool var_348_bool;
					func_7733(var_1_object);
					if(var_348_bool != 0)
						var_341_bool = true;
				}
				if(var_341_bool != 0)
					var_0_object->AddReply(6340, 7065, 6996); //@t
				bool var_357_bool = false;
				bool var_358_bool;
				func_8253(var_1_object);
				if(var_358_bool != 0) {
					bool var_364_bool;
					func_7745(var_1_object);
					if(var_364_bool != 0)
						var_357_bool = true;
				}
				if(var_357_bool != 0)
					var_0_object->AddReply(6344, 7083, 7000); //@t
				bool var_373_bool = false;
				bool var_374_bool;
				func_8301(var_1_object);
				if(var_374_bool != 0) {
					bool var_380_bool;
					func_7757(var_1_object);
					if(var_380_bool != 0)
						var_373_bool = true;
				}
				if(var_373_bool != 0)
					var_0_object->AddReply(6345, 7090, 7001); //@t
				bool var_389_bool = false;
				bool var_390_bool;
				func_7940(var_1_object);
				if(var_390_bool != 0) {
					bool var_396_bool;
					func_7769(var_1_object);
					if(var_396_bool != 0)
						var_389_bool = true;
				}
				if(var_389_bool != 0)
					var_0_object->AddReply(6346, 7096, 7002); //@t
				var_0_object->AddReply(7537, -1, 8319); //@t
				return 0;
			}
			if(var_40_string == 7096) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6434, 7098, 7097); //@t
				return 0;
			}
			if(var_40_string == 7098) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6436, -1, 7099); //@t
				var_0_object->AddReply(6437, -1, 7100); //@t
				return 0;
			}
			if(var_40_string == 7090) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6428, 7092, 7091); //@t
				return 0;
			}
			if(var_40_string == 7092) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6430, 7094, 7093); //@t
				return 0;
			}
			if(var_40_string == 7094) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6432, -1, 7095); //@t
				return 0;
			}
			if(var_40_string == 7083) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6420); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6421, 7085, 7084); //@t
				return 0;
			}
			if(var_40_string == 7085) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6423, -1, 7086); //@t
				var_0_object->AddReply(6424, 7088, 7087); //@t
				return 0;
			}
			if(var_40_string == 7088) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6426, -1, 7089); //@t
				return 0;
			}
			if(var_40_string == 7065) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6406); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6407, 7068, 7066); //@t
				var_0_object->AddReply(6408, 7068, 7067); //@t
				return 0;
			}
			if(var_40_string == 7068) {
				bool var_482_bool;
				func_8313(var_1_object);
				if(var_482_bool != 0) {
					func_1732(var_41_bool, "Neutral");
					var_0_object->SetMessage(6409); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6410, 7070, 7069); //@t
					var_0_object->AddReply(6413, 7074, 7073); //@t
					bool var_496_bool;
					func_8313(var_1_object);
					if(!var_496_bool) //@nz
						var_0_object->AddReply(6416, 7079, 7078); //@t
					return 0;
				}
			}
			if(var_40_string == 7079) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6418, 7070, 7080); //@t
				return 0;
			}
			if(var_40_string == 7070) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6412, 7074, 7072); //@t
				return 0;
			}
			if(var_40_string == 7074) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6414); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6415, -1, 7075); //@t
				return 0;
			}
			if(var_40_string == 7055) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6398, 7057, 7056); //@t
				var_0_object->AddReply(6400, 7059, 7058); //@t
				return 0;
			}
			if(var_40_string == 7059) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6402, 7057, 7060); //@t
				return 0;
			}
			if(var_40_string == 7057) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6399); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6403, 7063, 7062); //@t
				return 0;
			}
			if(var_40_string == 7063) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6405, -1, 7064); //@t
				return 0;
			}
			if(var_40_string == 7047) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6391, 7049, 7048); //@t
				return 0;
			}
			if(var_40_string == 7049) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6394, 7052, 7051); //@t
				var_0_object->AddReply(6393, 7052, 7050); //@t
				return 0;
			}
			if(var_40_string == 7052) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6395); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6396, -1, 7054); //@t
				return 0;
			}
			if(var_40_string == 7041) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6385); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6386, 7043, 7042); //@t
				var_0_object->AddReply(6388, 7043, 7044); //@t
				return 0;
			}
			if(var_40_string == 7043) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6389, -1, 7046); //@t
				return 0;
			}
			if(var_40_string == 7035) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6380, 7037, 7036); //@t
				return 0;
			}
			if(var_40_string == 7037) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6382, 7039, 7038); //@t
				return 0;
			}
			if(var_40_string == 7039) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(6383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6384, -1, 7040); //@t
				return 0;
			}
			if(var_40_string == 5748) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5218, 5750, 5749); //@t
				var_0_object->AddReply(5226, -1, 5758); //@t
				var_0_object->AddReply(5227, 5750, 5759); //@t
				return 0;
			}
			if(var_40_string == 5750) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5220, 5752, 5751); //@t
				var_0_object->AddReply(5224, 5752, 5755); //@t
				var_0_object->AddReply(5225, -1, 5757); //@t
				return 0;
			}
			if(var_40_string == 5752) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5222, -1, 5753); //@t
				var_0_object->AddReply(5223, -1, 5754); //@t
				return 0;
			}
			if(var_40_string == 5738) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5210, 5740, 5739); //@t
				var_0_object->AddReply(5216, 5740, 5746); //@t
				return 0;
			}
			if(var_40_string == 5740) {
				func_1732(var_41_bool, "Pain");
				var_0_object->SetMessage(5211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5212, 5742, 5741); //@t
				var_0_object->AddReply(5215, 5742, 5744); //@t
				return 0;
			}
			if(var_40_string == 5742) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5214, -1, 5743); //@t
				return 0;
			}
			if(var_40_string == 5761) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5229, 5763, 5762); //@t
				var_0_object->AddReply(5236, 5763, 5770); //@t
				return 0;
			}
			if(var_40_string == 5763) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5231, 5765, 5764); //@t
				var_0_object->AddReply(5235, 5765, 5768); //@t
				return 0;
			}
			if(var_40_string == 5765) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5233, -1, 5766); //@t
				var_0_object->AddReply(5234, -1, 5767); //@t
				return 0;
			}
			if(var_40_string == 5908) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5367, 5910, 5909); //@t
				var_0_object->AddReply(5369, 5905, 5911); //@t
				return 0;
			}
			if(var_40_string == 5910) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5370, 5905, 5913); //@t
				var_0_object->AddReply(5371, 5905, 5914); //@t
				return 0;
			}
			if(var_40_string == 5905) {
				func_1732(var_41_bool, "Neutral");
				var_0_object->SetMessage(5363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5364, -1, 5906); //@t
				return 0;
			}
			var_3_string = true;
			bool var_736_bool;
			func_7001(var_736_bool);
			if(var_736_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d5";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 7775) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7087();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7111();
				object var_112_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_41_bool == 7779) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_7087();
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_7111();
				object var_144_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_41_bool == 7780) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_7087();
			}
			if(var_41_bool == 7783) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_7087();
			}
			if(var_41_bool == 7790) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_7093();
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_7141();
			}
			if(var_41_bool == 7791) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_7093();
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_7141();
			}
			if(var_41_bool == 7436) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_7093();
			}
			if(var_41_bool == 7284) {
				object var_189_object = var_1_object;
				func_7314(var_0_object);
			}
			if(var_41_bool == 7795) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_7099();
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_7151();
				object var_227_object = var_1_object;
				func_7314(var_0_object);
				object var_229_object = var_1_object;
				func_7298(var_0_object);
			}
			if(var_41_bool == 7798) {
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_object;
				func_7099();
				object var_240_object; object var_241_object;
				var_240_object = var_1_object;
				var_241_object = var_0_object;
				func_7151();
				object var_242_object = var_1_object;
				func_7314(var_0_object);
				object var_244_object = var_1_object;
				func_7298(var_0_object);
			}
			if(var_41_bool == 7799) {
				object var_248_object; object var_249_object;
				var_248_object = var_1_object;
				var_249_object = var_0_object;
				func_7099();
				object var_250_object; object var_251_object;
				var_250_object = var_1_object;
				var_251_object = var_0_object;
				func_7151();
				object var_252_object = var_1_object;
				func_7314(var_0_object);
				object var_254_object = var_1_object;
				func_7298(var_0_object);
			}
			if(var_41_bool == 7801) {
				object var_258_object; object var_259_object;
				var_258_object = var_1_object;
				var_259_object = var_0_object;
				func_7111();
				object var_260_object = var_1_object;
				func_7210(var_0_object);
			}
			if(var_41_bool == 7410) {
				object var_264_object; object var_265_object;
				var_264_object = var_1_object;
				var_265_object = var_0_object;
				func_7105();
			}
			if(var_41_bool == 7411) {
				object var_270_object; object var_271_object;
				var_270_object = var_1_object;
				var_271_object = var_0_object;
				func_7105();
			}
			if(var_41_bool == 7414) {
				object var_274_object; object var_275_object;
				var_274_object = var_1_object;
				var_275_object = var_0_object;
				func_7105();
			}
			if(var_41_bool == 7416) {
				object var_278_object; object var_279_object;
				var_278_object = var_1_object;
				var_279_object = var_0_object;
				func_7105();
			}
			if(var_40_string == 7279) {
				bool var_282_bool;
				func_7781(var_1_object);
				if(var_282_bool != 0) {
					object var_290_object; object var_291_object;
					var_290_object = var_1_object;
					var_291_object = var_0_object;
					func_7616();
					func_3264(var_41_bool, "Neutral");
					var_0_object->SetMessage(6610); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6611, 7748, 7280); //@t
					var_0_object->AddReply(7066, 7748, 7784); //@t
					return 0;
				}
				bool var_318_bool = false;
				bool var_319_bool = false;
				bool var_320_bool;
				func_7793(var_1_object);
				if(var_320_bool != 0) {
					bool var_326_bool;
					func_7863(var_1_object);
					if(var_326_bool != 0)
						var_319_bool = true;
				}
				if(var_319_bool != 0) {
					bool var_328_bool;
					func_7868(var_1_object);
					if(var_328_bool != 0)
						var_318_bool = true;
				}
				if(var_318_bool != 0) {
					func_3264(var_41_bool, "Neutral");
					var_0_object->SetMessage(6731); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6732, 7420, 7419); //@t
					var_0_object->AddReply(6742, 7420, 7430); //@t
					var_0_object->AddReply(6743, 7433, 7432); //@t
					return 0;
				}
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6614); //@t
				var_0_object->ClearReplies(); //@t
				bool var_347_bool = false;
				bool var_348_bool;
				func_7805(var_1_object);
				if(var_348_bool != 0) {
					bool var_354_bool;
					func_7851(var_1_object);
					if(var_354_bool != 0)
						var_347_bool = true;
				}
				if(var_347_bool != 0)
					var_0_object->AddReply(6615, 7282, 7284); //@t
				bool var_363_bool;
				func_7839(var_1_object);
				if(var_363_bool != 0)
					var_0_object->AddReply(6618, 7800, 7287); //@t
				bool var_372_bool;
				func_7817(var_1_object);
				if(var_372_bool != 0)
					var_0_object->AddReply(6730, 7405, 7417); //@t
				var_0_object->AddReply(7071, 7802, 7794); //@t
				var_0_object->AddReply(7532, -1, 8314); //@t
				return 0;
			}
			if(var_40_string == 7802) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7080, 7805, 7803); //@t
				var_0_object->AddReply(7081, -1, 7804); //@t
				return 0;
			}
			if(var_40_string == 7805) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7083, -1, 7806); //@t
				return 0;
			}
			if(var_40_string == 7405) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6719, 7407, 7406); //@t
				var_0_object->AddReply(6729, -1, 7416); //@t
				return 0;
			}
			if(var_40_string == 7407) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6720); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6721, 7409, 7408); //@t
				var_0_object->AddReply(6725, 7413, 7412); //@t
				return 0;
			}
			if(var_40_string == 7413) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6727, -1, 7414); //@t
				return 0;
			}
			if(var_40_string == 7409) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6723, -1, 7410); //@t
				var_0_object->AddReply(6724, -1, 7411); //@t
				return 0;
			}
			if(var_40_string == 7800) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7078, -1, 7801); //@t
				return 0;
			}
			if(var_40_string == 7282) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7072, -1, 7795); //@t
				var_0_object->AddReply(7073, 7797, 7796); //@t
				return 0;
			}
			if(var_40_string == 7797) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7075, -1, 7798); //@t
				var_0_object->AddReply(7076, -1, 7799); //@t
				return 0;
			}
			if(var_40_string == 7433) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6745, 7420, 7434); //@t
				var_0_object->AddReply(6746, -1, 7436); //@t
				return 0;
			}
			if(var_40_string == 7420) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6734, 7422, 7421); //@t
				var_0_object->AddReply(6741, 7422, 7428); //@t
				return 0;
			}
			if(var_40_string == 7422) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6737, 7425, 7424); //@t
				var_0_object->AddReply(6736, 7789, 7423); //@t
				return 0;
			}
			if(var_40_string == 7425) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(6738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6739, 7789, 7426); //@t
				var_0_object->AddReply(6740, 7789, 7427); //@t
				return 0;
			}
			if(var_40_string == 7789) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7069, -1, 7790); //@t
				var_0_object->AddReply(7070, -1, 7791); //@t
				return 0;
			}
			if(var_40_string == 7748) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7035, 7750, 7749); //@t
				var_0_object->AddReply(7051, 7766, 7765); //@t
				return 0;
			}
			if(var_40_string == 7766) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7052); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7053, 7750, 7767); //@t
				return 0;
			}
			if(var_40_string == 7750) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7037, 7752, 7751); //@t
				return 0;
			}
			if(var_40_string == 7752) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7039, 7754, 7753); //@t
				var_0_object->AddReply(7048, 7763, 7762); //@t
				return 0;
			}
			if(var_40_string == 7763) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7054, 7759, 7770); //@t
				return 0;
			}
			if(var_40_string == 7754) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7043, 7759, 7757); //@t
				var_0_object->AddReply(7041, 7756, 7755); //@t
				return 0;
			}
			if(var_40_string == 7756) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7044, 7759, 7758); //@t
				return 0;
			}
			if(var_40_string == 7759) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7046, 7761, 7760); //@t
				var_0_object->AddReply(7067, 7761, 7787); //@t
				var_0_object->AddReply(7055, 7773, 7772); //@t
				return 0;
			}
			if(var_40_string == 7773) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7057, 7761, 7774); //@t
				return 0;
			}
			if(var_40_string == 7761) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7058, -1, 7775); //@t
				var_0_object->AddReply(7059, 7778, 7777); //@t
				return 0;
			}
			if(var_40_string == 7778) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7061, -1, 7779); //@t
				var_0_object->AddReply(7062, -1, 7780); //@t
				var_0_object->AddReply(7063, 7782, 7781); //@t
				return 0;
			}
			if(var_40_string == 7782) {
				func_3264(var_41_bool, "Neutral");
				var_0_object->SetMessage(7064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7065, -1, 7783); //@t
				return 0;
			}
			var_3_string = true;
			bool var_626_bool;
			func_7001(var_626_bool);
			if(var_626_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd1";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 9978) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7260();
			}
			if(var_41_bool == 9979) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7260();
			}
			if(var_41_bool == 9724) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_7248();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_7266();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_7254();
				object var_114_object = var_1_object;
				func_7226(var_0_object);
			}
			if(var_41_bool == 9704) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_7242();
			}
			if(var_41_bool == 13182) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_7513();
			}
			if(var_41_bool == 13183) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_7513();
			}
			if(var_41_bool == 13184) {
				object var_156_object; object var_157_object;
				var_156_object = var_1_object;
				var_157_object = var_0_object;
				func_7513();
			}
			if(var_40_string == 9964) {
				bool var_160_bool = false;
				bool var_161_bool;
				func_7928(var_1_object);
				if(var_161_bool != 0) {
					bool var_169_bool;
					func_7916(var_1_object);
					if(var_169_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0) {
					func_4409(var_41_bool, "Neutral");
					var_0_object->SetMessage(9086); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9087, 9969, 9965); //@t
					var_0_object->AddReply(9088, 9967, 9966); //@t
					return 0;
				}
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8854); //@t
				var_0_object->ClearReplies(); //@t
				bool var_199_bool = false;
				bool var_200_bool;
				func_7892(var_1_object);
				if(var_200_bool != 0) {
					bool var_206_bool;
					func_7952(var_1_object);
					if(var_206_bool != 0)
						var_199_bool = true;
				}
				if(var_199_bool != 0)
					var_0_object->AddReply(8840, 9693, 9692); //@t
				bool var_215_bool;
				func_7880(var_1_object);
				if(var_215_bool != 0)
					var_0_object->AddReply(8855, 9687, 9711); //@t
				bool var_224_bool;
				func_7904(var_1_object);
				if(var_224_bool != 0)
					var_0_object->AddReply(8856, 9691, 9712); //@t
				bool var_233_bool;
				func_8068(var_1_object);
				if(var_233_bool != 0)
					var_0_object->AddReply(11978, 13175, 13193); //@t
				var_0_object->AddReply(11133, -1, 12322); //@t
				return 0;
			}
			if(var_40_string == 13175) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(11964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11965, 13177, 13176); //@t
				var_0_object->AddReply(11976, 13177, 13189); //@t
				var_0_object->AddReply(11977, 13177, 13191); //@t
				return 0;
			}
			if(var_40_string == 13177) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(11966); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11967, 13179, 13178); //@t
				var_0_object->AddReply(11975, 13179, 13187); //@t
				return 0;
			}
			if(var_40_string == 13179) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(11968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11969, 13181, 13180); //@t
				var_0_object->AddReply(11974, 13181, 13185); //@t
				return 0;
			}
			if(var_40_string == 13181) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(11970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11971, -1, 13182); //@t
				var_0_object->AddReply(11972, -1, 13183); //@t
				var_0_object->AddReply(11973, -1, 13184); //@t
				return 0;
			}
			if(var_40_string == 9691) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8857, 9714, 9713); //@t
				return 0;
			}
			if(var_40_string == 9714) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8859, 9693, 9715); //@t
				return 0;
			}
			if(var_40_string == 9687) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8836, 9689, 9688); //@t
				var_0_object->AddReply(8852, 9689, 9706); //@t
				var_0_object->AddReply(8853, 9689, 9708); //@t
				return 0;
			}
			if(var_40_string == 9689) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8849, 9703, 9702); //@t
				return 0;
			}
			if(var_40_string == 9703) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8851, -1, 9704); //@t
				return 0;
			}
			if(var_40_string == 9693) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8842, 9695, 9694); //@t
				var_0_object->AddReply(8846, 9699, 9698); //@t
				var_0_object->AddReply(8861, 9719, 9718); //@t
				return 0;
			}
			if(var_40_string == 9719) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8863, 9716, 9720); //@t
				var_0_object->AddReply(8867, 9695, 9725); //@t
				return 0;
			}
			if(var_40_string == 9699) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8848, 9695, 9700); //@t
				return 0;
			}
			if(var_40_string == 9695) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8844, 9716, 9696); //@t
				var_0_object->AddReply(8845, 9716, 9697); //@t
				return 0;
			}
			if(var_40_string == 9716) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8864, 9723, 9722); //@t
				return 0;
			}
			if(var_40_string == 9723) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(8865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8866, -1, 9724); //@t
				return 0;
			}
			if(var_40_string == 9967) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(9089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9090, 9969, 9968); //@t
				return 0;
			}
			if(var_40_string == 9969) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(9091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9092, 9971, 9970); //@t
				return 0;
			}
			if(var_40_string == 9971) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(9093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9094, 9974, 9973); //@t
				return 0;
			}
			if(var_40_string == 9974) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(9095); //@t
				var_0_object->ClearReplies(); //@t
				bool var_407_bool;
				func_7916(var_1_object);
				if(var_407_bool != 0)
					var_0_object->AddReply(9096, -1, 9975); //@t
				var_0_object->AddReply(9097, 9977, 9976); //@t
				return 0;
			}
			if(var_40_string == 9977) {
				func_4409(var_41_bool, "Neutral");
				var_0_object->SetMessage(9098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9099, -1, 9978); //@t
				var_0_object->AddReply(9100, -1, 9979); //@t
				return 0;
			}
			var_3_string = true;
			bool var_425_bool;
			func_7001(var_425_bool);
			if(var_425_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x114a";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 12370) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7323();
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_7329();
				object var_115_object = var_1_object;
				func_7476(var_0_object);
				object var_134_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 12371) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_7323();
			}
			if(var_41_bool == 12695) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_7329();
				object var_168_object = var_1_object;
				func_7476(var_0_object);
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_7033();
				object var_174_object = var_1_object;
				func_7364(var_0_object);
			}
			if(var_41_bool == 12376) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_7380();
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_7386();
				object var_203_object = var_1_object;
				func_7460(var_0_object);
			}
			if(var_41_bool == 12377) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_7380();
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_7386();
				object var_216_object = var_1_object;
				func_7460(var_0_object);
			}
			if(var_41_bool == 12702) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_7487();
				object var_224_object = var_1_object;
				func_7183(var_0_object);
				object var_233_object; object var_234_object;
				var_233_object = var_1_object;
				var_234_object = var_0_object;
				func_7027();
				object var_237_object; object var_238_object;
				var_237_object = var_1_object;
				var_238_object = var_0_object;
				func_7409();
			}
			if(var_40_string == 12359) {
				bool var_271_bool;
				func_7974(var_1_object);
				if(var_271_bool != 0) {
					func_5250(var_41_bool, "Neutral");
					var_0_object->SetMessage(11175); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11176, 12361, 12360); //@t
					var_0_object->AddReply(11178, 12366, 12362); //@t
					return 0;
				}
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11164); //@t
				var_0_object->ClearReplies(); //@t
				bool var_303_bool;
				func_7986(var_1_object);
				if(var_303_bool != 0)
					var_0_object->AddReply(11489, 12692, 12691); //@t
				bool var_312_bool = false;
				bool var_313_bool;
				func_7998(var_1_object);
				if(var_313_bool != 0) {
					bool var_319_bool;
					func_8010(var_1_object);
					if(var_319_bool != 0)
						var_312_bool = true;
				}
				if(var_312_bool != 0)
					var_0_object->AddReply(11187, 12373, 12372); //@t
				bool var_328_bool = false;
				bool var_329_bool;
				func_8022(var_1_object);
				if(var_329_bool != 0) {
					bool var_335_bool;
					func_8034(var_1_object);
					if(var_335_bool != 0)
						var_328_bool = true;
				}
				if(var_328_bool != 0)
					var_0_object->AddReply(11495, 12697, 12696); //@t
				bool var_344_bool;
				func_7829(var_344_bool, var_1_object);
				if(var_344_bool != 0)
					var_0_object->AddReply(11165, 12349, 12348); //@t
				var_0_object->AddReply(11174, -1, 12358); //@t
				return 0;
			}
			if(var_40_string == 12349) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11167, 12354, 12350); //@t
				return 0;
			}
			if(var_40_string == 12354) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11171); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11172, -1, 12355); //@t
				return 0;
			}
			if(var_40_string == 12697) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11497, 12699, 12698); //@t
				return 0;
			}
			if(var_40_string == 12699) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11499, 12701, 12700); //@t
				return 0;
			}
			if(var_40_string == 12701) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11501, -1, 12702); //@t
				bool var_389_bool;
				func_8034(var_1_object);
				if(var_389_bool != 0)
					var_0_object->AddReply(11502, -1, 12703); //@t
				return 0;
			}
			if(var_40_string == 12373) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11189, 12375, 12374); //@t
				return 0;
			}
			if(var_40_string == 12375) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11191, -1, 12376); //@t
				var_0_object->AddReply(11192, -1, 12377); //@t
				return 0;
			}
			if(var_40_string == 12692) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11491, 12694, 12693); //@t
				return 0;
			}
			if(var_40_string == 12694) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11493, -1, 12695); //@t
				return 0;
			}
			if(var_40_string == 12361) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11180, 12363, 12364); //@t
				var_0_object->AddReply(11193, 12379, 12378); //@t
				return 0;
			}
			if(var_40_string == 12379) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11195, 12363, 12380); //@t
				var_0_object->AddReply(11198, 12385, 12384); //@t
				return 0;
			}
			if(var_40_string == 12385) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11200, 12366, 12386); //@t
				var_0_object->AddReply(11201, 12363, 12388); //@t
				return 0;
			}
			if(var_40_string == 12363) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11181, 12366, 12365); //@t
				var_0_object->AddReply(11196, 12383, 12382); //@t
				return 0;
			}
			if(var_40_string == 12383) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11486, 12366, 12688); //@t
				return 0;
			}
			if(var_40_string == 12366) {
				func_5250(var_41_bool, "Neutral");
				var_0_object->SetMessage(11182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11185, -1, 12370); //@t
				var_0_object->AddReply(11186, -1, 12371); //@t
				return 0;
			}
			var_3_string = true;
			bool var_482_bool;
			func_7001(var_482_bool);
			if(var_482_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1493";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_bool == 12808) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7493();
			}
			if(var_41_bool == 12802) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_7493();
			}
			if(var_41_bool == 12819) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7515();
			}
			if(var_41_bool == 12820) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_7515();
			}
			if(var_41_bool == 12821) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_7515();
			}
			if(var_41_bool == 12832) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_7521();
			}
			if(var_41_bool == 12833) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_7521();
			}
			if(var_40_string == 12786) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11591); //@t
				var_0_object->ClearReplies(); //@t
				bool var_112_bool;
				func_8056(var_1_object);
				if(var_112_bool != 0)
					var_0_object->AddReply(11592, 12788, 12787); //@t
				bool var_123_bool = false;
				bool var_124_bool;
				func_8085(var_1_object);
				if(var_124_bool != 0) {
					bool var_130_bool;
					func_8109(var_1_object);
					if(var_130_bool != 0)
						var_123_bool = true;
				}
				if(var_123_bool != 0)
					var_0_object->AddReply(11611, 12810, 12809); //@t
				bool var_139_bool = false;
				bool var_140_bool;
				func_8097(var_1_object);
				if(var_140_bool != 0) {
					bool var_146_bool;
					func_8121(var_1_object);
					if(var_146_bool != 0)
						var_139_bool = true;
				}
				if(var_139_bool != 0)
					var_0_object->AddReply(11624, 12823, 12822); //@t
				var_0_object->AddReply(11635, -1, 12834); //@t
				return 0;
			}
			if(var_40_string == 12823) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11626, 12825, 12824); //@t
				var_0_object->AddReply(11628, 12827, 12826); //@t
				return 0;
			}
			if(var_40_string == 12827) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11631, 12830, 12829); //@t
				return 0;
			}
			if(var_40_string == 12825) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11630, 12830, 12828); //@t
				return 0;
			}
			if(var_40_string == 12830) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11633, -1, 12832); //@t
				var_0_object->AddReply(11634, -1, 12833); //@t
				return 0;
			}
			if(var_40_string == 12810) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11613, 12812, 12811); //@t
				return 0;
			}
			if(var_40_string == 12812) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11615, 12814, 12813); //@t
				return 0;
			}
			if(var_40_string == 12814) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11616); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11617, 12816, 12815); //@t
				return 0;
			}
			if(var_40_string == 12816) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11619, 12818, 12817); //@t
				return 0;
			}
			if(var_40_string == 12818) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11621, -1, 12819); //@t
				var_0_object->AddReply(11622, -1, 12820); //@t
				var_0_object->AddReply(11623, -1, 12821); //@t
				return 0;
			}
			if(var_40_string == 12788) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11594, 12790, 12789); //@t
				var_0_object->AddReply(11599, 12795, 12794); //@t
				return 0;
			}
			if(var_40_string == 12795) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11600); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11601, 12790, 12796); //@t
				return 0;
			}
			if(var_40_string == 12790) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11596, 12792, 12791); //@t
				var_0_object->AddReply(11602, 12799, 12798); //@t
				return 0;
			}
			if(var_40_string == 12799) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11604, 12792, 12800); //@t
				return 0;
			}
			if(var_40_string == 12792) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11598, 12803, 12793); //@t
				var_0_object->AddReply(11605, -1, 12802); //@t
				return 0;
			}
			if(var_40_string == 12803) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11607, 12805, 12804); //@t
				var_0_object->AddReply(11609, 12805, 12806); //@t
				return 0;
			}
			if(var_40_string == 12805) {
				func_5973(var_41_bool, "Neutral");
				var_0_object->SetMessage(11608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11610, -1, 12808); //@t
				return 0;
			}
			var_3_string = true;
			bool var_294_bool;
			func_7001(var_294_bool);
			if(var_294_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1766";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int)
	{
		if(1 != 0) {
			func_6878();
			if(var_41_int == 14578) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_7567();
			}
			if(var_41_int == 14583) {
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_7567();
			}
			if(var_40_int == 13358) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(12203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_72_bool = false;
				bool var_73_bool;
				func_8205(var_1_object);
				if(var_73_bool != 0) {
					bool var_81_bool;
					func_8217(var_1_object);
					if(var_81_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0)
					var_0_object->AddReply(13340, 14573, 14572); //@t
				var_0_object->AddReply(12204, -1, 13359); //@t
				return 0;
			}
			if(var_40_int == 14573) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(13341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13342, 14575, 14574); //@t
				return 0;
			}
			if(var_40_int == 14575) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(13343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13344, 14577, 14576); //@t
				return 0;
			}
			if(var_40_int == 14577) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(13345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13346, -1, 14578); //@t
				var_0_object->AddReply(13347, 14580, 14579); //@t
				return 0;
			}
			if(var_40_int == 14580) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(13348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13349, 14582, 14581); //@t
				return 0;
			}
			if(var_40_int == 14582) {
				func_6593(var_41_int, "Neutral");
				var_0_object->SetMessage(13350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13351, -1, 14583); //@t
				return 0;
			}
			var_3_string = true;
			bool var_131_bool;
			func_7001(var_131_bool);
			if(var_131_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x19d2";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_8193(bool var_233_bool)
{
	int var_235_int;
	func_6895(var_235_int, "ood6Alexandr4");
	if(var_235_int == 0) {
		var_233_bool = true;
		return 0;
	}
	var_233_bool = false;
}


// @pe
void func_7685(bool var_281_bool)
{
	int var_283_int;
	func_6895(var_283_int, "ood1Alexandr5");
	if(var_283_int == 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


// @pe
void func_8205(bool var_73_bool)
{
	int var_75_int;
	func_6895(var_75_int, "d7q02");
	if(var_75_int == 1)
		var_73_bool = true;
	var_73_bool = false;
}


// @pe
void func_7183(object var_224_object)
{
	@Trace("money 5000 is given");
	object var_227_object;
	var_224_object = var_227_object;
	func_6776(var_227_object, "money", 5000);
}


// @pe
void func_7697(bool var_297_bool)
{
	int var_299_int;
	func_6895(var_299_int, "ood1Alexandr6");
	if(var_299_int == 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


// @pe
void func_3089(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_455_object, object var_456_object)
{
	var_0_object = var_456_object;
	var_1_object = var_455_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_462_bool;
		func_7781(var_1_object);
		if(var_462_bool != 0) {
			object var_468_object; object var_469_object;
			var_468_object = var_1_object;
			var_469_object = var_0_object;
			func_7616();
			func_3264(var_456_object, "Neutral");
			var_0_object->SetMessage(6610); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6611, 7748, 7280); //@t
			var_0_object->AddReply(7066, 7748, 7784); //@t
		} else {
					bool var_494_bool = false;
					bool var_495_bool = false;
					bool var_496_bool;
					func_7793(var_1_object);
					if(var_496_bool != 0) {
						bool var_502_bool;
						func_7863(var_1_object);
						if(var_502_bool != 0)
							var_495_bool = true;
					}
					if(var_495_bool != 0) {
						bool var_504_bool;
						func_7868(var_1_object);
						if(var_504_bool != 0)
							var_494_bool = true;
					}
					if(var_494_bool == 0) goto Label_3173;
					func_3264(var_456_object, "Neutral");
					var_0_object->SetMessage(6731); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6732, 7420, 7419); //@t
					var_0_object->AddReply(6742, 7420, 7430); //@t
					var_0_object->AddReply(6743, 7433, 7432); //@t
		}
	}
Label_3234:
	for(;;) {
		bool var_486_bool;
		func_7001(var_486_bool);
		if(var_486_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6860(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3263;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3263:
			return 0;

		}

	}
	
Label_3173:
	func_3264(var_456_object, "Neutral");
	var_0_object->SetMessage(6614); //@t
	var_0_object->ClearReplies(); //@t
	bool var_523_bool = false;
	bool var_524_bool;
	func_7805(var_1_object);
	if(var_524_bool != 0) {
		bool var_530_bool;
		func_7851(var_1_object);
		if(var_530_bool != 0)
			var_523_bool = true;
	}
	if(var_523_bool != 0)
		var_0_object->AddReply(6615, 7282, 7284); //@t
	bool var_539_bool;
	func_7839(var_1_object);
	if(var_539_bool != 0)
		var_0_object->AddReply(6618, 7800, 7287); //@t
	bool var_548_bool;
	func_7817(var_1_object);
	if(var_548_bool != 0)
		var_0_object->AddReply(6730, 7405, 7417); //@t
	var_0_object->AddReply(7071, 7802, 7794); //@t
	var_0_object->AddReply(7532, -1, 8314); //@t
	goto Label_3234;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc15";


// @pe
void func_8217(bool var_81_bool)
{
	int var_83_int;
	func_6895(var_83_int, "ood7Alexandr1");
	if(var_83_int == 0) {
		var_81_bool = true;
		return 0;
	}
	var_81_bool = false;
}


void func_7194(void)
{
	object var_54_object;
	func_8402(var_54_object);
	object var_53_object;
	var_54_object = var_53_object;
	float var_65_float;
	func_6960(var_65_float);
	var_53_object->AddMark("d1AlexandrAboutKaterina", "pt_map_katerina", 3, 8640, var_65_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7709(bool var_313_bool)
{
	int var_315_int;
	func_6895(var_315_int, "ood1Alexandr7");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


// @pe
void func_8229(bool var_342_bool)
{
	int var_344_int;
	func_6895(var_344_int, "KnowBigVlad");
	if(var_344_int == 1)
		var_342_bool = true;
	var_342_bool = false;
}


// @pe
void func_7721(bool var_330_bool)
{
	int var_332_int;
	func_6895(var_332_int, "ood1Alexandr8");
	if(var_332_int == 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


// @pe
void func_7210(object var_113_object)
{
	object var_117_object;
	func_8402(var_117_object);
	object var_114_object;
	var_117_object = var_114_object;
	func_8419(var_114_object, "pt_map_anna", (float)2);
	object var_137_object;
	func_8402(var_137_object);
	var_113_object->ShowMap(var_137_object);
}


// @pe
void func_8241(bool var_324_bool)
{
	int var_326_int;
	func_6895(var_326_int, "KnowGeorg");
	if(var_326_int == 1)
		var_324_bool = true;
	var_324_bool = false;
}


void func_49(object var_0_object, int var_44_int, object var_45_object)
{
	var_0_object = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_6800(var_55_bool, var_56_object);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_96_int;
	func_6997(var_96_int);
	var_51_object->SetNPCName(var_96_int);
	string var_97_string;
	func_6999(var_97_string);
	var_51_object->SetPhoto(var_97_string);
	int var_98_int;
	func_8452(var_98_int);
	var_51_object->SetPlayerName(var_98_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_107_object; object var_108_object;
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_151_bool = !var_54_bool; //@nz
		if(var_151_bool == 0) goto Label_101;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_101:
	object var_152_object;
	var_45_object = var_152_object;
	func_6856();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7733(bool var_348_bool)
{
	int var_350_int;
	func_6895(var_350_int, "ood1Alexandr9");
	if(var_350_int == 0) {
		var_348_bool = true;
		return 0;
	}
	var_348_bool = false;
}


// @pe
void func_7226(object var_115_object)
{
	object var_119_object;
	func_8402(var_119_object);
	object var_116_object;
	var_119_object = var_116_object;
	func_8419(var_116_object, "pt_map_ospina", (float)2);
	object var_139_object;
	func_8402(var_139_object);
	var_115_object->ShowMap(var_139_object);
}


// @pe
void func_8253(bool var_358_bool)
{
	int var_360_int;
	func_6895(var_360_int, "KnowGrif");
	if(var_360_int == 1)
		var_358_bool = true;
	var_358_bool = false;
}


// @pe
void func_7745(bool var_364_bool)
{
	int var_366_int;
	func_6895(var_366_int, "ood1Alexandr10");
	if(var_366_int == 0) {
		var_364_bool = true;
		return 0;
	}
	var_364_bool = false;
}


// @pe
void func_8265(bool var_291_bool)
{
	int var_293_int;
	func_6895(var_293_int, "KnowKaterina");
	if(var_293_int == 1)
		var_291_bool = true;
	var_291_bool = false;
}


// @pe
void func_7242(void)
{
	@SetVariable("ood3Alexandr1", 1);
}


// @pe
void func_7757(bool var_380_bool)
{
	int var_382_int;
	func_6895(var_382_int, "ood1Alexandr11");
	if(var_382_int == 0) {
		var_380_bool = true;
		return 0;
	}
	var_380_bool = false;
}


// @pe
void func_7248(void)
{
	@SetVariable("ood3Alexandr2", 1);
}


// @pe
void func_8277(bool var_307_bool)
{
	int var_309_int;
	func_6895(var_309_int, "KnowLara");
	if(var_309_int == 1)
		var_307_bool = true;
	var_307_bool = false;
}


// @pe
void func_7254(void)
{
	@SetVariable("ood3Alexandr3", 1);
}


// @pe
void func_7769(bool var_396_bool)
{
	int var_398_int;
	func_6895(var_398_int, "ood1Alexandr12");
	if(var_398_int == 0) {
		var_396_bool = true;
		return 0;
	}
	var_396_bool = false;
}


// @pe
void func_7260(void)
{
	@SetVariable("ood3Alexandr4", 1);
}


// @pe
void func_8289(bool var_275_bool)
{
	int var_277_int;
	func_6895(var_277_int, "KnowPredictions");
	if(var_277_int == 1)
		var_275_bool = true;
	var_275_bool = false;
}


void func_7266(void)
{
	@SetVariable("d3q01", 2);
	object var_66_object;
	func_8402(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	float var_77_float;
	func_6960(var_77_float);
	var_63_object->AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", 1, 11148, var_77_float);
	float var_84_float;
	func_6960(var_84_float);
	var_63_object->AddMark("d3q01AlexandrGotoOspinaSelf", "pt_map_alexandr", 1, 15295, var_84_float);
	func_8533();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7781(bool var_282_bool)
{
	int var_284_int;
	func_6895(var_284_int, "ood2Alexandr1");
	if(var_284_int == 0) {
		var_282_bool = true;
		return 0;
	}
	var_282_bool = false;
}


// @pe
void func_8301(bool var_374_bool)
{
	int var_376_int;
	func_6895(var_376_int, "KnowStamatins");
	if(var_376_int == 1)
		var_374_bool = true;
	var_374_bool = false;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_107_object, object var_108_object)
{
	var_0_object = var_108_object;
	var_3_object = false;
	if(1 != 0) {
		object var_114_object; object var_115_object;
		var_114_object = var_107_object;
		var_115_object = var_0_object;
		func_7573();
		func_180(var_108_object, "Neutral");
		var_0_object->SetMessage(287); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(288, 340, 337); //@t
		var_0_object->AddReply(289, 340, 338); //@t
		var_0_object->AddReply(290, 340, 339); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_143_bool;
	func_7001(var_143_bool);
	if(var_143_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6860(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


// @pe
void func_7793(bool var_320_bool)
{
	int var_322_int;
	func_6895(var_322_int, "ood2Alexandr2");
	if(var_322_int == 0) {
		var_320_bool = true;
		return 0;
	}
	var_320_bool = false;
}


void func_4210(object var_0_object, int var_567_int, object var_568_object)
{
	var_0_object = var_568_object;
	bool var_578_bool; object var_579_object;
	var_568_object = var_579_object;
	func_6800(var_578_bool, var_579_object);
	if(!var_578_bool) { //@nz
		var_567_int = -2;
		return 8;
	}
	object var_574_object;
	@CreateDialog(var_574_object);
	int var_581_int;
	func_6997(var_581_int);
	var_574_object->SetNPCName(var_581_int);
	string var_582_string;
	func_6999(var_582_string);
	var_574_object->SetPhoto(var_582_string);
	int var_583_int;
	func_8452(var_583_int);
	var_574_object->SetPlayerName(var_583_int);
	bool var_575_bool;
	@IsOverrideActive(var_575_bool);
	if(var_575_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	@DoDialog(var_574_object);
	object var_585_object; object var_586_object;
	var_568_object = var_585_object;
	var_574_object = var_586_object;
	TaskCall(11);
	func_4273(var_587_object, var_588_object, var_589_string, var_590_bool, var_585_object, var_586_object);
	TaskReturn();
	bool var_577_bool;
	var_574_object->IsDialogEnd(var_577_bool);
	
	for(;;) {
		var_669_bool = !var_577_bool; //@nz
		if(var_669_bool == 0) goto Label_4262;
		@sync();
		var_574_object->IsDialogEnd(var_577_bool);
	}
	
Label_4262:
	object var_670_object;
	var_568_object = var_670_object;
	func_6856();
	@StopDialog(var_574_object);
	var_574_object->GetReturnValue(-1);
	int var_576_int = var_567_int;
}
EMIT "Stack[-4] = 0";


void func_6776(object var_227_object, string var_228_string, int var_229_int)
{
	int var_231_int;
	var_227_object->GetProperty(var_228_string, var_231_int);
	var_227_object->SetProperty(var_228_string, (var_231_int + var_229_int));
}


// @pe
void func_8313(bool var_482_bool)
{
	int var_484_int;
	func_6895(var_484_int, "KnowUklad");
	if(var_484_int == 1)
		var_482_bool = true;
	var_482_bool = false;
}


// @pe
void func_7805(bool var_348_bool)
{
	int var_350_int;
	func_6895(var_350_int, "ood2Alexandr3");
	if(var_350_int == 0) {
		var_348_bool = true;
		return 0;
	}
	var_348_bool = false;
}


void func_6783(bool var_41_bool, object var_42_object)
{
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	bool var_50_bool;
	@Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
}


// @pe
void func_7298(object var_230_object)
{
	object var_234_object;
	func_8402(var_234_object);
	object var_231_object;
	var_234_object = var_231_object;
	func_8419(var_231_object, "pt_map_bigvlad", (float)2);
	object var_235_object;
	func_8402(var_235_object);
	var_230_object->ShowMap(var_235_object);
}


// @pe
void func_5250(object var_2_object, string var_279_string)
{
	bool var_280_bool;
	func_7001(var_280_bool);
	if(!var_280_bool) //@nz
		return 0;
	if(var_279_string == var_2_object)
		return 0;
	string var_283_string;
	func_6860(var_283_string);
	var_2_object = var_283_string;
}


// @pe
void func_8325(bool var_346_bool)
{
	var_346_bool = false;
}


// @pe
void func_8328(bool var_213_bool)
{
	int var_215_int;
	func_6974(var_215_int);
	if(var_215_int >= 18)
		var_213_bool = true;
	var_213_bool = false;
}


// @pe
void func_7817(bool var_372_bool)
{
	int var_374_int;
	func_6895(var_374_int, "ood2Alexandr5");
	if(var_374_int == 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


void func_6795(bool var_41_bool)
{
	bool var_43_bool;
	@IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
}


void func_6800(bool var_55_bool, object var_56_object)
{
	cvector var_66_cvector;
	var_56_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_56_object->GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_73_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_74_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_77_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_6885(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * 70) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
}


void func_7314(object var_189_object)
{
	func_8501();
	int var_192_int;
	var_189_object->RemoveItemByType(var_192_int, "d2q01_key", 1);
}


// @pe
void func_8339(bool var_234_bool)
{
	bool var_236_bool = false;
	int var_237_int;
	func_6974(var_237_int);
	if(var_237_int >= 12) {
		int var_240_int;
		func_6974(var_240_int);
		if(var_240_int < 18)
			var_236_bool = true;
	}
	if(var_236_bool != 0) {
		var_234_bool = true;
		return 0;
	}
	var_234_bool = false;
}


// @pe
void func_7829(bool var_344_bool, object var_345_object)
{
	object var_347_object;
	var_345_object = var_347_object;
	func_8325(var_347_object);
	bool var_346_bool;
	if(var_346_bool != 0) {
		var_344_bool = true;
		return 0;
	}
	var_344_bool = false;
}


// @pe
void func_7323(void)
{
	@SetVariable("ood4Alexandr1", 1);
}


// @pe
void func_7839(bool var_363_bool)
{
	int var_365_int;
	func_6895(var_365_int, "d2q01");
	if(var_365_int == 0) {
		var_363_bool = true;
		return 0;
	}
	var_363_bool = false;
}


void func_7329(void)
{
	object var_54_object;
	func_8402(var_54_object);
	object var_53_object;
	var_54_object = var_53_object;
	float var_65_float;
	func_6960(var_65_float);
	var_53_object->AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", 0, 11487, var_65_float);
	float var_72_float;
	func_6960(var_72_float);
	var_53_object->AddMark("d4q03AlexandrGotoGrifSelf", "pt_map_alexandr", 0, 15330, var_72_float);
	func_8549();
	func_8565();
	object var_107_object;
	func_6911(var_107_object, "quest_d4_03");
}
EMIT "Stack[-1] = 0";


void func_8360(object var_88_object)
{
	object var_90_object;
	@GetDiaryRoot(var_90_object);
	if(!var_90_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_88_object = false;
	}
	var_90_object = var_88_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7851(bool var_354_bool)
{
	int var_356_int;
	func_6895(var_356_int, "d2q01");
	if(var_356_int == 5)
		var_354_bool = true;
	var_354_bool = false;
}


// @pe
void func_4273(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_585_object, object var_586_object)
{
	var_0_object = var_586_object;
	var_1_object = var_585_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_592_bool = false;
		bool var_593_bool;
		func_7928(var_1_object);
		if(var_593_bool != 0) {
			bool var_599_bool;
			func_7916(var_1_object);
			if(var_599_bool != 0)
				var_592_bool = true;
		}
		if(var_592_bool != 0) {
			func_4409(var_586_object, "Neutral");
			var_0_object->SetMessage(9086); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9087, 9969, 9965); //@t
			var_0_object->AddReply(9088, 9967, 9966); //@t
		} else {
					func_4409(var_586_object, "Neutral");
					var_0_object->SetMessage(8854); //@t
					var_0_object->ClearReplies(); //@t
					bool var_627_bool = false;
					bool var_628_bool;
					func_7892(var_1_object);
					if(var_628_bool != 0) {
						bool var_634_bool;
						func_7952(var_1_object);
						if(var_634_bool != 0)
							var_627_bool = true;
					}
					if(var_627_bool != 0)
						var_0_object->AddReply(8840, 9693, 9692); //@t
					bool var_643_bool;
					func_7880(var_1_object);
					if(var_643_bool != 0)
						var_0_object->AddReply(8855, 9687, 9711); //@t
					bool var_652_bool;
					func_7904(var_1_object);
					if(var_652_bool != 0)
						var_0_object->AddReply(8856, 9691, 9712); //@t
					bool var_661_bool;
					func_8068(var_1_object);
					if(var_661_bool != 0)
						var_0_object->AddReply(11978, 13175, 13193); //@t
					var_0_object->AddReply(11133, -1, 12322); //@t
		}
	}
	for(;;) {
		bool var_617_bool;
		func_7001(var_617_bool);
		if(var_617_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6860(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4408;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4408:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x10b5";


void func_5809(object var_0_object, int var_781_int, object var_782_object)
{
	var_0_object = var_782_object;
	bool var_792_bool; object var_793_object;
	var_782_object = var_793_object;
	func_6800(var_792_bool, var_793_object);
	if(!var_792_bool) { //@nz
		var_781_int = -2;
		return 8;
	}
	object var_788_object;
	@CreateDialog(var_788_object);
	int var_795_int;
	func_6997(var_795_int);
	var_788_object->SetNPCName(var_795_int);
	string var_796_string;
	func_6999(var_796_string);
	var_788_object->SetPhoto(var_796_string);
	int var_797_int;
	func_8452(var_797_int);
	var_788_object->SetPlayerName(var_797_int);
	bool var_789_bool;
	@IsOverrideActive(var_789_bool);
	if(var_789_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	@DoDialog(var_788_object);
	object var_799_object; object var_800_object;
	var_782_object = var_799_object;
	var_788_object = var_800_object;
	TaskCall(15);
	func_5872(var_801_object, var_802_object, var_803_string, var_804_bool, var_799_object, var_800_object);
	TaskReturn();
	bool var_791_bool;
	var_788_object->IsDialogEnd(var_791_bool);
	
	for(;;) {
		var_864_bool = !var_791_bool; //@nz
		if(var_864_bool == 0) goto Label_5861;
		@sync();
		var_788_object->IsDialogEnd(var_791_bool);
	}
	
Label_5861:
	object var_865_object;
	var_782_object = var_865_object;
	func_6856();
	@StopDialog(var_788_object);
	var_788_object->GetReturnValue(-1);
	int var_790_int = var_781_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_180(object var_2_object, string var_50_string)
{
	bool var_51_bool;
	func_7001(var_51_bool);
	if(!var_51_bool) //@nz
		return 0;
	if(var_50_string == var_2_object)
		return 0;
	string var_54_string;
	func_6860(var_54_string);
	var_2_object = var_54_string;
}


void func_8373(bool var_79_bool, object var_80_object, int var_81_int)
{
	object var_88_object;
	func_8360(var_88_object);
	object var_85_object;
	var_88_object = var_85_object;
	object var_86_object;
	var_85_object->Find(var_81_int, var_86_object);
	if(!var_86_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_81_int);
		var_79_bool = false;
	}
	var_86_object->AddChild(var_80_object);
	@SetVariable("player_diary", 1);
	int var_87_int;
	var_80_object->GetCategory(var_87_int);
	@SetDiarySection(var_87_int);
	var_79_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_7863(bool var_326_bool)
{
	var_326_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_7868(bool var_328_bool)
{
	int var_330_int;
	func_6895(var_330_int, "d2q01BigVladVisit");
	if(var_330_int == 1)
		var_328_bool = true;
	var_328_bool = false;
}


// @pe
void func_3264(object var_2_object, string var_296_string)
{
	bool var_297_bool;
	func_7001(var_297_bool);
	if(!var_297_bool) //@nz
		return 0;
	if(var_296_string == var_2_object)
		return 0;
	string var_300_string;
	func_6860(var_300_string);
	var_2_object = var_300_string;
}


// @pe
void func_1732(object var_2_object, string var_168_string)
{
	bool var_169_bool;
	func_7001(var_169_bool);
	if(!var_169_bool) //@nz
		return 0;
	if(var_168_string == var_2_object)
		return 0;
	string var_172_string;
	func_6860(var_172_string);
	var_2_object = var_172_string;
}


// @pe
void func_7364(object var_135_object)
{
	object var_139_object;
	func_8402(var_139_object);
	object var_136_object;
	var_139_object = var_136_object;
	func_8419(var_136_object, "pt_map_grif", (float)2);
	object var_159_object;
	func_8402(var_159_object);
	var_135_object->ShowMap(var_159_object);
}


// @pe
void func_6856(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_7880(bool var_215_bool)
{
	int var_217_int;
	func_6895(var_217_int, "ood3Alexandr1");
	if(var_217_int == 0) {
		var_215_bool = true;
		return 0;
	}
	var_215_bool = false;
}


void func_6860(string var_45_string)
{
	@Trace("playing " + var_45_string);
	float var_48_float;
	float var_49_float;
	@lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	@lshPlayAnimation(var_48_float, var_49_float);
	@Trace("start: " + var_48_float);
	@Trace("end: " + var_49_float);
}


void func_8402(object var_52_object)
{
	object var_55_object; object var_56_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_56_object = null;
		var_56_object = var_52_object;
	}
	var_55_object->GetMap(var_56_object);
	var_56_object = var_52_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7892(bool var_200_bool)
{
	int var_202_int;
	func_6895(var_202_int, "ood3Alexandr2");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


// @pe
void func_7380(void)
{
	@SetVariable("ood4Alexandr2", 1);
}


void func_7386(void)
{
	@SetVariable("d4q03", 3);
	object var_188_object;
	func_8402(var_188_object);
	object var_185_object;
	var_188_object = var_185_object;
	float var_193_float;
	func_6960(var_193_float);
	var_185_object->AddMark("d4q03AlexandrAboutVolnica", "pt_map_warehouse_gangster", 0, 11494, var_193_float);
	func_8581();
}
EMIT "Stack[-1] = 0";


void func_6878(void)
{
	bool var_43_bool;
	func_7001(var_43_bool);
	if(var_43_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_7904(bool var_224_bool)
{
	int var_226_int;
	func_6895(var_226_int, "ood3Alexandr3");
	if(var_226_int == 0) {
		var_224_bool = true;
		return 0;
	}
	var_224_bool = false;
}


void func_8419(object var_136_object, string var_137_string, float var_138_float)
{
	object var_146_object;
	@GetMainOutdoorScene(var_146_object);
	if(var_146_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_144_cvector;
	cvector var_145_cvector;
	bool var_147_bool;
	var_146_object->GetLocator(var_137_string, var_147_bool, var_144_cvector, var_145_cvector);
	if(!var_147_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_137_string) + " doesnt exist");
	var_146_object->GetMap(var_136_object);
	if(var_136_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_157_float = GetByIndex(var_144_cvector, 0);
	var_158_float = GetByIndex(var_144_cvector, 2);
	var_136_object->SetMapParams(var_157_float, var_158_float, var_138_float);
}
EMIT "Stack[-2] = 0";


void func_6885(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


// @pe
void func_7916(bool var_169_bool)
{
	int var_171_int;
	func_6895(var_171_int, "ood3Alexandr4");
	if(var_171_int == 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


void func_6895(int var_75_int, string var_76_string)
{
	int var_78_int;
	@GetVariable(var_76_string, var_78_int);
	var_78_int = var_75_int;
}


// @pe
void func_5872(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_799_object, object var_800_object)
{
	var_0_object = var_800_object;
	var_1_object = var_799_object;
	var_3_object = false;
	if(1 != 0) {
		func_5973(var_800_object, "Neutral");
		var_0_object->SetMessage(11591); //@t
		var_0_object->ClearReplies(); //@t
		bool var_812_bool;
		func_8056(var_1_object);
		if(var_812_bool != 0)
			var_0_object->AddReply(11592, 12788, 12787); //@t
		bool var_821_bool = false;
		bool var_822_bool;
		func_8085(var_1_object);
		if(var_822_bool != 0) {
			bool var_828_bool;
			func_8109(var_1_object);
			if(var_828_bool != 0)
				var_821_bool = true;
		}
		if(var_821_bool != 0)
			var_0_object->AddReply(11611, 12810, 12809); //@t
		bool var_837_bool = false;
		bool var_838_bool;
		func_8097(var_1_object);
		if(var_838_bool != 0) {
			bool var_844_bool;
			func_8121(var_1_object);
			if(var_844_bool != 0)
				var_837_bool = true;
		}
		if(var_837_bool != 0)
			var_0_object->AddReply(11624, 12823, 12822); //@t
		var_0_object->AddReply(11635, -1, 12834); //@t
		goto Label_5943;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16f4";
	}
Label_5943:
	bool var_856_bool;
	func_7001(var_856_bool);
	if(var_856_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6860(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_5972;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5972:
		return 0;

	}
	
}


void func_7409(void)
{
	object var_243_object;
	func_8402(var_243_object);
	object var_241_object;
	var_243_object = var_241_object;
	object var_242_object;
	var_241_object->FindMark(var_242_object, "d4q03AlexandrAboutVolnica");
	if(var_242_object != 0)
		var_242_object->Remove();
	var_241_object->FindMark(var_242_object, "d4q03AlexandrGotoGrif");
	if(var_242_object != 0)
		var_242_object->Remove();
	var_241_object->FindMark(var_242_object, "d4q03AlexandrGotoGrifSelf");
	if(var_242_object != 0)
		var_242_object->Remove();
	var_241_object->FindMark(var_242_object, "d4q03GrifGotoAlexandr");
	if(var_242_object != 0)
		var_242_object->Remove();
	var_241_object->FindMark(var_242_object, "d4q03GrifGotoAlexandrSelf");
	if(var_242_object != 0)
		var_242_object->Remove();
	func_8597();
	bool var_263_bool;
	func_6948(var_263_bool, "quest_d4_03", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6900(object var_104_object, string var_105_string)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	object var_109_object;
	@AddBlankActor(var_109_object, var_108_object, var_105_string, (var_105_string + ".bin"));
	var_109_object = var_104_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7928(bool var_161_bool)
{
	int var_163_int;
	func_6895(var_163_int, "d3q01");
	if(var_163_int == 8)
		var_161_bool = true;
	var_161_bool = false;
}


void func_6911(object var_107_object, string var_108_string)
{
	object var_111_object;
	@GetMainOutdoorScene(var_111_object);
	object var_112_object;
	@AddBlankActorFromXml(var_112_object, var_111_object, var_108_string, (var_108_string + ".xml"));
	var_112_object = var_107_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_8452(int var_98_int)
{
	int var_100_int;
	@GetVariable("player", var_100_int);
	if(var_100_int == 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x2113";
	}
	if(var_100_int == 1) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
}


// @pe
void func_7940(bool var_390_bool)
{
	int var_392_int;
	func_6895(var_392_int, "KnowRubin");
	if(var_392_int == 1)
		var_390_bool = true;
	var_390_bool = false;
}


void func_6922(object var_123_object, object var_124_object, int var_125_int)
{
	int var_129_int;
	var_124_object->GetItemID(var_129_int);
	int var_130_int;
	@GetInvItemProperty(var_130_int, var_129_int, "Category");
	bool var_131_bool;
	var_123_object->AddItem(var_131_bool, var_124_object, var_130_int, var_125_int);
	if(!var_131_bool) //@nz
		var_123_object->DropItems(var_124_object, var_125_int);
}


void func_271(object var_0_object, int var_868_int, object var_869_object)
{
	var_0_object = var_869_object;
	bool var_879_bool; object var_880_object;
	var_869_object = var_880_object;
	func_6800(var_879_bool, var_880_object);
	if(!var_879_bool) { //@nz
		var_868_int = -2;
		return 8;
	}
	object var_875_object;
	@CreateDialog(var_875_object);
	int var_882_int;
	func_6997(var_882_int);
	var_875_object->SetNPCName(var_882_int);
	string var_883_string;
	func_6999(var_883_string);
	var_875_object->SetPhoto(var_883_string);
	int var_884_int;
	func_8452(var_884_int);
	var_875_object->SetPlayerName(var_884_int);
	bool var_876_bool;
	@IsOverrideActive(var_876_bool);
	if(var_876_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	@DoDialog(var_875_object);
	object var_886_object; object var_887_object;
	var_869_object = var_886_object;
	var_875_object = var_887_object;
	TaskCall(5);
	func_334(var_888_object, var_889_object, var_890_string, var_891_bool, var_886_object, var_887_object);
	TaskReturn();
	bool var_878_bool;
	var_875_object->IsDialogEnd(var_878_bool);
	
	for(;;) {
		var_979_bool = !var_878_bool; //@nz
		if(var_979_bool == 0) goto Label_323;
		@sync();
		var_875_object->IsDialogEnd(var_878_bool);
	}
	
Label_323:
	object var_980_object;
	var_869_object = var_980_object;
	func_6856();
	@StopDialog(var_875_object);
	var_875_object->GetReturnValue(-1);
	int var_877_int = var_868_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7952(bool var_206_bool)
{
	int var_208_int;
	func_6895(var_208_int, "d3q01");
	if(var_208_int == 1)
		var_206_bool = true;
	var_206_bool = false;
}


void func_8469(void)
{
	@Trace("Adding diary entry");
	object var_71_object;
	@CreateDiaryEntry(var_71_object, 10, 1, 3081);
	bool var_76_bool; object var_77_object;
	var_71_object = var_77_object;
	func_8373(var_76_bool, var_77_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1301(object var_0_object, int var_162_int, object var_163_object)
{
	var_0_object = var_163_object;
	bool var_173_bool; object var_174_object;
	var_163_object = var_174_object;
	func_6800(var_173_bool, var_174_object);
	if(!var_173_bool) { //@nz
		var_162_int = -2;
		return 8;
	}
	object var_169_object;
	@CreateDialog(var_169_object);
	int var_176_int;
	func_6997(var_176_int);
	var_169_object->SetNPCName(var_176_int);
	string var_177_string;
	func_6999(var_177_string);
	var_169_object->SetPhoto(var_177_string);
	int var_178_int;
	func_8452(var_178_int);
	var_169_object->SetPlayerName(var_178_int);
	bool var_170_bool;
	@IsOverrideActive(var_170_bool);
	if(var_170_bool != 0) {
		var_162_int = -2;
		return 8;
	}
	@DoDialog(var_169_object);
	object var_180_object; object var_181_object;
	var_163_object = var_180_object;
	var_169_object = var_181_object;
	TaskCall(7);
	func_1364(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object);
	TaskReturn();
	bool var_172_bool;
	var_169_object->IsDialogEnd(var_172_bool);
	
	for(;;) {
		var_433_bool = !var_172_bool; //@nz
		if(var_433_bool == 0) goto Label_1353;
		@sync();
		var_169_object->IsDialogEnd(var_172_bool);
	}
	
Label_1353:
	object var_434_object;
	var_163_object = var_434_object;
	func_6856();
	@StopDialog(var_169_object);
	var_169_object->GetReturnValue(-1);
	int var_171_int = var_162_int;
}
EMIT "Stack[-4] = 0";


void func_6935(object var_118_object, string var_119_string, int var_120_int)
{
	object var_122_object;
	@CreateInvItem(var_122_object);
	var_122_object->SetItemName(var_119_string);
	object var_123_object; object var_124_object; int var_125_int;
	var_118_object = var_123_object;
	var_122_object = var_124_object;
	var_120_int = var_125_int;
	func_6922(var_123_object, var_124_object, var_125_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7964(bool var_211_bool, object var_212_object)
{
	object var_214_object;
	var_212_object = var_214_object;
	func_8328(var_214_object);
	bool var_213_bool;
	if(var_213_bool != 0) {
		var_211_bool = true;
		return 0;
	}
	var_211_bool = false;
}


// @pe
void func_7460(object var_204_object)
{
	object var_208_object;
	func_8402(var_208_object);
	object var_205_object;
	var_208_object = var_205_object;
	func_8419(var_205_object, "pt_map_warehouse_gangster", (float)2);
	object var_209_object;
	func_8402(var_209_object);
	var_204_object->ShowMap(var_209_object);
}


void func_8485(void)
{
	@Trace("Adding diary entry");
	object var_96_object;
	@CreateDiaryEntry(var_96_object, 50, 1, 12132);
	bool var_101_bool; object var_102_object;
	var_96_object = var_102_object;
	func_8373(var_101_bool, var_102_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7974(bool var_271_bool)
{
	int var_273_int;
	func_6895(var_273_int, "ood4Alexandr1");
	if(var_273_int == 0) {
		var_271_bool = true;
		return 0;
	}
	var_271_bool = false;
}


void func_6948(bool var_263_bool, string var_264_string, string var_265_string)
{
	object var_267_object;
	@FindActor(var_267_object, var_264_string);
	if(var_267_object == null)
		var_263_bool = false;
	@Trigger(var_267_object, var_265_string);
	var_263_bool = true;
}
EMIT "Stack[-1] = 0";


void func_6960(float var_63_float)
{
	float var_65_float;
	@GetGameTime(var_65_float);
	var_65_float = var_63_float;
}


// @pe
void func_7986(bool var_303_bool)
{
	int var_305_int;
	func_6895(var_305_int, "d4q03");
	if(var_305_int == 0) {
		var_303_bool = true;
		return 0;
	}
	var_303_bool = false;
}


// @pe
void func_7476(object var_115_object)
{
	@Trace("revolver ammo6 is given");
	object var_118_object;
	var_115_object = var_118_object;
	func_6935(var_118_object, "revolver_ammo", 6);
}


void func_6965(int var_156_int)
{
	float var_158_float;
	@GetGameTime(var_158_float);
	var_156_int = 1 + (var_158_float / 24);
}


void func_8501(void)
{
	@Trace("Adding diary entry");
	object var_194_object;
	@CreateDiaryEntry(var_194_object, 55, 1, 12137);
	bool var_199_bool; object var_200_object;
	var_194_object = var_200_object;
	func_8373(var_199_bool, var_200_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4409(object var_2_object, string var_175_string)
{
	bool var_176_bool;
	func_7001(var_176_bool);
	if(!var_176_bool) //@nz
		return 0;
	if(var_175_string == var_2_object)
		return 0;
	string var_179_string;
	func_6860(var_179_string);
	var_2_object = var_179_string;
}


void func_6458(object var_0_object, int var_983_int, object var_984_object)
{
	var_0_object = var_984_object;
	bool var_994_bool; object var_995_object;
	var_984_object = var_995_object;
	func_6800(var_994_bool, var_995_object);
	if(!var_994_bool) { //@nz
		var_983_int = -2;
		return 8;
	}
	object var_990_object;
	@CreateDialog(var_990_object);
	int var_997_int;
	func_6997(var_997_int);
	var_990_object->SetNPCName(var_997_int);
	string var_998_string;
	func_6999(var_998_string);
	var_990_object->SetPhoto(var_998_string);
	int var_999_int;
	func_8452(var_999_int);
	var_990_object->SetPlayerName(var_999_int);
	bool var_991_bool;
	@IsOverrideActive(var_991_bool);
	if(var_991_bool != 0) {
		var_983_int = -2;
		return 8;
	}
	@DoDialog(var_990_object);
	object var_1001_object; object var_1002_object;
	var_984_object = var_1001_object;
	var_990_object = var_1002_object;
	TaskCall(17);
	func_6521(var_1003_object, var_1004_object, var_1005_string, var_1006_bool, var_1001_object, var_1002_object);
	TaskReturn();
	bool var_993_bool;
	var_990_object->IsDialogEnd(var_993_bool);
	
	for(;;) {
		var_1041_bool = !var_993_bool; //@nz
		if(var_1041_bool == 0) goto Label_6510;
		@sync();
		var_990_object->IsDialogEnd(var_993_bool);
	}
	
Label_6510:
	object var_1042_object;
	var_984_object = var_1042_object;
	func_6856();
	@StopDialog(var_990_object);
	var_990_object->GetReturnValue(-1);
	int var_992_int = var_983_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7998(bool var_313_bool)
{
	int var_315_int;
	func_6895(var_315_int, "ood4Alexandr2");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


// @pe
void func_7487(void)
{
	@SetVariable("ood4Alexandr3", 1);
}


void func_6974(int var_215_int)
{
	float var_217_float;
	@GetGameTime(var_217_float);
	int var_218_int;
	var_217_float = var_218_int;
	var_215_int = var_218_int % 24;
}


void func_7493(void)
{
	@SetVariable("d5q01", 3);
	object var_52_object;
	func_8402(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_6960(var_63_float);
	var_49_object->AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", 1, 11958, var_63_float);
}
EMIT "Stack[-1] = 0";


void func_8517(void)
{
	@Trace("Adding diary entry");
	object var_163_object;
	@CreateDiaryEntry(var_163_object, 56, 1, 12138);
	bool var_168_bool; object var_169_object;
	var_163_object = var_169_object;
	func_8373(var_168_bool, var_169_object, 10);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6982(bool var_154_bool, int var_155_int)
{
	int var_156_int;
	func_6965(var_156_int);
	var_154_bool = var_156_int == var_155_int;
}


// @pe
void func_8010(bool var_319_bool)
{
	int var_321_int;
	func_6895(var_321_int, "d4q03");
	if(var_321_int == 2)
		var_319_bool = true;
	var_319_bool = false;
}


void func_6988(bool var_1043_bool)
{
	func_6860("No");
	bool var_1045_bool;
	@lshWaitForAnimEnd(var_1045_bool);
	var_1045_bool = var_1043_bool;
}


// @pe
void func_334(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_886_object, object var_887_object)
{
	var_0_object = var_887_object;
	var_1_object = var_886_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_893_bool = false;
		bool var_894_bool;
		func_8133(var_1_object);
		if(var_894_bool != 0) {
			bool var_900_bool;
			func_8145(var_1_object);
			if(var_900_bool != 0)
				var_893_bool = true;
		}
		if(var_893_bool != 0) {
			object var_906_object; object var_907_object;
			var_906_object = var_1_object;
			var_907_object = var_0_object;
			func_7527();
			func_483(var_887_object, "Neutral");
			var_0_object->SetMessage(12650); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10633, 13839, 11732); //@t
			var_0_object->AddReply(10665, 11772, 11771); //@t
		} else {
					func_483(var_887_object, "Neutral");
					var_0_object->SetMessage(11979); //@t
					var_0_object->ClearReplies(); //@t
					bool var_932_bool = false;
					bool var_933_bool;
					func_8157(var_1_object);
					if(var_933_bool != 0) {
						bool var_939_bool;
						func_8073(var_1_object);
						if(var_939_bool != 0)
							var_932_bool = true;
					}
					if(var_932_bool != 0)
						var_0_object->AddReply(12649, 13832, 13829); //@t
					bool var_948_bool = false;
					bool var_949_bool;
					func_8169(var_1_object);
					if(var_949_bool != 0) {
						bool var_955_bool;
						func_8073(var_1_object);
						if(var_955_bool != 0)
							var_948_bool = true;
					}
					if(var_948_bool != 0)
						var_0_object->AddReply(12660, 13832, 13840); //@t
					bool var_960_bool = false;
					bool var_961_bool;
					func_8181(var_1_object);
					if(var_961_bool != 0) {
						bool var_967_bool;
						func_8193(var_1_object);
						if(var_967_bool != 0)
							var_960_bool = true;
					}
					if(var_960_bool != 0)
						var_0_object->AddReply(11980, 13196, 13195); //@t
					var_0_object->AddReply(13018, -1, 14224); //@t
		}
	}
	for(;;) {
		bool var_922_bool;
		func_7001(var_922_bool);
		if(var_922_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6860(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_482;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_482:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x152";


// @pe
void func_1364(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_180_object, object var_181_object)
{
	var_0_object = var_181_object;
	var_1_object = var_180_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_187_bool;
		func_7625(var_1_object);
		if(var_187_bool != 0) {
			func_1732(var_181_object, "Neutral");
			var_0_object->SetMessage(5205); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5206, 5905, 5735); //@t
			var_0_object->AddReply(5365, 5908, 5907); //@t
		} else {
					func_1732(var_181_object, "Neutral");
					var_0_object->SetMessage(6325); //@t
					var_0_object->ClearReplies(); //@t
					bool var_217_bool = false;
					bool var_218_bool;
					func_7637(var_1_object);
					if(var_218_bool != 0) {
						bool var_224_bool;
						func_7673(var_1_object);
						if(var_224_bool != 0)
							var_217_bool = true;
					}
					if(var_217_bool != 0)
						var_0_object->AddReply(6329, 5761, 6985); //@t
					bool var_233_bool = true;
					bool var_234_bool = false;
					bool var_235_bool = false;
					bool var_236_bool;
					func_7964(var_236_bool, var_1_object);
					if(var_236_bool != 0) {
						bool var_247_bool;
						func_7649(var_1_object);
						if(var_247_bool != 0)
							var_235_bool = true;
					}
					if(var_235_bool != 0) {
						bool var_253_bool;
						func_7673(var_1_object);
						if(var_253_bool != 0)
							var_234_bool = true;
					}
					if(var_234_bool != 1) {
						bool var_255_bool = false;
						bool var_256_bool = false;
						bool var_257_bool;
						func_8046(var_257_bool, var_1_object);
						if(var_257_bool != 0) {
							bool var_268_bool;
							func_7649(var_1_object);
							if(var_268_bool != 0)
								var_256_bool = true;
						}
						if(var_256_bool != 0) {
							bool var_270_bool;
							func_7673(var_1_object);
							if(var_270_bool != 0)
								var_255_bool = true;
						}
						if(var_255_bool != 1)
							var_233_bool = false;
					}
					if(var_233_bool != 0)
						var_0_object->AddReply(6326, 5738, 6982); //@t
					bool var_275_bool = true;
					bool var_276_bool = false;
					bool var_277_bool = false;
					bool var_278_bool;
					func_8046(var_278_bool, var_1_object);
					if(var_278_bool != 0) {
						bool var_280_bool;
						func_7661(var_1_object);
						if(var_280_bool != 0)
							var_277_bool = true;
					}
					if(var_277_bool != 0) {
						bool var_286_bool;
						func_7673(var_1_object);
						if(var_286_bool != 0)
							var_276_bool = true;
					}
					if(var_276_bool != 1) {
						bool var_288_bool = false;
						bool var_289_bool = false;
						bool var_290_bool;
						func_7964(var_290_bool, var_1_object);
						if(var_290_bool != 0) {
							bool var_292_bool;
							func_7661(var_1_object);
							if(var_292_bool != 0)
								var_289_bool = true;
						}
						if(var_289_bool != 0) {
							bool var_294_bool;
							func_7673(var_1_object);
							if(var_294_bool != 0)
								var_288_bool = true;
						}
						if(var_288_bool != 1)
							var_275_bool = false;
					}
					if(var_275_bool != 0)
						var_0_object->AddReply(6354, 5748, 7010); //@t
					bool var_299_bool = false;
					bool var_300_bool;
					func_8289(var_1_object);
					if(var_300_bool != 0) {
						bool var_306_bool;
						func_7685(var_1_object);
						if(var_306_bool != 0)
							var_299_bool = true;
					}
					if(var_299_bool != 0)
						var_0_object->AddReply(6330, 7035, 6986); //@t
					bool var_315_bool = false;
					bool var_316_bool;
					func_8265(var_1_object);
					if(var_316_bool != 0) {
						bool var_322_bool;
						func_7697(var_1_object);
						if(var_322_bool != 0)
							var_315_bool = true;
					}
					if(var_315_bool != 0)
						var_0_object->AddReply(6337, 7041, 6993); //@t
					bool var_331_bool = false;
					bool var_332_bool;
					func_8277(var_1_object);
					if(var_332_bool != 0) {
						bool var_338_bool;
						func_7709(var_1_object);
						if(var_338_bool != 0)
							var_331_bool = true;
					}
					if(var_331_bool != 0)
						var_0_object->AddReply(6332, 7047, 6988); //@t
					bool var_347_bool = false;
					bool var_348_bool = false;
					bool var_349_bool;
					func_8241(var_1_object);
					if(var_349_bool != 0) {
						bool var_355_bool;
						func_7721(var_1_object);
						if(var_355_bool != 0)
							var_348_bool = true;
					}
					if(var_348_bool != 0) {
						bool var_361_bool;
						func_7673(var_1_object);
						if(var_361_bool != 0)
							var_347_bool = true;
					}
					if(var_347_bool != 0)
						var_0_object->AddReply(6339, 7055, 6995); //@t
					bool var_366_bool = false;
					bool var_367_bool;
					func_8229(var_1_object);
					if(var_367_bool != 0) {
						bool var_373_bool;
						func_7733(var_1_object);
						if(var_373_bool != 0)
							var_366_bool = true;
					}
					if(var_366_bool != 0)
						var_0_object->AddReply(6340, 7065, 6996); //@t
					bool var_382_bool = false;
					bool var_383_bool;
					func_8253(var_1_object);
					if(var_383_bool != 0) {
						bool var_389_bool;
						func_7745(var_1_object);
						if(var_389_bool != 0)
							var_382_bool = true;
					}
					if(var_382_bool != 0)
						var_0_object->AddReply(6344, 7083, 7000); //@t
					bool var_398_bool = false;
					bool var_399_bool;
					func_8301(var_1_object);
					if(var_399_bool != 0) {
						bool var_405_bool;
						func_7757(var_1_object);
						if(var_405_bool != 0)
							var_398_bool = true;
					}
					if(var_398_bool != 0)
						var_0_object->AddReply(6345, 7090, 7001); //@t
					bool var_414_bool = false;
					bool var_415_bool;
					func_7940(var_1_object);
					if(var_415_bool != 0) {
						bool var_421_bool;
						func_7769(var_1_object);
						if(var_421_bool != 0)
							var_414_bool = true;
					}
					if(var_414_bool != 0)
						var_0_object->AddReply(6346, 7096, 7002); //@t
					var_0_object->AddReply(7537, -1, 8319); //@t
		}
	}
	for(;;) {
		bool var_207_bool;
		func_7001(var_207_bool);
		if(var_207_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6860(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1731;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1731:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x558";


void func_6997(int var_96_int)
{
	var_96_int = 2854;
}


// @pe
void func_8022(bool var_329_bool)
{
	int var_331_int;
	func_6895(var_331_int, "d4q03_alldead");
	if(var_331_int == 1)
		var_329_bool = true;
	var_329_bool = false;
}


void func_6999(string var_97_string)
{
	var_97_string = "ui/NPC_Black.png";
}


// @pe
void func_5973(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_7001(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string;
	func_6860(var_100_string);
	var_2_object = var_100_string;
}


void func_7001(bool var_43_bool)
{
	var_43_bool = true;
}


// @pe
void func_7513(void)
{
}


// @pe
void func_7003(void)
{
	@SetVariable("ood1Alexandr1", 1);
}


// @pe
void func_7515(void)
{
	@SetVariable("ood5Alexandr1", 1);
}


void func_8533(void)
{
	@Trace("Adding diary entry");
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 69, 1, 12151);
	bool var_91_bool; object var_92_object;
	var_86_object = var_92_object;
	func_8373(var_91_bool, var_92_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7009(void)
{
	@SetVariable("ood1Alexandr2", 1);
}


// @pe
void func_8034(bool var_335_bool)
{
	int var_337_int;
	func_6895(var_337_int, "ood4Alexandr3");
	if(var_337_int == 0) {
		var_335_bool = true;
		return 0;
	}
	var_335_bool = false;
}


// @pe
void func_7521(void)
{
	@SetVariable("ood5Alexandr2", 1);
}


void func_8549(void)
{
	@Trace("Adding diary entry");
	object var_74_object;
	@CreateDiaryEntry(var_74_object, 22, 2, 3362);
	bool var_79_bool; object var_80_object;
	var_74_object = var_80_object;
	func_8373(var_79_bool, var_80_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7527(void)
{
	@SetVariable("ood6Alexandr1", 1);
}


// @pe
void func_7015(void)
{
	@SetVariable("ood1Alexandr3", 1);
}


// @pe
void func_7533(void)
{
	@SetVariable("ood6Alexandr2", 1);
}


// @pe
void func_8046(bool var_232_bool, object var_233_object)
{
	object var_235_object;
	var_233_object = var_235_object;
	func_8339(var_235_object);
	bool var_234_bool;
	if(var_234_bool != 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


// @pe
void func_7021(void)
{
	@SetVariable("ood1Alexandr4", 1);
}


// @pe
void func_7539(void)
{
	@SetVariable("ood6Alexandr3", 1);
}


// @pe
void func_7027(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_8565(void)
{
	@Trace("Adding diary entry");
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 96, 2, 12178);
	bool var_104_bool; object var_105_object;
	var_99_object = var_105_object;
	func_8373(var_104_bool, var_105_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8056(bool var_112_bool)
{
	int var_114_int;
	func_6895(var_114_int, "d5q01");
	if(var_114_int == 2)
		var_112_bool = true;
	var_112_bool = false;
}


// @pe
void func_7545(void)
{
	@SetVariable("ood6Alexandr4", 1);
}


// @pe
void func_7033(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_6521(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_1001_object, object var_1002_object)
{
	var_0_object = var_1002_object;
	var_1_object = var_1001_object;
	var_3_object = false;
	if(1 != 0) {
		func_6593(var_1002_object, "Neutral");
		var_0_object->SetMessage(12203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1014_bool = false;
		bool var_1015_bool;
		func_8205(var_1_object);
		if(var_1015_bool != 0) {
			bool var_1021_bool;
			func_8217(var_1_object);
			if(var_1021_bool != 0)
				var_1014_bool = true;
		}
		if(var_1014_bool != 0)
			var_0_object->AddReply(13340, 14573, 14572); //@t
		var_0_object->AddReply(12204, -1, 13359); //@t
		goto Label_6563;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x197d";
	}
Label_6563:
	bool var_1033_bool;
	func_7001(var_1033_bool);
	if(var_1033_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_6860(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_6592;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6592:
		return 0;

	}
	
}


// @pe
void func_7039(void)
{
	@SetVariable("ood1Alexandr5", 1);
}


void func_7551(void)
{
	object var_131_object;
	func_8402(var_131_object);
	object var_130_object;
	var_131_object = var_130_object;
	float var_136_float;
	func_6960(var_136_float);
	var_130_object->AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", 1, 15397, var_136_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8068(bool var_233_bool)
{
	var_233_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


// @pe
void func_7045(void)
{
	@SetVariable("ood1Alexandr6", 1);
}


void func_8581(void)
{
	@Trace("Adding diary entry");
	object var_195_object;
	@CreateDiaryEntry(var_195_object, 98, 2, 12180);
	bool var_200_bool; object var_201_object;
	var_195_object = var_201_object;
	func_8373(var_200_bool, var_201_object, 22);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8073(bool var_205_bool)
{
	int var_207_int;
	func_6895(var_207_int, "d6q02");
	if(var_207_int == 1)
		var_205_bool = true;
	var_205_bool = false;
}


// @pe
void func_7051(void)
{
	@SetVariable("ood1Alexandr7", 1);
}


// @pe
void func_7567(void)
{
	@SetVariable("ood7Alexandr1", 1);
}


// @pe
void func_7057(void)
{
	@SetVariable("ood1Alexandr8", 1);
}


// @pe
void func_7573(void)
{
	@SetVariable("KnowAlexandr", 1);
}


// @pe
void func_8085(bool var_124_bool)
{
	int var_126_int;
	func_6895(var_126_int, "ood5Alexandr1");
	if(var_126_int == 0) {
		var_124_bool = true;
		return 0;
	}
	var_124_bool = false;
}


// @pe
void func_7063(void)
{
	@SetVariable("ood1Alexandr9", 1);
}


void func_8597(void)
{
	@Trace("Adding diary entry");
	object var_255_object;
	@CreateDiaryEntry(var_255_object, 100, 2, 12182);
	bool var_260_bool; object var_261_object;
	var_255_object = var_261_object;
	func_8373(var_260_bool, var_261_object, 22);
}
EMIT "Stack[-1] = 0";


void func_7579(void)
{
	object var_50_object;
	func_8402(var_50_object);
	object var_49_object;
	var_50_object = var_49_object;
	float var_61_float;
	func_6960(var_61_float);
	var_49_object->AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", 1, 15387, var_61_float);
	float var_68_float;
	func_6960(var_68_float);
	var_49_object->AddMark("d6q01AlexandrGotoLara", "pt_map_lara", 1, 15386, var_68_float);
	float var_73_float;
	func_6960(var_73_float);
	var_49_object->AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", 1, 15388, var_73_float);
	func_8613();
}
EMIT "Stack[-1] = 0";


// @pe
void func_7069(void)
{
	@SetVariable("ood1Alexandr10", 1);
}


// @pe
void func_8097(bool var_140_bool)
{
	int var_142_int;
	func_6895(var_142_int, "ood5Alexandr2");
	if(var_142_int == 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


// @pe
void func_7075(void)
{
	@SetVariable("ood1Alexandr11", 1);
}


void func_8613(void)
{
	@Trace("Adding diary entry");
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 114, 1, 13737);
	bool var_80_bool; object var_81_object;
	var_75_object = var_81_object;
	func_8373(var_80_bool, var_81_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7081(void)
{
	@SetVariable("ood1Alexandr12", 1);
}


// @pe
void func_8109(bool var_130_bool)
{
	int var_132_int;
	func_6895(var_132_int, "d5q03");
	if(var_132_int == 1)
		var_130_bool = true;
	var_130_bool = false;
}


// @pe
void func_7087(void)
{
	@SetVariable("ood2Alexandr1", 1);
}


void func_8629(void)
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_7093(void)
{
	@SetVariable("ood2Alexandr2", 1);
}


// @pe
void func_8633(object var_41_object)
{
	var_42_bool = GlobalVars[1];
	if(!var_42_bool) { //@nz
		int var_44_int; object var_45_object;
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_153_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_154_bool;
	func_6982(var_154_bool, 1);
	if(var_154_bool != 0) {
		int var_162_int; object var_163_object;
		var_41_object = var_163_object;
		TaskCall(6);
		func_1301(var_164_object, var_162_int, var_163_object);
		TaskReturn();
		return 0;
	}
	bool var_435_bool;
	func_6982(var_435_bool, 2);
	if(var_435_bool != 0) {
		int var_437_int; object var_438_object;
		var_41_object = var_438_object;
		TaskCall(8);
		func_3026(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	bool var_565_bool;
	func_6982(var_565_bool, 3);
	if(var_565_bool != 0) {
		int var_567_int; object var_568_object;
		var_41_object = var_568_object;
		TaskCall(10);
		func_4210(var_569_object, var_567_int, var_568_object);
		TaskReturn();
		return 0;
	}
	bool var_671_bool;
	func_6982(var_671_bool, 4);
	if(var_671_bool != 0) {
		int var_673_int; object var_674_object;
		var_41_object = var_674_object;
		TaskCall(12);
		func_5051(var_675_object, var_673_int, var_674_object);
		TaskReturn();
		return 0;
	}
	bool var_779_bool;
	func_6982(var_779_bool, 5);
	if(var_779_bool != 0) {
		int var_781_int; object var_782_object;
		var_41_object = var_782_object;
		TaskCall(14);
		func_5809(var_783_object, var_781_int, var_782_object);
		TaskReturn();
		return 0;
	}
	bool var_866_bool;
	func_6982(var_866_bool, 6);
	if(var_866_bool != 0) {
		int var_868_int; object var_869_object;
		var_41_object = var_869_object;
		TaskCall(4);
		func_271(var_870_object, var_868_int, var_869_object);
		TaskReturn();
		return 0;
	}
	bool var_981_bool;
	func_6982(var_981_bool, 7);
	if(var_981_bool != 0) {
		int var_983_int; object var_984_object;
		var_41_object = var_984_object;
		TaskCall(16);
		func_6458(var_985_object, var_983_int, var_984_object);
		TaskReturn();
		return 0;
	}
	bool var_1043_bool;
	func_6988(var_1043_bool);
}


// @pe
void func_8121(bool var_146_bool)
{
	int var_148_int;
	func_6895(var_148_int, "d5q03");
	if(var_148_int == 2)
		var_146_bool = true;
	var_146_bool = false;
}


// @pe
void func_7099(void)
{
	@SetVariable("ood2Alexandr3", 1);
}


void func_5051(object var_0_object, int var_673_int, object var_674_object)
{
	var_0_object = var_674_object;
	bool var_684_bool; object var_685_object;
	var_674_object = var_685_object;
	func_6800(var_684_bool, var_685_object);
	if(!var_684_bool) { //@nz
		var_673_int = -2;
		return 8;
	}
	object var_680_object;
	@CreateDialog(var_680_object);
	int var_687_int;
	func_6997(var_687_int);
	var_680_object->SetNPCName(var_687_int);
	string var_688_string;
	func_6999(var_688_string);
	var_680_object->SetPhoto(var_688_string);
	int var_689_int;
	func_8452(var_689_int);
	var_680_object->SetPlayerName(var_689_int);
	bool var_681_bool;
	@IsOverrideActive(var_681_bool);
	if(var_681_bool != 0) {
		var_673_int = -2;
		return 8;
	}
	@DoDialog(var_680_object);
	object var_691_object; object var_692_object;
	var_674_object = var_691_object;
	var_680_object = var_692_object;
	TaskCall(13);
	func_5114(var_693_object, var_694_object, var_695_string, var_696_bool, var_691_object, var_692_object);
	TaskReturn();
	bool var_683_bool;
	var_680_object->IsDialogEnd(var_683_bool);
	
	for(;;) {
		var_777_bool = !var_683_bool; //@nz
		if(var_777_bool == 0) goto Label_5103;
		@sync();
		var_680_object->IsDialogEnd(var_683_bool);
	}
	
Label_5103:
	object var_778_object;
	var_674_object = var_778_object;
	func_6856();
	@StopDialog(var_680_object);
	var_680_object->GetReturnValue(-1);
	int var_682_int = var_673_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7616(void)
{
	int var_292_int;
	func_6895(var_292_int, "d2TalkToAlexandr");
	if(var_292_int == 1) {
	}
}


// @pe
void func_7105(void)
{
	@SetVariable("ood2Alexandr5", 1);
}


// @pe
void func_6593(object var_2_object, string var_56_string)
{
	bool var_57_bool;
	func_7001(var_57_bool);
	if(!var_57_bool) //@nz
		return 0;
	if(var_56_string == var_2_object)
		return 0;
	string var_60_string;
	func_6860(var_60_string);
	var_2_object = var_60_string;
}


// @pe
void func_8133(bool var_156_bool)
{
	int var_158_int;
	func_6895(var_158_int, "d6q01");
	if(var_158_int == 1)
		var_156_bool = true;
	var_156_bool = false;
}


void func_7111(void)
{
	@SetVariable("d2q01", 1);
	object var_56_object;
	func_8402(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	float var_67_float;
	func_6960(var_67_float);
	var_53_object->AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", 1, 11387, var_67_float);
	func_8469();
	func_8485();
	object var_104_object;
	func_6900(var_104_object, "quest_d2_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_7625(bool var_160_bool)
{
	int var_162_int;
	func_6895(var_162_int, "ood1Alexandr1");
	if(var_162_int == 0) {
		var_160_bool = true;
		return 0;
	}
	var_160_bool = false;
}


// @pe
void func_8145(bool var_164_bool)
{
	int var_166_int;
	func_6895(var_166_int, "ood6Alexandr1");
	if(var_166_int == 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


void func_3026(object var_0_object, int var_437_int, object var_438_object)
{
	var_0_object = var_438_object;
	bool var_448_bool; object var_449_object;
	var_438_object = var_449_object;
	func_6800(var_448_bool, var_449_object);
	if(!var_448_bool) { //@nz
		var_437_int = -2;
		return 8;
	}
	object var_444_object;
	@CreateDialog(var_444_object);
	int var_451_int;
	func_6997(var_451_int);
	var_444_object->SetNPCName(var_451_int);
	string var_452_string;
	func_6999(var_452_string);
	var_444_object->SetPhoto(var_452_string);
	int var_453_int;
	func_8452(var_453_int);
	var_444_object->SetPlayerName(var_453_int);
	bool var_445_bool;
	@IsOverrideActive(var_445_bool);
	if(var_445_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	@DoDialog(var_444_object);
	object var_455_object; object var_456_object;
	var_438_object = var_455_object;
	var_444_object = var_456_object;
	TaskCall(9);
	func_3089(var_457_object, var_458_object, var_459_string, var_460_bool, var_455_object, var_456_object);
	TaskReturn();
	bool var_447_bool;
	var_444_object->IsDialogEnd(var_447_bool);
	
	for(;;) {
		var_563_bool = !var_447_bool; //@nz
		if(var_563_bool == 0) goto Label_3078;
		@sync();
		var_444_object->IsDialogEnd(var_447_bool);
	}
	
Label_3078:
	object var_564_object;
	var_438_object = var_564_object;
	func_6856();
	@StopDialog(var_444_object);
	var_444_object->GetReturnValue(-1);
	int var_446_int = var_437_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7637(bool var_193_bool)
{
	int var_195_int;
	func_6895(var_195_int, "ood1Alexandr2");
	if(var_195_int == 0) {
		var_193_bool = true;
		return 0;
	}
	var_193_bool = false;
}


// @pe
void func_8157(bool var_199_bool)
{
	int var_201_int;
	func_6895(var_201_int, "ood6Alexandr2");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


// @pe
void func_7649(bool var_222_bool)
{
	int var_224_int;
	func_6895(var_224_int, "ood1Alexandr3");
	if(var_224_int == 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


// @pe
void func_483(object var_2_object, string var_174_string)
{
	bool var_175_bool;
	func_7001(var_175_bool);
	if(!var_175_bool) //@nz
		return 0;
	if(var_174_string == var_2_object)
		return 0;
	string var_178_string;
	func_6860(var_178_string);
	var_2_object = var_178_string;
}


// @pe
void func_7141(void)
{
	func_8517();
	bool var_171_bool;
	func_6948(var_171_bool, "quest_d2_01", "completed");
}


// @pe
void func_8169(bool var_215_bool)
{
	int var_217_int;
	func_6895(var_217_int, "ood6Alexandr3");
	if(var_217_int == 0) {
		var_215_bool = true;
		return 0;
	}
	var_215_bool = false;
}


// @pe
void func_7661(bool var_255_bool)
{
	int var_257_int;
	func_6895(var_257_int, "ood1Alexandr4");
	if(var_257_int == 0) {
		var_255_bool = true;
		return 0;
	}
	var_255_bool = false;
}


void func_7151(void)
{
	@SetVariable("d2q01", 6);
	object var_216_object;
	func_8402(var_216_object);
	object var_213_object;
	var_216_object = var_213_object;
	float var_221_float;
	func_6960(var_221_float);
	var_213_object->AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", 1, 11390, var_221_float);
	float var_226_float;
	func_6960(var_226_float);
	var_213_object->AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", 1, 11391, var_226_float);
	func_8501();
}
EMIT "Stack[-1] = 0";


// @pe
void func_8181(bool var_227_bool)
{
	int var_229_int;
	func_6895(var_229_int, "d6q01KnowKillerIsKlara");
	if(var_229_int == 1)
		var_227_bool = true;
	var_227_bool = false;
}


// @pe
void func_7673(bool var_199_bool)
{
	int var_201_int;
	func_6895(var_201_int, "d1q01FirstGeorgVisit");
	if(var_201_int == 1)
		var_199_bool = true;
	var_199_bool = false;
}


// @pe
void func_5114(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_691_object, object var_692_object)
{
	var_0_object = var_692_object;
	var_1_object = var_691_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_698_bool;
		func_7974(var_1_object);
		if(var_698_bool != 0) {
			func_5250(var_692_object, "Neutral");
			var_0_object->SetMessage(11175); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11176, 12361, 12360); //@t
			var_0_object->AddReply(11178, 12366, 12362); //@t
		} else {
					func_5250(var_692_object, "Neutral");
					var_0_object->SetMessage(11164); //@t
					var_0_object->ClearReplies(); //@t
					bool var_726_bool;
					func_7986(var_1_object);
					if(var_726_bool != 0)
						var_0_object->AddReply(11489, 12692, 12691); //@t
					bool var_735_bool = false;
					bool var_736_bool;
					func_7998(var_1_object);
					if(var_736_bool != 0) {
						bool var_742_bool;
						func_8010(var_1_object);
						if(var_742_bool != 0)
							var_735_bool = true;
					}
					if(var_735_bool != 0)
						var_0_object->AddReply(11187, 12373, 12372); //@t
					bool var_751_bool = false;
					bool var_752_bool;
					func_8022(var_1_object);
					if(var_752_bool != 0) {
						bool var_758_bool;
						func_8034(var_1_object);
						if(var_758_bool != 0)
							var_751_bool = true;
					}
					if(var_751_bool != 0)
						var_0_object->AddReply(11495, 12697, 12696); //@t
					bool var_767_bool;
					func_7829(var_767_bool, var_1_object);
					if(var_767_bool != 0)
						var_0_object->AddReply(11165, 12349, 12348); //@t
					var_0_object->AddReply(11174, -1, 12358); //@t
		}
	}
	for(;;) {
		bool var_716_bool;
		func_7001(var_716_bool);
		if(var_716_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_6860(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5249;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5249:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x13fe";


