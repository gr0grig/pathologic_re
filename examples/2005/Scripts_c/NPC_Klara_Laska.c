// @GLOBALS: 0:object:

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
			func_3040();
			if(var_37_cvector == 26672) {
				object var_42_object = var_1_object;
				func_3188(var_0_object);
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_3291();
			}
			if(var_37_cvector == 30634) {
				object var_83_object = var_1_object;
				func_3188(var_0_object);
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_3291();
			}
			if(var_37_cvector == 26678) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_3209();
			}
			if(var_36_bool == 26665) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525297); //@t
				var_0_object->ClearReplies(); //@t
				bool var_108_bool = true;
				bool var_109_bool = false;
				bool var_110_bool;
				func_3363(var_110_bool, var_1_object);
				if(var_110_bool != 0) {
					bool var_127_bool;
					func_3339(var_1_object);
					if(var_127_bool != 0)
						var_109_bool = true;
				}
				if(var_109_bool != 1) {
					bool var_135_bool = false;
					bool var_136_bool;
					func_3351(var_1_object);
					if(var_136_bool != 0) {
						bool var_142_bool;
						func_3363(var_142_bool, var_1_object);
						if(var_142_bool != 0)
							var_135_bool = true;
					}
					if(var_135_bool != 1)
						var_108_bool = false;
				}
				if(var_108_bool != 0)
					var_0_object->AddReply(525298, 26667, 26666); //@t
				bool var_147_bool = false;
				bool var_148_bool = false;
				bool var_149_bool;
				func_3339(var_1_object);
				if(var_149_bool != 0) {
					bool var_151_bool;
					func_3363(var_151_bool, var_1_object);
					if(!var_151_bool) //@nz
						var_148_bool = true;
				}
				if(var_148_bool != 0) {
					bool var_154_bool;
					func_3394(var_1_object);
					if(var_154_bool != 0)
						var_147_bool = true;
				}
				if(var_147_bool != 0)
					var_0_object->AddReply(525310, 26679, 26678); //@t
				var_0_object->AddReply(525305, -1, 26673); //@t
				return 0;
			}
			if(var_36_bool == 26679) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525312, 42889, 26680); //@t
				var_0_object->AddReply(540831, -1, 42888); //@t
				return 0;
			}
			if(var_36_bool == 42889) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540833, -1, 42890); //@t
				var_0_object->AddReply(540834, -1, 42891); //@t
				return 0;
			}
			if(var_36_bool == 26667) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529180, 30631, 30630); //@t
				var_0_object->AddReply(540812, 30633, 42864); //@t
				return 0;
			}
			if(var_36_bool == 30631) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529181); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529182, 30633, 30632); //@t
				return 0;
			}
			if(var_36_bool == 30633) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529183); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525300, 26669, 26668); //@t
				var_0_object->AddReply(540813, 42867, 42866); //@t
				return 0;
			}
			if(var_36_bool == 42867) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540819, 26669, 42872); //@t
				var_0_object->AddReply(540820, 42875, 42874); //@t
				return 0;
			}
			if(var_36_bool == 42875) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540822, 42868, 42876); //@t
				return 0;
			}
			if(var_36_bool == 26669) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525302, 42868, 26670); //@t
				var_0_object->AddReply(540826, 42882, 42881); //@t
				return 0;
			}
			if(var_36_bool == 42882) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540828, 42879, 42883); //@t
				return 0;
			}
			if(var_36_bool == 42868) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540816, 42870, 42869); //@t
				var_0_object->AddReply(540823, 42879, 42878); //@t
				return 0;
			}
			if(var_36_bool == 42879) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540825, 42870, 42880); //@t
				return 0;
			}
			if(var_36_bool == 42870) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540818, 26671, 42871); //@t
				return 0;
			}
			if(var_36_bool == 26671) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525304, -1, 26672); //@t
				var_0_object->AddReply(540829, 42887, 42886); //@t
				return 0;
			}
			if(var_36_bool == 42887) {
				func_213(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529184, -1, 30634); //@t
				return 0;
			}
			var_3_string = true;
			bool var_288_bool;
			func_3138(var_288_bool);
			if(var_288_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xec";
	
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
			func_3040();
			if(var_36_bool == 26854) {
				func_803(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525499, -1, 26855); //@t
				var_0_object->AddReply(526256, -1, 27530); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3138(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x33a";
	
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
			func_3040();
			if(var_37_cvector == 27231) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3215();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3297();
			}
			if(var_36_bool == 27228) {
				bool var_105_bool;
				func_3406(var_1_object);
				if(var_105_bool != 0) {
					object var_113_object; object var_114_object;
					var_113_object = var_1_object;
					var_114_object = var_0_object;
					func_3241();
					object var_117_object; object var_118_object;
					var_117_object = var_1_object;
					var_118_object = var_0_object;
					func_3247();
					func_1036(var_37_cvector, "Neutral");
					var_0_object->SetMessage(525944); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529090, 30536, 30535); //@t
					return 0;
				}
				func_1036(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525949, -1, 27233); //@t
				var_0_object->AddReply(529092, -1, 30537); //@t
				return 0;
			}
			if(var_36_bool == 30536) {
				func_1036(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525945, 27230, 27229); //@t
				return 0;
			}
			if(var_36_bool == 27230) {
				func_1036(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529093, 30539, 30538); //@t
				return 0;
			}
			if(var_36_bool == 30539) {
				func_1036(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525947, -1, 27231); //@t
				return 0;
			}
			var_3_string = true;
			bool var_166_bool;
			func_3138(var_166_bool);
			if(var_166_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x423";
	
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
			func_3040();
			if(var_37_cvector == 30213) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3265();
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3297();
			}
			if(var_36_bool == 30215) {
				bool var_105_bool;
				func_3418(var_1_object);
				if(var_105_bool != 0) {
					object var_113_object; object var_114_object;
					var_113_object = var_1_object;
					var_114_object = var_0_object;
					func_3253();
					object var_117_object; object var_118_object;
					var_117_object = var_1_object;
					var_118_object = var_0_object;
					func_3259();
					func_1371(var_37_cvector, "Neutral");
					var_0_object->SetMessage(528802); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526757, 30208, 28034); //@t
					var_0_object->AddReply(528803, 30208, 30216); //@t
					return 0;
				}
				func_1371(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526759, -1, 28036); //@t
				var_0_object->AddReply(528801, -1, 30214); //@t
				return 0;
			}
			if(var_36_bool == 30208) {
				func_1371(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528796, 30210, 30209); //@t
				var_0_object->AddReply(541035, -1, 43129); //@t
				return 0;
			}
			if(var_36_bool == 30210) {
				func_1371(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528798, 30212, 30211); //@t
				return 0;
			}
			if(var_36_bool == 30212) {
				func_1371(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528800, -1, 30213); //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			func_3138(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x572";
	
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
			func_3040();
			if(var_36_bool == 36960) {
				func_1686(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_1686(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_1686(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_3138(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6ad";
	
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
			func_3040();
			if(var_37_cvector == 26020) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3162();
			}
			if(var_37_cvector == 26022) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3168();
				object var_68_object = var_1_object;
				func_3140(var_0_object);
			}
			if(var_36_bool == 25983) {
				bool var_96_bool = false;
				bool var_97_bool;
				func_3303(var_1_object);
				if(var_97_bool != 0) {
					bool var_105_bool;
					func_3315(var_1_object);
					if(!var_105_bool) //@nz
						var_96_bool = true;
				}
				if(var_96_bool != 0) {
					object var_112_object; object var_113_object;
					var_112_object = var_1_object;
					var_113_object = var_0_object;
					func_3156();
					func_1994(var_37_cvector, "Neutral");
					var_0_object->SetMessage(524644); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526298, 27579, 27578); //@t
					var_0_object->AddReply(526300, 27581, 27580); //@t
					return 0;
				}
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524648); //@t
				var_0_object->ClearReplies(); //@t
				bool var_137_bool = false;
				bool var_138_bool;
				func_3315(var_1_object);
				if(var_138_bool != 0) {
					bool var_140_bool;
					func_3327(var_1_object);
					if(var_140_bool != 0)
						var_137_bool = true;
				}
				if(var_137_bool != 0)
					var_0_object->AddReply(524681, 26021, 26020); //@t
				var_0_object->AddReply(524649, -1, 25988); //@t
				return 0;
			}
			if(var_36_bool == 26021) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526310, 27593, 27592); //@t
				return 0;
			}
			if(var_36_bool == 27593) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526312, 27595, 27594); //@t
				return 0;
			}
			if(var_36_bool == 27595) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524683, -1, 26022); //@t
				return 0;
			}
			if(var_36_bool == 27581) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526302, 27579, 27582); //@t
				return 0;
			}
			if(var_36_bool == 27579) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526303, 27585, 27584); //@t
				return 0;
			}
			if(var_36_bool == 27585) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524645, 25985, 25984); //@t
				var_0_object->AddReply(526305, 25985, 27586); //@t
				return 0;
			}
			if(var_36_bool == 25985) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524647, -1, 25986); //@t
				var_0_object->AddReply(526306, 27589, 27588); //@t
				return 0;
			}
			if(var_36_bool == 27589) {
				func_1994(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526308, -1, 27590); //@t
				var_0_object->AddReply(526309, -1, 27591); //@t
				return 0;
			}
			var_3_string = true;
			bool var_217_bool;
			func_3138(var_217_bool);
			if(var_217_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7e1";
	
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
			func_3040();
			if(var_36_int == 42548) {
				func_2431(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3138(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x996";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2499(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2570();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2784(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2539(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2519(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3047(var_82_object);
					var_82_object = var_81_object;
					func_2932(var_80_bool, var_81_object);
				}
			} else {
				func_2534(var_36_int);
				func_2561();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2752();
		func_2570();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_2570();
		func_3012("Neutral");
		func_2561();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2561();
		else
			func_3012("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2752();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2775(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3603(var_54_object);
			func_3012("Neutral");
			func_2570();
			func_2561();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_2784(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_2561(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


void func_3586(int var_216_int)
{
	int var_218_int;
	@GetVariable("branch", var_218_int);
	if(var_218_int == 0) {
		var_216_int = 1;
		return 2;
	EMIT "GOTO 0xe11";
	}
	if(var_218_int == 1) {
		var_216_int = 2;
		return 2;
	}
	var_216_int = 3;
}


void func_1542(object var_0_object, int var_637_int, object var_638_object)
{
	var_0_object = var_638_object;
	bool var_648_bool; object var_649_object;
	object var_650_object;
	func_3047(var_650_object);
	var_650_object = var_649_object;
	func_2874(var_648_bool, var_649_object);
	bool var_651_bool; object var_652_object;
	var_638_object = var_652_object;
	func_2789(var_651_bool, var_652_object, 70.0);
	if(!var_651_bool) { //@nz
		var_637_int = -2;
		return 8;
	}
	object var_644_object;
	@CreateDialog(var_644_object);
	int var_655_int;
	func_3132(var_655_int);
	var_644_object->SetNPCName(var_655_int);
	int var_656_int;
	func_3130(var_656_int);
	var_644_object->SetNPCDescription(var_656_int);
	string var_657_string;
	func_3134(var_657_string);
	var_644_object->SetPhoto(var_657_string);
	string var_658_string;
	func_3136(var_658_string);
	var_644_object->SetPhoto2(var_658_string);
	int var_659_int;
	func_3586(var_659_int);
	var_644_object->SetPlayerName(var_659_int);
	bool var_645_bool;
	@IsOverrideActive(var_645_bool);
	if(var_645_bool != 0) {
		var_637_int = -2;
		return 8;
	}
	@DoDialog(var_644_object);
	object var_661_object; object var_662_object;
	var_638_object = var_661_object;
	var_644_object = var_662_object;
	TaskCall(10);
	func_1623(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object);
	TaskReturn();
	bool var_647_bool;
	var_644_object->IsDialogEnd(var_647_bool);
	
	for(;;) {
		var_694_bool = !var_647_bool; //@nz
		if(var_694_bool == 0) goto Label_1612;
		@sync();
		var_644_object->IsDialogEnd(var_647_bool);
	}
	
Label_1612:
	object var_695_object;
	var_638_object = var_695_object;
	func_2857();
	@StopDialog(var_644_object);
	var_644_object->GetReturnValue(-1);
	int var_646_int = var_637_int;
}
EMIT "Stack[-4] = 0";


void func_3079(bool var_418_bool, object var_419_object, string var_420_string)
{
	int var_423_int;
	@GetInvItemByName(var_423_int, var_420_string);
	bool var_424_bool;
	var_419_object->HasItem(var_423_int, var_424_bool);
	var_424_bool = var_418_bool;
}


void func_1801(object var_0_object, int var_277_int, object var_278_object)
{
	var_0_object = var_278_object;
	bool var_288_bool; object var_289_object;
	object var_290_object;
	func_3047(var_290_object);
	var_290_object = var_289_object;
	func_2874(var_288_bool, var_289_object);
	bool var_291_bool; object var_292_object;
	var_278_object = var_292_object;
	func_2789(var_291_bool, var_292_object, 70.0);
	if(!var_291_bool) { //@nz
		var_277_int = -2;
		return 8;
	}
	object var_284_object;
	@CreateDialog(var_284_object);
	int var_295_int;
	func_3132(var_295_int);
	var_284_object->SetNPCName(var_295_int);
	int var_296_int;
	func_3130(var_296_int);
	var_284_object->SetNPCDescription(var_296_int);
	string var_297_string;
	func_3134(var_297_string);
	var_284_object->SetPhoto(var_297_string);
	string var_298_string;
	func_3136(var_298_string);
	var_284_object->SetPhoto2(var_298_string);
	int var_299_int;
	func_3586(var_299_int);
	var_284_object->SetPlayerName(var_299_int);
	bool var_285_bool;
	@IsOverrideActive(var_285_bool);
	if(var_285_bool != 0) {
		var_277_int = -2;
		return 8;
	}
	@DoDialog(var_284_object);
	object var_301_object; object var_302_object;
	var_278_object = var_301_object;
	var_284_object = var_302_object;
	TaskCall(12);
	func_1882(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object);
	TaskReturn();
	bool var_287_bool;
	var_284_object->IsDialogEnd(var_287_bool);
	
	for(;;) {
		var_368_bool = !var_287_bool; //@nz
		if(var_368_bool == 0) goto Label_1871;
		@sync();
		var_284_object->IsDialogEnd(var_287_bool);
	}
	
Label_1871:
	object var_369_object;
	var_278_object = var_369_object;
	func_2857();
	@StopDialog(var_284_object);
	var_284_object->GetReturnValue(-1);
	int var_286_int = var_277_int;
}
EMIT "Stack[-4] = 0";


void func_2570(void)
{
	@KillTimer(10);
}


// @pe
void func_3339(bool var_431_bool)
{
	int var_433_int;
	func_3063(var_433_int, "k2q02");
	if(var_433_int == 1)
		var_431_bool = true;
	var_431_bool = false;
}


// @pe
void func_1036(object var_2_object, string var_525_string)
{
	bool var_526_bool;
	func_3138(var_526_bool);
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
	func_3019(var_529_string, var_530_bool);
	var_2_object = var_525_string;
	
}


void func_13(object var_0_object, int var_372_int, object var_373_object)
{
	var_0_object = var_373_object;
	bool var_383_bool; object var_384_object;
	object var_385_object;
	func_3047(var_385_object);
	var_385_object = var_384_object;
	func_2874(var_383_bool, var_384_object);
	bool var_386_bool; object var_387_object;
	var_373_object = var_387_object;
	func_2789(var_386_bool, var_387_object, 70.0);
	if(!var_386_bool) { //@nz
		var_372_int = -2;
		return 8;
	}
	object var_379_object;
	@CreateDialog(var_379_object);
	int var_390_int;
	func_3132(var_390_int);
	var_379_object->SetNPCName(var_390_int);
	int var_391_int;
	func_3130(var_391_int);
	var_379_object->SetNPCDescription(var_391_int);
	string var_392_string;
	func_3134(var_392_string);
	var_379_object->SetPhoto(var_392_string);
	string var_393_string;
	func_3136(var_393_string);
	var_379_object->SetPhoto2(var_393_string);
	int var_394_int;
	func_3586(var_394_int);
	var_379_object->SetPlayerName(var_394_int);
	bool var_380_bool;
	@IsOverrideActive(var_380_bool);
	if(var_380_bool != 0) {
		var_372_int = -2;
		return 8;
	}
	@DoDialog(var_379_object);
	object var_396_object; object var_397_object;
	var_373_object = var_396_object;
	var_379_object = var_397_object;
	TaskCall(2);
	func_94(var_398_object, var_399_object, var_400_string, var_401_bool, var_396_object, var_397_object);
	TaskReturn();
	bool var_382_bool;
	var_379_object->IsDialogEnd(var_382_bool);
	
	for(;;) {
		var_476_bool = !var_382_bool; //@nz
		if(var_476_bool == 0) goto Label_83;
		@sync();
		var_379_object->IsDialogEnd(var_382_bool);
	}
	
Label_83:
	object var_477_object;
	var_373_object = var_477_object;
	func_2857();
	@StopDialog(var_379_object);
	var_379_object->GetReturnValue(-1);
	int var_381_int = var_372_int;
}
EMIT "Stack[-4] = 0";


void func_3086(float var_65_float)
{
	float var_67_float;
	@GetGameTime(var_67_float);
	var_67_float = var_65_float;
}


void func_3603(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_laska", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(3);
		func_664(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_laska", 1);
	}
	bool var_274_bool;
	func_3100(var_274_bool, 1);
	if(var_274_bool != 0) {
		int var_277_int; object var_278_object;
		var_54_object = var_278_object;
		TaskCall(11);
		func_1801(var_279_object, var_277_int, var_278_object);
		TaskReturn();
		return 2;
	}
	bool var_370_bool;
	func_3100(var_370_bool, 2);
	if(var_370_bool != 0) {
		int var_372_int; object var_373_object;
		var_54_object = var_373_object;
		TaskCall(1);
		func_13(var_374_object, var_372_int, var_373_object);
		TaskReturn();
		return 2;
	}
	bool var_478_bool;
	func_3100(var_478_bool, 5);
	if(var_478_bool != 0) {
		int var_480_int; object var_481_object;
		var_54_object = var_481_object;
		TaskCall(5);
		func_867(var_482_object, var_480_int, var_481_object);
		TaskReturn();
		return 2;
	}
	bool var_555_bool;
	func_3100(var_555_bool, 6);
	if(var_555_bool != 0) {
		int var_557_int; object var_558_object;
		var_54_object = var_558_object;
		TaskCall(7);
		func_1197(var_559_object, var_557_int, var_558_object);
		TaskReturn();
		return 2;
	}
	bool var_635_bool;
	func_3100(var_635_bool, 12);
	if(var_635_bool != 0) {
		int var_637_int; object var_638_object;
		var_54_object = var_638_object;
		TaskCall(9);
		func_1542(var_639_object, var_637_int, var_638_object);
		TaskReturn();
		return 2;
	}
	int var_696_int; object var_697_object;
	var_54_object = var_697_object;
	TaskCall(13);
	func_2292(var_698_object, var_696_int, var_697_object);
	TaskReturn();
}


void func_3091(int var_125_int)
{
	float var_127_float;
	@GetGameTime(var_127_float);
	var_125_int = 1 + (var_127_float / 24);
}


// @pe
void func_3351(bool var_438_bool)
{
	int var_440_int;
	func_3063(var_440_int, "k2q02");
	if(var_440_int == 2)
		var_438_bool = true;
	var_438_bool = false;
}


// @pe
void func_3100(bool var_274_bool, int var_275_int)
{
	int var_276_int;
	func_3091(var_276_int);
	var_274_bool = var_276_int == var_275_int;
}


void func_3106(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


// @pe
void func_3363(bool var_414_bool, object var_415_object)
{
	bool var_416_bool = false;
	bool var_417_bool = false;
	bool var_418_bool; object var_419_object;
	var_415_object = var_419_object;
	func_3079(var_418_bool, var_419_object, "flower");
	if(var_418_bool != 0) {
		bool var_425_bool; object var_426_object;
		var_415_object = var_426_object;
		func_3079(var_425_bool, var_426_object, "milk");
		if(var_425_bool != 0)
			var_417_bool = true;
	}
	if(var_417_bool != 0) {
		bool var_428_bool; object var_429_object;
		var_415_object = var_429_object;
		func_3079(var_428_bool, var_429_object, "bread");
		if(var_428_bool != 0)
			var_416_bool = true;
	}
	if(var_416_bool != 0) {
		var_414_bool = true;
		return 0;
	}
	var_414_bool = false;
}


// @pe
void func_803(object var_2_object, string var_232_string)
{
	bool var_233_bool;
	func_3138(var_233_bool);
	if(!var_233_bool) //@nz
		return 0;
	if(var_232_string == var_2_object)
		return 0;
	string var_236_string; bool var_237_bool;
	var_232_string = var_236_string;
	if(var_232_string == "")
		var_237_bool = false;
	else
		var_237_bool = true;
	func_3019(var_236_string, var_237_bool);
	var_2_object = var_232_string;
	
}


void func_3113(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_3106(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


void func_2857(void)
{
	bool var_267_bool;
	@CameraSwitchToNormal();
	bool var_268_bool;
	func_3138(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_267_bool, "head");
		if(var_267_bool == 0) goto Label_2873;
		@UnlookAsync("head");
	}
Label_2873:
	
}


void func_3130(int var_213_int)
{
	var_213_int = 515542;
}


void func_2874(bool var_70_bool, object var_71_object)
{
	int var_77_int; int var_78_int;
	@GetVariable("voice_common", var_77_int);
	if(var_77_int != 0) {
		bool var_81_bool; object var_82_object;
		var_71_object = var_82_object;
		func_2932(var_81_bool, var_82_object);
		if(!var_81_bool) { //@nz
			bool var_112_bool; object var_113_object;
			var_71_object = var_113_object;
			func_2969(var_112_bool, var_113_object);
			if(!var_112_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@irand(var_78_int, 2);
		if(var_78_int != 0)
			@SetVariable("voice_common", ((var_77_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_157_bool; object var_158_object;
		var_71_object = var_158_object;
		func_2969(var_157_bool, var_158_object);
		if(!var_157_bool) { //@nz
			bool var_160_bool; object var_161_object;
			var_71_object = var_161_object;
			func_2932(var_160_bool, var_161_object);
			if(!var_160_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2930;
	
Label_2930:
	var_70_bool = true;
	
}


void func_3132(int var_212_int)
{
	var_212_int = 502867;
}


void func_3134(string var_214_string)
{
	var_214_string = "ui/NPC_Laska.png";
}


void func_3136(string var_215_string)
{
	var_215_string = "ui/NPC_Laska_b.png";
}


void func_3138(bool var_108_bool)
{
	var_108_bool = true;
}


// @pe
void func_3140(object var_69_object)
{
	object var_73_object;
	func_3536(var_73_object);
	object var_70_object;
	var_73_object = var_70_object;
	func_3553(var_70_object, "pt_map_burah_home", (float)2);
	object var_93_object;
	func_3536(var_93_object);
	var_69_object->ShowMap(var_93_object);
}


// @pe
void func_3394(bool var_456_bool)
{
	int var_458_int;
	func_3063(var_458_int, "ook2Laska1");
	if(var_458_int == 0) {
		var_456_bool = true;
		return 0;
	}
	var_456_bool = false;
}


// @pe
void func_2373(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_720_object, object var_721_object)
{
	var_0_object = var_721_object;
	var_1_object = var_720_object;
	var_3_string = false;
	if(1 != 0) {
		func_2431(var_721_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_2401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x949";
	}
Label_2401:
	bool var_742_bool;
	func_3138(var_742_bool);
	if(var_742_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3012(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2430;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2430:
		return 0;

	}
	
}


// @pe
void func_3406(bool var_511_bool)
{
	int var_513_int;
	func_3063(var_513_int, "ook5Laska1");
	if(var_513_int == 0) {
		var_511_bool = true;
		return 0;
	}
	var_511_bool = false;
}


// @pe
void func_3156(void)
{
	@SetVariable("ook1Laska1", 1);
}


// @pe
void func_1623(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_661_object, object var_662_object)
{
	var_0_object = var_662_object;
	var_1_object = var_661_object;
	var_3_string = false;
	if(1 != 0) {
		func_1686(var_662_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1656;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x65b";
	}
Label_1656:
	bool var_686_bool;
	func_3138(var_686_bool);
	if(var_686_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3012(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1685;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1685:
		return 0;

	}
	
}


// @pe
void func_3162(void)
{
	@SetVariable("ook1Laska2", 1);
}


// @pe
void func_3418(bool var_588_bool)
{
	int var_590_int;
	func_3063(var_590_int, "ook6Laska1");
	if(var_590_int == 0) {
		var_588_bool = true;
		return 0;
	}
	var_588_bool = false;
}


// @pe
void func_1371(object var_2_object, string var_602_string)
{
	bool var_603_bool;
	func_3138(var_603_bool);
	if(!var_603_bool) //@nz
		return 0;
	if(var_602_string == var_2_object)
		return 0;
	string var_606_string; bool var_607_bool;
	var_602_string = var_606_string;
	if(var_602_string == "")
		var_607_bool = false;
	else
		var_607_bool = true;
	func_3019(var_606_string, var_607_bool);
	var_2_object = var_602_string;
	
}


// @pe
void func_1882(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_301_object, object var_302_object)
{
	var_0_object = var_302_object;
	var_1_object = var_301_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_308_bool = false;
		bool var_309_bool;
		func_3303(var_1_object);
		if(var_309_bool != 0) {
			bool var_317_bool;
			func_3315(var_1_object);
			if(!var_317_bool) //@nz
				var_308_bool = true;
		}
		if(var_308_bool != 0) {
			object var_324_object; object var_325_object;
			var_324_object = var_1_object;
			var_325_object = var_0_object;
			func_3156();
			func_1994(var_302_object, "Neutral");
			var_0_object->SetMessage(524644); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526298, 27579, 27578); //@t
			var_0_object->AddReply(526300, 27581, 27580); //@t
		} else {
					func_1994(var_302_object, "Neutral");
					var_0_object->SetMessage(524648); //@t
					var_0_object->ClearReplies(); //@t
					bool var_353_bool = false;
					bool var_354_bool;
					func_3315(var_1_object);
					if(var_354_bool != 0) {
						bool var_356_bool;
						func_3327(var_1_object);
						if(var_356_bool != 0)
							var_353_bool = true;
					}
					if(var_353_bool != 0)
						var_0_object->AddReply(524681, 26021, 26020); //@t
					var_0_object->AddReply(524649, -1, 25988); //@t
		}
	}
	for(;;) {
		bool var_343_bool;
		func_3138(var_343_bool);
		if(var_343_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3012(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1993;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1993:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x75e";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_396_object, object var_397_object)
{
	var_0_object = var_397_object;
	var_1_object = var_396_object;
	var_3_string = false;
	if(1 != 0) {
		func_213(var_397_object, "Neutral");
		var_0_object->SetMessage(525297); //@t
		var_0_object->ClearReplies(); //@t
		bool var_412_bool = true;
		bool var_413_bool = false;
		bool var_414_bool;
		func_3363(var_414_bool, var_1_object);
		if(var_414_bool != 0) {
			bool var_431_bool;
			func_3339(var_1_object);
			if(var_431_bool != 0)
				var_413_bool = true;
		}
		if(var_413_bool != 1) {
			bool var_437_bool = false;
			bool var_438_bool;
			func_3351(var_1_object);
			if(var_438_bool != 0) {
				bool var_444_bool;
				func_3363(var_444_bool, var_1_object);
				if(var_444_bool != 0)
					var_437_bool = true;
			}
			if(var_437_bool != 1)
				var_412_bool = false;
		}
		if(var_412_bool != 0)
			var_0_object->AddReply(525298, 26667, 26666); //@t
		bool var_449_bool = false;
		bool var_450_bool = false;
		bool var_451_bool;
		func_3339(var_1_object);
		if(var_451_bool != 0) {
			bool var_453_bool;
			func_3363(var_453_bool, var_1_object);
			if(!var_453_bool) //@nz
				var_450_bool = true;
		}
		if(var_450_bool != 0) {
			bool var_456_bool;
			func_3394(var_1_object);
			if(var_456_bool != 0)
				var_449_bool = true;
		}
		if(var_449_bool != 0)
			var_0_object->AddReply(525310, 26679, 26678); //@t
		var_0_object->AddReply(525305, -1, 26673); //@t
		goto Label_183;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_183:
	bool var_468_bool;
	func_3138(var_468_bool);
	if(var_468_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3012(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_212;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_212:
		return 0;

	}
	
}


void func_3168(void)
{
	@SetVariable("k1q01LaskaGotoBurah", 1);
	object var_54_object;
	func_3536(var_54_object);
	object var_51_object;
	var_54_object = var_51_object;
	float var_65_float;
	func_3086(var_65_float);
	var_51_object->AddMark("k1q01LaskaGotoBurah", "pt_map_burah_home", 1, 524731, var_65_float);
}
EMIT "Stack[-1] = 0";


void func_867(object var_0_object, int var_480_int, object var_481_object)
{
	var_0_object = var_481_object;
	bool var_491_bool; object var_492_object;
	object var_493_object;
	func_3047(var_493_object);
	var_493_object = var_492_object;
	func_2874(var_491_bool, var_492_object);
	bool var_494_bool; object var_495_object;
	var_481_object = var_495_object;
	func_2789(var_494_bool, var_495_object, 70.0);
	if(!var_494_bool) { //@nz
		var_480_int = -2;
		return 8;
	}
	object var_487_object;
	@CreateDialog(var_487_object);
	int var_498_int;
	func_3132(var_498_int);
	var_487_object->SetNPCName(var_498_int);
	int var_499_int;
	func_3130(var_499_int);
	var_487_object->SetNPCDescription(var_499_int);
	string var_500_string;
	func_3134(var_500_string);
	var_487_object->SetPhoto(var_500_string);
	string var_501_string;
	func_3136(var_501_string);
	var_487_object->SetPhoto2(var_501_string);
	int var_502_int;
	func_3586(var_502_int);
	var_487_object->SetPlayerName(var_502_int);
	bool var_488_bool;
	@IsOverrideActive(var_488_bool);
	if(var_488_bool != 0) {
		var_480_int = -2;
		return 8;
	}
	@DoDialog(var_487_object);
	object var_504_object; object var_505_object;
	var_481_object = var_504_object;
	var_487_object = var_505_object;
	TaskCall(6);
	func_948(var_506_object, var_507_object, var_508_string, var_509_bool, var_504_object, var_505_object);
	TaskReturn();
	bool var_490_bool;
	var_487_object->IsDialogEnd(var_490_bool);
	
	for(;;) {
		var_553_bool = !var_490_bool; //@nz
		if(var_553_bool == 0) goto Label_937;
		@sync();
		var_487_object->IsDialogEnd(var_490_bool);
	}
	
Label_937:
	object var_554_object;
	var_481_object = var_554_object;
	func_2857();
	@StopDialog(var_487_object);
	var_487_object->GetReturnValue(-1);
	int var_489_int = var_480_int;
}
EMIT "Stack[-4] = 0";


void func_3430(void)
{
	object var_49_object;
	@CreateDiaryEntry(var_49_object, 473, 2, 527789);
	bool var_53_bool; object var_54_object;
	var_49_object = var_54_object;
	func_3508(var_53_bool, var_54_object, 470);
}
EMIT "Stack[-1] = 0";


void func_3443(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 405, 2, 526023);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_3508(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3188(object var_42_object)
{
	@SetVariable("k2q02", 3);
	func_3430();
	int var_45_int;
	var_42_object->RemoveItemByType(var_45_int, "milk", 1);
	var_42_object->RemoveItemByType(var_45_int, "bread", 1);
	var_42_object->RemoveItemByType(var_45_int, "flower", 1);
}


void func_2932(bool var_81_bool, object var_82_object)
{
	string var_88_string; bool var_90_bool; int var_91_int; string var_92_string;
	var_88_string = "c";
	int var_89_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_82_object->HasProperty((var_88_string + (var_89_int + 1)), var_90_bool);
			if(!var_90_bool) { //@nz
			} else {
				var_89_int += 1;
			}
		}
		if(!var_89_int) { //@nz
			var_81_bool = false;
			return 10;
		}
		var_91_int = 0;
		if(var_89_int > 1)
			@irand(var_91_int, var_89_int);
		var_82_object->GetProperty((var_88_string + (var_91_int + 1)), var_92_string);
		bool var_104_bool; string var_105_string;
		var_92_string = var_105_string;
		func_3025(var_104_bool, var_105_string);
		var_104_bool = var_81_bool;
		return 10;

	}
}


void func_2681(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_2784(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_3113(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_2784(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			if(!var_60_int) { //@nz
				@Sleep(3, var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			@irand(var_63_int, var_60_int);
			@irand(var_64_int, 5);
			if(var_64_int != 0)
				var_63_int = 0;
			string var_95_string; int var_96_int;
			var_63_int = var_96_int;
			func_3106(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_2736;
			goto Label_2747;
			}
				Label_2736:
					bool var_88_bool;
					func_2750(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_2742;
			}
		}
	Label_2747:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2742:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


// @pe
void func_2431(object var_2_object, string var_727_string)
{
	bool var_728_bool;
	func_3138(var_728_bool);
	if(!var_728_bool) //@nz
		return 0;
	if(var_727_string == var_2_object)
		return 0;
	string var_731_string; bool var_732_bool;
	var_727_string = var_731_string;
	if(var_727_string == "")
		var_732_bool = false;
	else
		var_732_bool = true;
	func_3019(var_731_string, var_732_bool);
	var_2_object = var_727_string;
	
}


void func_3456(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 406, 2, 526024);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3508(var_88_bool, var_89_object, 405);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3209(void)
{
	@SetVariable("ook2Laska1", 1);
}


void func_3469(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 748, 2, 539627);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_3508(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3215(void)
{
	object var_46_object;
	func_3536(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3086(var_57_float);
	var_45_object->AddMark("k5q03LaskaGotoAlbinos", "pt_k5q03_albinos_path12", 0, 526026, var_57_float);
	func_3443();
	func_3456();
	object var_91_object;
	func_3068(var_91_object, "quest_k5_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_1686(object var_2_object, string var_668_string)
{
	bool var_669_bool;
	func_3138(var_669_bool);
	if(!var_669_bool) //@nz
		return 0;
	if(var_668_string == var_2_object)
		return 0;
	string var_672_string; bool var_673_bool;
	var_668_string = var_672_string;
	if(var_668_string == "")
		var_673_bool = false;
	else
		var_673_bool = true;
	func_3019(var_672_string, var_673_bool);
	var_2_object = var_668_string;
	
}


void func_664(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	object var_72_object;
	func_3047(var_72_object);
	var_72_object = var_71_object;
	func_2874(var_70_bool, var_71_object);
	bool var_165_bool; object var_166_object;
	var_60_object = var_166_object;
	func_2789(var_165_bool, var_166_object, 70.0);
	if(!var_165_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_212_int;
	func_3132(var_212_int);
	var_66_object->SetNPCName(var_212_int);
	int var_213_int;
	func_3130(var_213_int);
	var_66_object->SetNPCDescription(var_213_int);
	string var_214_string;
	func_3134(var_214_string);
	var_66_object->SetPhoto(var_214_string);
	string var_215_string;
	func_3136(var_215_string);
	var_66_object->SetPhoto2(var_215_string);
	int var_216_int;
	func_3586(var_216_int);
	var_66_object->SetPlayerName(var_216_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	object var_225_object; object var_226_object;
	var_60_object = var_225_object;
	var_66_object = var_226_object;
	TaskCall(4);
	func_745(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_264_bool = !var_69_bool; //@nz
		if(var_264_bool == 0) goto Label_734;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_734:
	object var_265_object;
	var_60_object = var_265_object;
	func_2857();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_2969(bool var_112_bool, object var_113_object)
{
	bool var_121_bool; int var_122_int; string var_123_string;
	int var_125_int;
	func_3091(var_125_int);
	string var_119_string = ("d" + var_125_int) + "m";
	int var_120_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_113_object->HasProperty((var_119_string + (var_120_int + 1)), var_121_bool);
			if(!var_121_bool) { //@nz
			} else {
				var_120_int += 1;
			}
		}
		if(!var_120_int) { //@nz
			var_112_bool = false;
			return 10;
		}
		var_122_int = 0;
		if(var_120_int > 1)
			@irand(var_122_int, var_120_int);
		var_113_object->GetProperty((var_119_string + (var_122_int + 1)), var_123_string);
		bool var_144_bool; string var_145_string;
		var_123_string = var_145_string;
		func_3025(var_144_bool, var_145_string);
		var_144_bool = var_112_bool;
		return 10;

	}
}


void func_3482(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 749, 2, 539628);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_3508(var_88_bool, var_89_object, 748);
}
EMIT "Stack[-1] = 0";


void func_3495(object var_74_object)
{
	object var_76_object;
	@GetDiaryRoot(var_76_object);
	if(!var_76_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_74_object = false;
	}
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3241(void)
{
	@SetVariable("ook5Laska1", 1);
}


void func_1197(object var_0_object, int var_557_int, object var_558_object)
{
	var_0_object = var_558_object;
	bool var_568_bool; object var_569_object;
	object var_570_object;
	func_3047(var_570_object);
	var_570_object = var_569_object;
	func_2874(var_568_bool, var_569_object);
	bool var_571_bool; object var_572_object;
	var_558_object = var_572_object;
	func_2789(var_571_bool, var_572_object, 70.0);
	if(!var_571_bool) { //@nz
		var_557_int = -2;
		return 8;
	}
	object var_564_object;
	@CreateDialog(var_564_object);
	int var_575_int;
	func_3132(var_575_int);
	var_564_object->SetNPCName(var_575_int);
	int var_576_int;
	func_3130(var_576_int);
	var_564_object->SetNPCDescription(var_576_int);
	string var_577_string;
	func_3134(var_577_string);
	var_564_object->SetPhoto(var_577_string);
	string var_578_string;
	func_3136(var_578_string);
	var_564_object->SetPhoto2(var_578_string);
	int var_579_int;
	func_3586(var_579_int);
	var_564_object->SetPlayerName(var_579_int);
	bool var_565_bool;
	@IsOverrideActive(var_565_bool);
	if(var_565_bool != 0) {
		var_557_int = -2;
		return 8;
	}
	@DoDialog(var_564_object);
	object var_581_object; object var_582_object;
	var_558_object = var_581_object;
	var_564_object = var_582_object;
	TaskCall(8);
	func_1278(var_583_object, var_584_object, var_585_string, var_586_bool, var_581_object, var_582_object);
	TaskReturn();
	bool var_567_bool;
	var_564_object->IsDialogEnd(var_567_bool);
	
	for(;;) {
		var_633_bool = !var_567_bool; //@nz
		if(var_633_bool == 0) goto Label_1267;
		@sync();
		var_564_object->IsDialogEnd(var_567_bool);
	}
	
Label_1267:
	object var_634_object;
	var_558_object = var_634_object;
	func_2857();
	@StopDialog(var_564_object);
	var_564_object->GetReturnValue(-1);
	int var_566_int = var_557_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3247(void)
{
	@SetVariable("k5LaskaVisit", 1);
}


// @pe
void func_948(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_504_object, object var_505_object)
{
	var_0_object = var_505_object;
	var_1_object = var_504_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_511_bool;
		func_3406(var_1_object);
		if(var_511_bool != 0) {
			object var_517_object; object var_518_object;
			var_517_object = var_1_object;
			var_518_object = var_0_object;
			func_3241();
			object var_521_object; object var_522_object;
			var_521_object = var_1_object;
			var_522_object = var_0_object;
			func_3247();
			func_1036(var_505_object, "Neutral");
			var_0_object->SetMessage(525944); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529090, 30536, 30535); //@t
		} else {
					func_1036(var_505_object, "Neutral");
					var_0_object->SetMessage(525948); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525949, -1, 27233); //@t
					var_0_object->AddReply(529092, -1, 30537); //@t
		}
	}
	for(;;) {
		bool var_537_bool;
		func_3138(var_537_bool);
		if(var_537_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3012(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1035;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1035:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3b8";


// @pe
void func_3253(void)
{
	@SetVariable("k6LaskaVisit", 1);
}


void func_3508(bool var_65_bool, object var_66_object, int var_67_int)
{
	object var_74_object;
	func_3495(var_74_object);
	object var_71_object;
	var_74_object = var_71_object;
	object var_72_object;
	var_71_object->Find(var_67_int, var_72_object);
	if(!var_72_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_67_int);
		var_65_bool = false;
	}
	var_72_object->AddChild(var_66_object);
	@SendWorldWndMessage(7);
	int var_73_int;
	var_66_object->GetCategory(var_73_int);
	@SetDiarySection(var_73_int);
	var_65_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3259(void)
{
	@SetVariable("ook6Laska1", 1);
}


void func_2750(bool var_88_bool)
{
	var_88_bool = true;
}


void func_2752(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3265(void)
{
	object var_46_object;
	func_3536(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3086(var_57_float);
	var_45_object->AddMark("k6q03LaskaGotoAlbinos", "pt_k6q03_albinos_path9", 0, 511153, var_57_float);
	func_3469();
	func_3482();
	object var_91_object;
	func_3068(var_91_object, "quest_k6_03");
}
EMIT "Stack[-1] = 0";


void func_2499(object var_0_object)
{
	bool var_36_bool;
	func_2784(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2627();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2681();
	}
}
EMIT "Return(); Pop(0)";


void func_3012(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


void func_2757(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


// @pe
void func_1994(object var_2_object, string var_328_string)
{
	bool var_329_bool;
	func_3138(var_329_bool);
	if(!var_329_bool) //@nz
		return 0;
	if(var_328_string == var_2_object)
		return 0;
	string var_332_string; bool var_333_bool;
	var_328_string = var_332_string;
	if(var_328_string == "")
		var_333_bool = false;
	else
		var_333_bool = true;
	func_3019(var_332_string, var_333_bool);
	var_2_object = var_328_string;
	
}


void func_3019(string var_236_string, bool var_237_bool)
{
	float var_242_float; float var_243_float;
	@lshGetAnimTimes(var_236_string, var_242_float, var_243_float);
	@lshPlayAnimation(var_242_float, var_243_float, var_237_bool);
}


void func_2765(bool var_44_bool, cvector var_45_cvector)
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


void func_3536(object var_54_object)
{
	object var_57_object; object var_58_object;
	@GetMainOutdoorScene(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find main outdoor scene");
		var_58_object = null;
		var_58_object = var_54_object;
	}
	var_57_object->GetMap(var_58_object);
	var_58_object = var_54_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3025(bool var_104_bool, string var_105_string)
{
	bool var_107_bool;
	bool var_108_bool;
	func_3138(var_108_bool);
	if(var_108_bool != 0) {
		@lshHasSpeech(var_107_bool, var_105_string);
		if(var_107_bool != 0) {
			@lshPlaySpeech(var_105_string);
			var_104_bool = true;
		}
	}
	var_104_bool = false;
}


// @pe
void func_213(object var_2_object, string var_403_string)
{
	bool var_404_bool;
	func_3138(var_404_bool);
	if(!var_404_bool) //@nz
		return 0;
	if(var_403_string == var_2_object)
		return 0;
	string var_407_string; bool var_408_bool;
	var_403_string = var_407_string;
	if(var_403_string == "")
		var_408_bool = false;
	else
		var_408_bool = true;
	func_3019(var_407_string, var_408_bool);
	var_2_object = var_403_string;
	
}


void func_2775(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2765(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_2519(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2775(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3291(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2784(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_3297(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_3040(void)
{
	bool var_39_bool;
	func_3138(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_3553(object var_70_object, string var_71_string, float var_72_float)
{
	object var_80_object;
	@GetMainOutdoorScene(var_80_object);
	if(var_80_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_78_cvector;
	cvector var_79_cvector;
	bool var_81_bool;
	var_80_object->GetLocator(var_71_string, var_81_bool, var_78_cvector, var_79_cvector);
	if(!var_81_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_71_string) + " doesnt exist");
	var_80_object->GetMap(var_70_object);
	if(var_70_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_91_float = GetByIndex(var_78_cvector, 0);
	var_92_float = GetByIndex(var_78_cvector, 2);
	var_70_object->SetMapParams(var_91_float, var_92_float, var_72_float);
}
EMIT "Stack[-2] = 0";


void func_2789(bool var_165_bool, object var_166_object, float var_167_float)
{
	cvector var_178_cvector; bool var_185_bool;
	var_166_object->GetPosition(var_178_cvector);
	float var_177_float;
	var_166_object->GetEyesHeight(var_177_float);
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (var_186_float + var_177_float);
	cvector var_179_cvector;
	@GetPosition(var_179_cvector);
	@GetEyesHeight(var_177_float);
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (var_187_float + var_177_float);
	cvector var_180_cvector = var_178_cvector - var_179_cvector;
	var_188_float = GetByIndex(var_180_cvector, 1);
	SetByIndex(var_180_cvector, 1) = (float)0;
	var_190_float = sqrt(var_180_cvector | var_180_cvector);
	var_180_cvector /= var_190_float;
	cvector var_181_cvector = -var_180_cvector;
	cvector var_192_cvector;
	func_3053(var_192_cvector, (var_181_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_182_cvector = ((var_180_cvector * var_167_float) + (var_192_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_184_bool;
	@IsOverrideActive(var_184_bool);
	if(var_184_bool != 0)
		var_165_bool = false;
	@StopWorld();
	@CameraTransit((var_179_cvector + var_182_cvector), var_181_cvector);
	var_205_float = GetByIndex(var_182_cvector, 0);
	var_206_float = GetByIndex(var_182_cvector, 2);
	@Rotate(var_205_float, var_206_float);
	bool var_207_bool;
	func_3138(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_185_bool, "head");
		if(var_185_bool == 0) goto Label_2851;
		@LookAsyncCamera("head");
	}
Label_2851:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_165_bool = true;
	
}


void func_2534(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


// @pe
void func_3303(bool var_309_bool)
{
	int var_311_int;
	func_3063(var_311_int, "ook1Laska1");
	if(var_311_int == 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_3047(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_745(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_225_object, object var_226_object)
{
	var_0_object = var_226_object;
	var_1_object = var_225_object;
	var_3_string = false;
	if(1 != 0) {
		func_803(var_226_object, "Neutral");
		var_0_object->SetMessage(525498); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525499, -1, 26855); //@t
		var_0_object->AddReply(526256, -1, 27530); //@t
		goto Label_773;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ed";
	}
Label_773:
	bool var_251_bool;
	func_3138(var_251_bool);
	if(var_251_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3012(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_802;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_802:
		return 0;

	}
	
}


void func_2539(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2757(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3053(cvector var_192_cvector, cvector var_193_cvector)
{
	float var_196_float = sqrt(var_193_cvector | var_193_cvector);
	if(var_196_float < 0.000001)
		var_192_cvector = [0.0, 0.0, 0.0];
	var_192_cvector = var_193_cvector / var_196_float;
}


// @pe
void func_3315(bool var_317_bool)
{
	int var_319_int;
	func_3063(var_319_int, "k1q01");
	if(var_319_int == 4)
		var_317_bool = true;
	var_317_bool = false;
}


void func_2292(object var_0_object, int var_696_int, object var_697_object)
{
	var_0_object = var_697_object;
	bool var_707_bool; object var_708_object;
	object var_709_object;
	func_3047(var_709_object);
	var_709_object = var_708_object;
	func_2874(var_707_bool, var_708_object);
	bool var_710_bool; object var_711_object;
	var_697_object = var_711_object;
	func_2789(var_710_bool, var_711_object, 70.0);
	if(!var_710_bool) { //@nz
		var_696_int = -2;
		return 8;
	}
	object var_703_object;
	@CreateDialog(var_703_object);
	int var_714_int;
	func_3132(var_714_int);
	var_703_object->SetNPCName(var_714_int);
	int var_715_int;
	func_3130(var_715_int);
	var_703_object->SetNPCDescription(var_715_int);
	string var_716_string;
	func_3134(var_716_string);
	var_703_object->SetPhoto(var_716_string);
	string var_717_string;
	func_3136(var_717_string);
	var_703_object->SetPhoto2(var_717_string);
	int var_718_int;
	func_3586(var_718_int);
	var_703_object->SetPlayerName(var_718_int);
	bool var_704_bool;
	@IsOverrideActive(var_704_bool);
	if(var_704_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	@DoDialog(var_703_object);
	object var_720_object; object var_721_object;
	var_697_object = var_720_object;
	var_703_object = var_721_object;
	TaskCall(14);
	func_2373(var_722_object, var_723_object, var_724_string, var_725_bool, var_720_object, var_721_object);
	TaskReturn();
	bool var_706_bool;
	var_703_object->IsDialogEnd(var_706_bool);
	
	for(;;) {
		var_750_bool = !var_706_bool; //@nz
		if(var_750_bool == 0) goto Label_2362;
		@sync();
		var_703_object->IsDialogEnd(var_706_bool);
	}
	
Label_2362:
	object var_751_object;
	var_697_object = var_751_object;
	func_2857();
	@StopDialog(var_703_object);
	var_703_object->GetReturnValue(-1);
	int var_705_int = var_696_int;
}
EMIT "Stack[-4] = 0";


void func_3063(int var_311_int, string var_312_string)
{
	int var_314_int;
	@GetVariable(var_312_string, var_314_int);
	var_314_int = var_311_int;
}


void func_3068(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1278(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_581_object, object var_582_object)
{
	var_0_object = var_582_object;
	var_1_object = var_581_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_588_bool;
		func_3418(var_1_object);
		if(var_588_bool != 0) {
			object var_594_object; object var_595_object;
			var_594_object = var_1_object;
			var_595_object = var_0_object;
			func_3253();
			object var_598_object; object var_599_object;
			var_598_object = var_1_object;
			var_599_object = var_0_object;
			func_3259();
			func_1371(var_582_object, "Neutral");
			var_0_object->SetMessage(528802); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526757, 30208, 28034); //@t
			var_0_object->AddReply(528803, 30208, 30216); //@t
		} else {
					func_1371(var_582_object, "Neutral");
					var_0_object->SetMessage(526758); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526759, -1, 28036); //@t
					var_0_object->AddReply(528801, -1, 30214); //@t
		}
	}
	for(;;) {
		bool var_617_bool;
		func_3138(var_617_bool);
		if(var_617_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3012(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1370;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1370:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x502";


// @pe
void func_3327(bool var_356_bool)
{
	int var_358_int;
	func_3063(var_358_int, "ook1Laska2");
	if(var_358_int == 0) {
		var_356_bool = true;
		return 0;
	}
	var_356_bool = false;
}


