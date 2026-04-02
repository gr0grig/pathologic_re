// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 26084) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4762();
			}
			if(var_56_bool == 26083) {
				bool var_91_bool;
				func_4980(var_1_object);
				if(var_91_bool != 0) {
					func_164(var_57_cvector, "Neutral");
					var_0_object->SetMessage(524759); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526896, 28184, 28183); //@t
					var_0_object->AddReply(526903, 28184, 28191); //@t
					return 0;
				}
				func_164(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526893, -1, 28180); //@t
				var_0_object->AddReply(542280, -1, 44625); //@t
				return 0;
			}
			if(var_56_bool == 28184) {
				func_164(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(526897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526894, 28185, 28181); //@t
				var_0_object->AddReply(526904, 28194, 28193); //@t
				return 0;
			}
			if(var_56_bool == 28194) {
				func_164(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(526905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526906, 28185, 28195); //@t
				var_0_object->AddReply(526907, 28187, 28197); //@t
				return 0;
			}
			if(var_56_bool == 28185) {
				func_164(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526899, 28187, 28186); //@t
				var_0_object->AddReply(526908, 28182, 28199); //@t
				return 0;
			}
			if(var_56_bool == 28187) {
				func_164(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526901, 28182, 28188); //@t
				var_0_object->AddReply(526902, 28182, 28189); //@t
				return 0;
			}
			if(var_56_bool == 28182) {
				func_164(var_57_cvector, "Angry");
				var_0_object->SetMessage(526895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524760, -1, 26084); //@t
				return 0;
			}
			var_3_string = true;
			bool var_178_bool;
			func_4727(var_178_bool);
			if(var_178_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_56_bool == 26857) {
				func_510(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525501); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525502, 27545, 26858); //@t
				var_0_object->AddReply(526269, 27545, 27544); //@t
				return 0;
			}
			if(var_56_bool == 27545) {
				func_510(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526271, -1, 27546); //@t
				var_0_object->AddReply(526272, -1, 27547); //@t
				return 0;
			}
			var_3_string = true;
			bool var_96_bool;
			func_4727(var_96_bool);
			if(var_96_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x215";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 26955) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4771();
			}
			if(var_57_cvector == 26959) {
				object var_68_object = var_1_object;
				func_4933(var_0_object);
			}
			if(var_57_cvector == 42741) {
				object var_110_object = var_1_object;
				func_4933(var_0_object);
			}
			if(var_57_cvector == 42736) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_4920();
			}
			if(var_57_cvector == 42745) {
				object var_120_object = var_1_object;
				func_4926(var_0_object);
			}
			if(var_57_cvector == 42746) {
				object var_127_object = var_1_object;
				func_4926(var_0_object);
			}
			if(var_56_bool == 26954) {
				func_760(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525607); //@t
				var_0_object->ClearReplies(); //@t
				bool var_149_bool = false;
				bool var_150_bool;
				func_4992(var_1_object);
				if(var_150_bool != 0) {
					bool var_158_bool;
					func_5004(var_1_object);
					if(var_158_bool != 0)
						var_149_bool = true;
				}
				if(var_149_bool != 0)
					var_0_object->AddReply(525608, 26956, 26955); //@t
				bool var_167_bool;
				func_5178(var_1_object);
				if(var_167_bool != 0)
					var_0_object->AddReply(540700, 42737, 42736); //@t
				var_0_object->AddReply(525613, -1, 26960); //@t
				return 0;
			}
			if(var_56_bool == 42737) {
				func_760(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(540701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540702, 42740, 42738); //@t
				var_0_object->AddReply(540703, -1, 42739); //@t
				return 0;
			}
			if(var_56_bool == 42740) {
				func_760(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540704); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540706, 42744, 42742); //@t
				var_0_object->AddReply(540707, -1, 42743); //@t
				return 0;
			}
			if(var_56_bool == 42744) {
				func_760(var_57_cvector, "Angry");
				var_0_object->SetMessage(540708); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540709, -1, 42745); //@t
				var_0_object->AddReply(540710, -1, 42746); //@t
				return 0;
			}
			if(var_56_bool == 26956) {
				func_760(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(525609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525610, 26958, 26957); //@t
				var_0_object->AddReply(540705, -1, 42741); //@t
				return 0;
			}
			if(var_56_bool == 26958) {
				func_760(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(525611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529340, 30796, 30795); //@t
				return 0;
			}
			if(var_56_bool == 30796) {
				func_760(var_57_cvector, "Rage");
				var_0_object->SetMessage(529341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525612, -1, 26959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_233_bool;
			func_4727(var_233_bool);
			if(var_233_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x30f";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 27069) {
				object var_62_object = var_1_object;
				func_4926(var_0_object);
			}
			if(var_57_cvector == 27070) {
				object var_104_object = var_1_object;
				func_4940(var_0_object);
			}
			if(var_57_cvector == 42750) {
				object var_111_object = var_1_object;
				func_4940(var_0_object);
			}
			if(var_57_cvector == 42753) {
				object var_115_object = var_1_object;
				func_4933(var_0_object);
			}
			if(var_56_bool == 27068) {
				bool var_122_bool = false;
				bool var_123_bool;
				func_5016(var_1_object);
				if(var_123_bool != 0) {
					bool var_131_bool;
					func_5028(var_1_object);
					if(var_131_bool != 0)
						var_122_bool = true;
				}
				if(var_122_bool != 0) {
					object var_137_object; object var_138_object;
					var_137_object = var_1_object;
					var_138_object = var_0_object;
					func_4777();
					func_1202(var_57_cvector, "Neutral");
					var_0_object->SetMessage(525756); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540712, 42749, 42748); //@t
					var_0_object->AddReply(540717, -1, 42753); //@t
					return 0;
				}
				func_1202(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525760, -1, 27072); //@t
				var_0_object->AddReply(540711, -1, 42747); //@t
				return 0;
			}
			if(var_56_bool == 42749) {
				func_1202(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540713); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529233, 30688, 30687); //@t
				var_0_object->AddReply(540714, -1, 42750); //@t
				return 0;
			}
			if(var_56_bool == 30688) {
				func_1202(var_57_cvector, "Neutral");
				var_0_object->SetMessage(529234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540715, 42752, 42751); //@t
				return 0;
			}
			if(var_56_bool == 42752) {
				func_1202(var_57_cvector, "Staring");
				var_0_object->SetMessage(540716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525757, -1, 27069); //@t
				var_0_object->AddReply(525758, -1, 27070); //@t
				return 0;
			}
			var_3_string = true;
			bool var_200_bool;
			func_4727(var_200_bool);
			if(var_200_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4c9";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 27476) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4783();
			}
			if(var_56_bool == 27473) {
				func_1545(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526192); //@t
				var_0_object->ClearReplies(); //@t
				bool var_109_bool;
				func_5040(var_1_object);
				if(var_109_bool != 0)
					var_0_object->AddReply(526193, 30159, 27474); //@t
				var_0_object->AddReply(526196, -1, 27477); //@t
				return 0;
			}
			if(var_56_bool == 30159) {
				func_1545(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528736, 30161, 30160); //@t
				var_0_object->AddReply(528745, 30163, 30169); //@t
				return 0;
			}
			if(var_56_bool == 30161) {
				func_1545(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528738, 30163, 30162); //@t
				return 0;
			}
			if(var_56_bool == 30163) {
				func_1545(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528740, 30165, 30164); //@t
				return 0;
			}
			if(var_56_bool == 30165) {
				func_1545(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(528741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528742, 30167, 30166); //@t
				return 0;
			}
			if(var_56_bool == 30167) {
				func_1545(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(528743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528744, 27475, 30168); //@t
				var_0_object->AddReply(528746, 27475, 30171); //@t
				return 0;
			}
			if(var_56_bool == 27475) {
				func_1545(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526195, -1, 27476); //@t
				return 0;
			}
			var_3_string = true;
			bool var_171_bool;
			func_4727(var_171_bool);
			if(var_171_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x620";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 28242) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4792();
			}
			if(var_57_cvector == 41804) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_4875();
			}
			if(var_57_cvector == 41807) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_4881();
			}
			if(var_57_cvector == 41809) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4846();
				object var_119_object = var_1_object;
				func_4909(var_0_object);
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4806();
				object var_147_object = var_1_object;
				func_4812(var_0_object);
			}
			if(var_56_bool == 28239) {
				func_1945(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(526947); //@t
				var_0_object->ClearReplies(); //@t
				bool var_188_bool;
				func_5052(var_1_object);
				if(var_188_bool != 0)
					var_0_object->AddReply(526948, 28241, 28240); //@t
				bool var_199_bool = false;
				bool var_200_bool = false;
				bool var_201_bool;
				func_5076(var_201_bool, var_1_object);
				if(var_201_bool != 0) {
					bool var_216_bool;
					func_5086(var_216_bool, var_1_object);
					if(var_216_bool != 0)
						var_200_bool = true;
				}
				if(var_200_bool != 0) {
					bool var_230_bool;
					func_5154(var_1_object);
					if(var_230_bool != 0)
						var_199_bool = true;
				}
				if(var_199_bool != 0)
					var_0_object->AddReply(539852, 41805, 41804); //@t
				bool var_239_bool = false;
				bool var_240_bool = false;
				bool var_241_bool;
				func_5076(var_241_bool, var_1_object);
				if(var_241_bool != 0) {
					bool var_243_bool;
					func_5096(var_243_bool, var_1_object);
					if(var_243_bool != 0)
						var_240_bool = true;
				}
				if(var_240_bool != 0) {
					bool var_250_bool;
					func_5166(var_1_object);
					if(var_250_bool != 0)
						var_239_bool = true;
				}
				if(var_239_bool != 0)
					var_0_object->AddReply(539855, 41808, 41807); //@t
				var_0_object->AddReply(526951, -1, 28243); //@t
				var_0_object->AddReply(528006, -1, 29366); //@t
				return 0;
			}
			if(var_56_bool == 41808) {
				func_1945(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539857, -1, 41809); //@t
				return 0;
			}
			if(var_56_bool == 41805) {
				func_1945(var_57_cvector, "Angry");
				var_0_object->SetMessage(539853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539854, -1, 41806); //@t
				return 0;
			}
			if(var_56_bool == 28241) {
				func_1945(var_57_cvector, "Rage");
				var_0_object->SetMessage(526949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528007, 29368, 29367); //@t
				var_0_object->AddReply(528011, 29368, 29371); //@t
				return 0;
			}
			if(var_56_bool == 29368) {
				func_1945(var_57_cvector, "Rage");
				var_0_object->SetMessage(528008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528009, 29370, 29369); //@t
				var_0_object->AddReply(528012, 29370, 29373); //@t
				return 0;
			}
			if(var_56_bool == 29370) {
				func_1945(var_57_cvector, "Angry");
				var_0_object->SetMessage(528010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526950, -1, 28242); //@t
				return 0;
			}
			var_3_string = true;
			bool var_306_bool;
			func_4727(var_306_bool);
			if(var_306_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7b0";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_56_bool == 36906) {
				func_2366(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_56_bool == 36953) {
				func_2366(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_56_bool == 36957) {
				func_2366(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_109_bool;
			func_4727(var_109_bool);
			if(var_109_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x955";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 41363) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4823();
				object var_105_object = var_1_object;
				func_4729(var_0_object);
			}
			if(var_57_cvector == 42772) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_4823();
				object var_135_object = var_1_object;
				func_4729(var_0_object);
				object var_137_object = var_1_object;
				func_4745(var_0_object);
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_4806();
			}
			if(var_57_cvector == 42754) {
				object var_164_object = var_1_object;
				func_4755(var_0_object);
			}
			if(var_56_bool == 41356) {
				func_2630(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539425); //@t
				var_0_object->ClearReplies(); //@t
				bool var_224_bool;
				func_5064(var_1_object);
				if(var_224_bool != 0)
					var_0_object->AddReply(539426, 42755, 41357); //@t
				var_0_object->AddReply(539433, -1, 41364); //@t
				var_0_object->AddReply(540718, -1, 42754); //@t
				return 0;
			}
			if(var_56_bool == 42755) {
				func_2630(var_57_cvector, "Angry");
				var_0_object->SetMessage(540719); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540720, 41358, 42756); //@t
				var_0_object->AddReply(540723, 42760, 42759); //@t
				return 0;
			}
			if(var_56_bool == 42760) {
				func_2630(var_57_cvector, "Angry");
				var_0_object->SetMessage(540724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540725, 41360, 42761); //@t
				var_0_object->AddReply(540726, 42763, 42762); //@t
				return 0;
			}
			if(var_56_bool == 42763) {
				func_2630(var_57_cvector, "Angry");
				var_0_object->SetMessage(540727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540728, 41360, 42764); //@t
				var_0_object->AddReply(540729, 41360, 42765); //@t
				return 0;
			}
			if(var_56_bool == 41358) {
				func_2630(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(539427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539428, 41360, 41359); //@t
				return 0;
			}
			if(var_56_bool == 41360) {
				func_2630(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539430, 41362, 41361); //@t
				var_0_object->AddReply(540730, 41362, 42767); //@t
				return 0;
			}
			if(var_56_bool == 41362) {
				func_2630(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539432, -1, 41363); //@t
				var_0_object->AddReply(540731, 42771, 42768); //@t
				return 0;
			}
			if(var_56_bool == 42771) {
				func_2630(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540735, -1, 42772); //@t
				return 0;
			}
			var_3_string = true;
			bool var_305_bool;
			func_4727(var_305_bool);
			if(var_305_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5d";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 41781) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4851();
			}
			if(var_57_cvector == 41784) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4857();
			}
			if(var_57_cvector == 41786) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4846();
				object var_99_object = var_1_object;
				func_4887(var_0_object);
				object var_123_object = var_1_object;
				func_4947(var_0_object);
			}
			if(var_56_bool == 41780) {
				func_3089(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539828); //@t
				var_0_object->ClearReplies(); //@t
				bool var_164_bool = false;
				bool var_165_bool = false;
				bool var_166_bool;
				func_5076(var_166_bool, var_1_object);
				if(var_166_bool != 0) {
					bool var_181_bool;
					func_5086(var_181_bool, var_1_object);
					if(var_181_bool != 0)
						var_165_bool = true;
				}
				if(var_165_bool != 0) {
					bool var_195_bool;
					func_5106(var_1_object);
					if(var_195_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_object->AddReply(539829, 41782, 41781); //@t
				bool var_206_bool = false;
				bool var_207_bool = false;
				bool var_208_bool;
				func_5076(var_208_bool, var_1_object);
				if(var_208_bool != 0) {
					bool var_210_bool;
					func_5096(var_210_bool, var_1_object);
					if(var_210_bool != 0)
						var_207_bool = true;
				}
				if(var_207_bool != 0) {
					bool var_217_bool;
					func_5118(var_1_object);
					if(var_217_bool != 0)
						var_206_bool = true;
				}
				if(var_206_bool != 0)
					var_0_object->AddReply(539832, 41785, 41784); //@t
				var_0_object->AddReply(539838, -1, 41790); //@t
				return 0;
			}
			if(var_56_bool == 41785) {
				func_3089(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542518, 44912, 44911); //@t
				var_0_object->AddReply(542520, 44912, 44913); //@t
				return 0;
			}
			if(var_56_bool == 44912) {
				func_3089(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(542519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539834, -1, 41786); //@t
				return 0;
			}
			if(var_56_bool == 41782) {
				func_3089(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542521, 44916, 44915); //@t
				var_0_object->AddReply(542524, -1, 44918); //@t
				return 0;
			}
			if(var_56_bool == 44916) {
				func_3089(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(542522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539831, -1, 41783); //@t
				var_0_object->AddReply(542523, -1, 44917); //@t
				return 0;
			}
			var_3_string = true;
			bool var_266_bool;
			func_4727(var_266_bool);
			if(var_266_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc28";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_57_cvector == 41793) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4863();
			}
			if(var_57_cvector == 41796) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4869();
			}
			if(var_57_cvector == 41798) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4846();
				object var_99_object = var_1_object;
				func_4898(var_0_object);
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_4806();
				object var_127_object = var_1_object;
				func_4958(var_0_object);
				object var_148_object = var_1_object;
				func_4969(var_0_object);
			}
			if(var_56_bool == 41792) {
				func_3515(var_57_cvector, "Mysterious");
				var_0_object->SetMessage(539840); //@t
				var_0_object->ClearReplies(); //@t
				bool var_174_bool = false;
				bool var_175_bool = false;
				bool var_176_bool;
				func_5076(var_176_bool, var_1_object);
				if(var_176_bool != 0) {
					bool var_191_bool;
					func_5086(var_191_bool, var_1_object);
					if(var_191_bool != 0)
						var_175_bool = true;
				}
				if(var_175_bool != 0) {
					bool var_205_bool;
					func_5130(var_1_object);
					if(var_205_bool != 0)
						var_174_bool = true;
				}
				if(var_174_bool != 0)
					var_0_object->AddReply(539841, 41794, 41793); //@t
				bool var_216_bool = false;
				bool var_217_bool = false;
				bool var_218_bool;
				func_5076(var_218_bool, var_1_object);
				if(var_218_bool != 0) {
					bool var_220_bool;
					func_5096(var_220_bool, var_1_object);
					if(var_220_bool != 0)
						var_217_bool = true;
				}
				if(var_217_bool != 0) {
					bool var_227_bool;
					func_5142(var_1_object);
					if(var_227_bool != 0)
						var_216_bool = true;
				}
				if(var_216_bool != 0)
					var_0_object->AddReply(539844, 41797, 41796); //@t
				var_0_object->AddReply(539850, -1, 41802); //@t
				return 0;
			}
			if(var_56_bool == 41797) {
				func_3515(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539846, -1, 41798); //@t
				return 0;
			}
			if(var_56_bool == 41794) {
				func_3515(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539842); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539843, -1, 41795); //@t
				return 0;
			}
			var_3_string = true;
			bool var_253_bool;
			func_4727(var_253_bool);
			if(var_253_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd2";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4516();
			if(var_56_int == 42548) {
				func_3849(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_4727(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf20";
	
	}

}


maintask task_22
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		var_56_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_3920(var_55_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, int var_56_int)
	{
		if(var_56_int == 10) {
			func_3985();
			bool var_60_bool = false;
			bool var_61_bool;
			func_4240(var_61_bool);
			if(var_61_bool != 0) {
				bool var_64_bool;
				func_3954(var_64_bool);
				if(var_64_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool != 0) {
				bool var_81_bool;
				func_3934(var_81_bool);
				if(var_81_bool != 0) {
					bool var_100_bool; object var_101_object;
					object var_102_object;
					func_4523(var_102_object);
					var_102_object = var_101_object;
					func_4390(var_100_bool, var_101_object);
				}
			} else {
				func_3949(var_56_int);
				func_3976();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		func_4167();
		func_3985();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		@StopGroup0();
		func_3985();
		func_4470("Neutral");
		func_3976();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, bool var_56_bool)
	{
		if(var_56_bool != 0)
			func_3976();
		else
			func_4470("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, object var_56_object)
	{
		bool var_58_bool;
		@IsOverrideActive(var_58_bool);
		if(!var_58_bool) { //@nz
			disable OnUse;
			func_4167();
			bool var_60_bool; object var_61_object;
			var_56_object = var_61_object;
			func_4231(var_60_bool, var_61_object);
			enable OnUse;
			object var_74_object;
			var_56_object = var_74_object;
			func_5418(var_74_object);
			func_4470("Neutral");
			func_3985();
			func_3976();
		}
	}

}


void func_4096(void)
{
	bool var_69_bool; int var_70_int; int var_71_int; bool var_72_bool;
	@WaitForAnimEnd();
	bool var_73_bool;
	func_4240(var_73_bool);
	if(!var_73_bool) //@nz
		return 12;
	int var_75_int;
	func_4702(var_75_int);
	int var_67_int;
	var_75_int = var_67_int;
	int var_68_int = 0;
	
	for(;;) {
		bool var_88_bool = false;
		if(var_68_int < 5) {
			bool var_91_bool;
			func_4240(var_91_bool);
			if(var_91_bool != 0)
				var_88_bool = true;
		}
		if(var_88_bool != 0) {
			if(!var_67_int) { //@nz
				@Sleep(3, var_69_bool);
				if(!var_69_bool) { //@nz
				} else {
			} else {
			@irand(var_70_int, var_67_int);
			@irand(var_71_int, 5);
			if(var_71_int != 0)
				var_70_int = 0;
			string var_102_string; int var_103_int;
			var_70_int = var_103_int;
			func_4695(var_102_string, var_103_int);
			@PlayAnimation("all", var_102_string);
			@WaitForAnimEnd(var_72_bool);
			var_104_bool = !var_72_bool; //@nz
			if(var_104_bool == 0) goto Label_4151;
			goto Label_4162;
			}
				Label_4151:
					bool var_95_bool;
					func_4165(var_95_bool);
					var_96_bool = !var_95_bool; //@nz
					if(var_96_bool == 0) goto Label_4157;
			}
		}
	Label_4162:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4157:
		@ResetAAS();
		var_68_int += 1;
	}
	
}


void func_0(object var_0_object, int var_306_int, object var_307_object)
{
	var_0_object = var_307_object;
	bool var_317_bool; object var_318_object;
	var_307_object = var_318_object;
	func_4245(var_317_bool, var_318_object, 70.0);
	if(!var_317_bool) { //@nz
		var_306_int = -2;
		return 8;
	}
	object var_313_object;
	@CreateDialog(var_313_object);
	int var_321_int;
	func_4721(var_321_int);
	var_313_object->SetNPCName(var_321_int);
	int var_322_int;
	func_4719(var_322_int);
	var_313_object->SetNPCDescription(var_322_int);
	string var_323_string;
	func_4723(var_323_string);
	var_313_object->SetPhoto(var_323_string);
	string var_324_string;
	func_4725(var_324_string);
	var_313_object->SetPhoto2(var_324_string);
	int var_325_int;
	func_5364(var_325_int);
	var_313_object->SetPlayerName(var_325_int);
	bool var_314_bool;
	@IsOverrideActive(var_314_bool);
	if(var_314_bool != 0) {
		var_306_int = -2;
		return 8;
	}
	@DoDialog(var_313_object);
	bool var_327_bool; object var_328_object;
	object var_329_object;
	func_4523(var_329_object);
	var_329_object = var_328_object;
	func_4332(var_327_bool, var_328_object);
	object var_330_object; object var_331_object;
	var_307_object = var_330_object;
	var_313_object = var_331_object;
	TaskCall(1);
	func_81(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object);
	TaskReturn();
	bool var_316_bool;
	var_313_object->IsDialogEnd(var_316_bool);
	
	for(;;) {
		var_376_bool = !var_316_bool; //@nz
		if(var_376_bool == 0) goto Label_70;
		@sync();
		var_313_object->IsDialogEnd(var_316_bool);
	}
	
Label_70:
	object var_377_object;
	var_307_object = var_377_object;
	func_4314();
	@StopDialog(var_313_object);
	var_313_object->GetReturnValue(-1);
	int var_315_int = var_306_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2562(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_567_object, object var_568_object)
{
	var_0_object = var_568_object;
	var_3_string = false;
	if(1 != 0) {
		func_2630(var_568_object, "Neutral");
		var_0_object->SetMessage(539425); //@t
		var_0_object->ClearReplies(); //@t
		bool var_583_bool;
		func_5064(var_567_object);
		if(var_583_bool != 0)
			var_0_object->AddReply(539426, 42755, 41357); //@t
		var_0_object->AddReply(539433, -1, 41364); //@t
		var_0_object->AddReply(540718, -1, 42754); //@t
		goto Label_2600;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa06";
	}
Label_2600:
	bool var_598_bool;
	func_4727(var_598_bool);
	if(var_598_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2629;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2629:
		return 0;

	}
	
}


void func_1024(object var_0_object, int var_460_int, object var_461_object)
{
	var_0_object = var_461_object;
	bool var_471_bool; object var_472_object;
	var_461_object = var_472_object;
	func_4245(var_471_bool, var_472_object, 70.0);
	if(!var_471_bool) { //@nz
		var_460_int = -2;
		return 8;
	}
	object var_467_object;
	@CreateDialog(var_467_object);
	int var_475_int;
	func_4721(var_475_int);
	var_467_object->SetNPCName(var_475_int);
	int var_476_int;
	func_4719(var_476_int);
	var_467_object->SetNPCDescription(var_476_int);
	string var_477_string;
	func_4723(var_477_string);
	var_467_object->SetPhoto(var_477_string);
	string var_478_string;
	func_4725(var_478_string);
	var_467_object->SetPhoto2(var_478_string);
	int var_479_int;
	func_5364(var_479_int);
	var_467_object->SetPlayerName(var_479_int);
	bool var_468_bool;
	@IsOverrideActive(var_468_bool);
	if(var_468_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	@DoDialog(var_467_object);
	bool var_481_bool; object var_482_object;
	object var_483_object;
	func_4523(var_483_object);
	var_483_object = var_482_object;
	func_4332(var_481_bool, var_482_object);
	object var_484_object; object var_485_object;
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(7);
	func_1105(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	bool var_470_bool;
	var_467_object->IsDialogEnd(var_470_bool);
	
	for(;;) {
		var_539_bool = !var_470_bool; //@nz
		if(var_539_bool == 0) goto Label_1094;
		@sync();
		var_467_object->IsDialogEnd(var_470_bool);
	}
	
Label_1094:
	object var_540_object;
	var_461_object = var_540_object;
	func_4314();
	@StopDialog(var_467_object);
	var_467_object->GetReturnValue(-1);
	int var_469_int = var_460_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1545(object var_2_object, string var_641_string)
{
	bool var_642_bool;
	func_4727(var_642_bool);
	if(!var_642_bool) //@nz
		return 0;
	if(var_641_string == var_2_object)
		return 0;
	string var_645_string; bool var_646_bool;
	var_641_string = var_645_string;
	if(var_641_string == "")
		var_646_bool = false;
	else
		var_646_bool = true;
	func_4486(var_645_string, var_646_bool);
	var_2_object = var_641_string;
	
}


// @pe
void func_5130(bool var_830_bool)
{
	int var_832_int;
	func_4550(var_832_int, "ook9Maria1");
	if(var_832_int == 0) {
		var_830_bool = true;
		return 0;
	}
	var_830_bool = false;
}


// @pe
void func_4618(bool var_166_bool, object var_167_object, float var_168_float)
{
	if(!var_167_object) { //@nz
		var_166_bool = false;
		return 0;
	}
	if(var_168_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_168_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_173_float;
		var_168_float = var_173_float;
		func_4653(var_173_float);
		bool var_177_bool; object var_178_object; float var_180_float;
		var_167_object = var_178_object;
		var_168_float = var_180_float;
		func_4192(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
		var_166_bool = true;
		return 0;

	}
	
	var_166_bool = false;
}


// @pe
void func_3089(object var_2_object, string var_705_string)
{
	bool var_706_bool;
	func_4727(var_706_bool);
	if(!var_706_bool) //@nz
		return 0;
	if(var_705_string == var_2_object)
		return 0;
	string var_709_string; bool var_710_bool;
	var_705_string = var_709_string;
	if(var_705_string == "")
		var_710_bool = false;
	else
		var_710_bool = true;
	func_4486(var_709_string, var_710_bool);
	var_2_object = var_705_string;
	
}


// @pe
void func_5142(bool var_845_bool)
{
	int var_847_int;
	func_4550(var_847_int, "ook9Maria2");
	if(var_847_int == 0) {
		var_845_bool = true;
		return 0;
	}
	var_845_bool = false;
}


// @pe
void func_5154(bool var_924_bool)
{
	int var_926_int;
	func_4550(var_926_int, "ook10Maria1");
	if(var_926_int == 0) {
		var_924_bool = true;
		return 0;
	}
	var_924_bool = false;
}


void func_4653(float var_173_float)
{
	object var_175_object;
	@CreateFloatVector(var_175_object);
	var_175_object->add(var_173_float);
	@SendWorldWndMessage(16, var_175_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5166(bool var_939_bool)
{
	int var_941_int;
	func_4550(var_941_int, "ook10Maria2");
	if(var_941_int == 0) {
		var_939_bool = true;
		return 0;
	}
	var_939_bool = false;
}


void func_4663(bool var_89_bool, string var_90_string, string var_91_string)
{
	object var_93_object;
	@FindActor(var_93_object, var_90_string);
	if(var_93_object == null)
		var_89_bool = false;
	@Trigger(var_93_object, var_91_string);
	var_89_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5178(bool var_436_bool)
{
	int var_438_int;
	func_4550(var_438_int, "ook3Maria2");
	if(var_438_int == 0) {
		var_436_bool = true;
		return 0;
	}
	var_436_bool = false;
}


void func_4675(float var_79_float)
{
	float var_81_float;
	@GetGameTime(var_81_float);
	var_81_float = var_79_float;
}


void func_4165(bool var_95_bool)
{
	var_95_bool = true;
}


// @pe
void func_2630(object var_2_object, string var_574_string)
{
	bool var_575_bool;
	func_4727(var_575_bool);
	if(!var_575_bool) //@nz
		return 0;
	if(var_574_string == var_2_object)
		return 0;
	string var_578_string; bool var_579_bool;
	var_574_string = var_578_string;
	if(var_574_string == "")
		var_579_bool = false;
	else
		var_579_bool = true;
	func_4486(var_578_string, var_579_bool);
	var_2_object = var_574_string;
	
}


void func_4167(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4680(int var_204_int)
{
	float var_206_float;
	@GetGameTime(var_206_float);
	var_204_int = 1 + (var_206_float / 24);
}


// @pe
void func_5190(bool var_718_bool)
{
	bool var_720_bool;
	func_5398(var_720_bool);
	var_720_bool = var_718_bool;
}


void func_4172(float var_71_float, object var_72_object)
{
	cvector var_76_cvector;
	@GetPosition(var_76_cvector);
	cvector var_77_cvector;
	var_72_object->GetPosition(var_77_cvector);
	var_71_float = (var_77_cvector - var_76_cvector) | (var_77_cvector - var_76_cvector);
}


// @pe
void func_5196(bool var_728_bool)
{
	bool var_730_bool;
	func_5412(var_730_bool);
	var_730_bool = var_728_bool;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_330_object, object var_331_object)
{
	var_0_object = var_331_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_337_bool;
		func_4980(var_330_object);
		if(var_337_bool != 0) {
			func_164(var_331_object, "Neutral");
			var_0_object->SetMessage(524759); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526896, 28184, 28183); //@t
			var_0_object->AddReply(526903, 28184, 28191); //@t
		} else {
					func_164(var_331_object, "Neutral");
					var_0_object->SetMessage(524761); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526893, -1, 28180); //@t
					var_0_object->AddReply(542280, -1, 44625); //@t
		}
	}
	for(;;) {
		bool var_360_bool;
		func_4727(var_360_bool);
		if(var_360_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4470(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_163;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_163:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1105(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_484_object, object var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_491_bool = false;
		bool var_492_bool;
		func_5016(var_1_object);
		if(var_492_bool != 0) {
			bool var_498_bool;
			func_5028(var_1_object);
			if(var_498_bool != 0)
				var_491_bool = true;
		}
		if(var_491_bool != 0) {
			object var_504_object; object var_505_object;
			var_504_object = var_1_object;
			var_505_object = var_0_object;
			func_4777();
			func_1202(var_485_object, "Neutral");
			var_0_object->SetMessage(525756); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540712, 42749, 42748); //@t
			var_0_object->AddReply(540717, -1, 42753); //@t
		} else {
					func_1202(var_485_object, "Neutral");
					var_0_object->SetMessage(525759); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525760, -1, 27072); //@t
					var_0_object->AddReply(540711, -1, 42747); //@t
		}
	}
	for(;;) {
		bool var_523_bool;
		func_4727(var_523_bool);
		if(var_523_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4470(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1201;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1201:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x455";


// @pe
void func_5202(bool var_755_bool)
{
	bool var_757_bool;
	func_5406(var_757_bool);
	var_757_bool = var_755_bool;
}


void func_4180(bool var_185_bool, object var_186_object, string var_187_string)
{
	var_192_bool = IsFuncExist(var_186_object, "HasProperty", 2);
	if(!var_192_bool) { //@nz
		var_185_bool = false;
		return 2;
	}
	bool var_189_bool;
	var_186_object->HasProperty(var_187_string, var_189_bool);
	var_189_bool = var_185_bool;
}


// @pe
void func_4689(bool var_303_bool, int var_304_int)
{
	int var_305_int;
	func_4680(var_305_int);
	var_303_bool = var_305_int == var_304_int;
}


void func_597(object var_0_object, int var_380_int, object var_381_object)
{
	var_0_object = var_381_object;
	bool var_391_bool; object var_392_object;
	var_381_object = var_392_object;
	func_4245(var_391_bool, var_392_object, 70.0);
	if(!var_391_bool) { //@nz
		var_380_int = -2;
		return 8;
	}
	object var_387_object;
	@CreateDialog(var_387_object);
	int var_395_int;
	func_4721(var_395_int);
	var_387_object->SetNPCName(var_395_int);
	int var_396_int;
	func_4719(var_396_int);
	var_387_object->SetNPCDescription(var_396_int);
	string var_397_string;
	func_4723(var_397_string);
	var_387_object->SetPhoto(var_397_string);
	string var_398_string;
	func_4725(var_398_string);
	var_387_object->SetPhoto2(var_398_string);
	int var_399_int;
	func_5364(var_399_int);
	var_387_object->SetPlayerName(var_399_int);
	bool var_388_bool;
	@IsOverrideActive(var_388_bool);
	if(var_388_bool != 0) {
		var_380_int = -2;
		return 8;
	}
	@DoDialog(var_387_object);
	bool var_401_bool; object var_402_object;
	object var_403_object;
	func_4523(var_403_object);
	var_403_object = var_402_object;
	func_4332(var_401_bool, var_402_object);
	object var_404_object; object var_405_object;
	var_381_object = var_404_object;
	var_387_object = var_405_object;
	TaskCall(5);
	func_678(var_406_object, var_407_object, var_408_string, var_409_bool, var_404_object, var_405_object);
	TaskReturn();
	bool var_390_bool;
	var_387_object->IsDialogEnd(var_390_bool);
	
	for(;;) {
		var_456_bool = !var_390_bool; //@nz
		if(var_456_bool == 0) goto Label_667;
		@sync();
		var_387_object->IsDialogEnd(var_390_bool);
	}
	
Label_667:
	object var_457_object;
	var_381_object = var_457_object;
	func_4314();
	@StopDialog(var_387_object);
	var_387_object->GetReturnValue(-1);
	int var_389_int = var_380_int;
}
EMIT "Stack[-4] = 0";


void func_4695(string var_81_string, int var_82_int)
{
	string var_84_string = "idle";
	if(var_82_int != 0)
		var_84_string += var_82_int;
	var_84_string = var_81_string;
}


void func_5208(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 449, 1, 527007);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, 447);
}
EMIT "Stack[-1] = 0";


void func_4702(int var_75_int)
{
	int var_78_int; bool var_79_bool;
	var_78_int = 0;
	
	for(;;) {
		string var_81_string; int var_82_int;
		var_78_int = var_82_int;
		func_4695(var_81_string, var_82_int);
		@HasAnimation(var_79_bool, "all", var_81_string);
		if(!var_79_bool) //@nz
			break;
		var_78_int += 1;
	}
	var_78_int = var_75_int;
}


void func_4192(bool var_177_bool, object var_178_object, string var_179_string, float var_180_float, float var_181_float, float var_182_float)
{
	object var_186_object;
	var_178_object = var_186_object;
	string var_187_string;
	var_179_string = var_187_string;
	bool var_185_bool;
	func_4180(var_185_bool, var_186_object, var_187_string);
	if(!var_185_bool) //@nz
		var_177_bool = false;
	float var_184_float;
	var_178_object->GetProperty(var_179_string, var_184_float);
	float var_195_float; float var_197_float; float var_198_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_4539(var_195_float, (var_184_float + var_180_float), var_197_float, var_198_float);
	var_178_object->SetProperty(var_179_string, var_195_float);
	var_177_bool = true;
}


void func_5221(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 330, 2, 524775);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, 326);
}
EMIT "Stack[-1] = 0";


void func_4719(int var_137_int)
{
	var_137_int = 515543;
}


void func_4721(int var_136_int)
{
	var_136_int = 502868;
}


void func_5234(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 762, 2, 539747);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_5286(var_81_bool, var_82_object, 757);
}
EMIT "Stack[-1] = 0";


void func_4723(string var_138_string)
{
	var_138_string = "ui/NPC_Maria.png";
}


void func_4725(string var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png";
}


void func_4214(object var_109_object, string var_110_string, int var_111_int)
{
	int var_113_int;
	var_109_object->GetProperty(var_110_string, var_113_int);
	var_109_object->SetProperty(var_110_string, (var_113_int + var_111_int));
}


void func_4727(bool var_131_bool)
{
	var_131_bool = true;
}


// @pe
void func_4729(object var_106_object)
{
	object var_110_object;
	func_5314(var_110_object);
	object var_107_object;
	var_110_object = var_107_object;
	func_5331(var_107_object, "pt_map_eva", (float)2);
	object var_130_object;
	func_5314(var_130_object);
	var_106_object->ShowMap(var_130_object);
}


void func_4221(bool var_64_bool, cvector var_65_cvector)
{
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	bool var_71_bool;
	@Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
}


void func_3710(object var_0_object, int var_1025_int, object var_1026_object)
{
	var_0_object = var_1026_object;
	bool var_1036_bool; object var_1037_object;
	var_1026_object = var_1037_object;
	func_4245(var_1036_bool, var_1037_object, 70.0);
	if(!var_1036_bool) { //@nz
		var_1025_int = -2;
		return 8;
	}
	object var_1032_object;
	@CreateDialog(var_1032_object);
	int var_1040_int;
	func_4721(var_1040_int);
	var_1032_object->SetNPCName(var_1040_int);
	int var_1041_int;
	func_4719(var_1041_int);
	var_1032_object->SetNPCDescription(var_1041_int);
	string var_1042_string;
	func_4723(var_1042_string);
	var_1032_object->SetPhoto(var_1042_string);
	string var_1043_string;
	func_4725(var_1043_string);
	var_1032_object->SetPhoto2(var_1043_string);
	int var_1044_int;
	func_5364(var_1044_int);
	var_1032_object->SetPlayerName(var_1044_int);
	bool var_1033_bool;
	@IsOverrideActive(var_1033_bool);
	if(var_1033_bool != 0) {
		var_1025_int = -2;
		return 8;
	}
	@DoDialog(var_1032_object);
	bool var_1046_bool; object var_1047_object;
	object var_1048_object;
	func_4523(var_1048_object);
	var_1048_object = var_1047_object;
	func_4332(var_1046_bool, var_1047_object);
	object var_1049_object; object var_1050_object;
	var_1026_object = var_1049_object;
	var_1032_object = var_1050_object;
	TaskCall(21);
	func_3791(var_1051_object, var_1052_object, var_1053_string, var_1054_bool, var_1049_object, var_1050_object);
	TaskReturn();
	bool var_1035_bool;
	var_1032_object->IsDialogEnd(var_1035_bool);
	
	for(;;) {
		var_1079_bool = !var_1035_bool; //@nz
		if(var_1079_bool == 0) goto Label_3780;
		@sync();
		var_1032_object->IsDialogEnd(var_1035_bool);
	}
	
Label_3780:
	object var_1080_object;
	var_1026_object = var_1080_object;
	func_4314();
	@StopDialog(var_1032_object);
	var_1032_object->GetReturnValue(-1);
	int var_1034_int = var_1025_int;
}
EMIT "Stack[-4] = 0";


void func_5247(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 742, 2, 539459);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_5286(var_87_bool, var_88_object, 740);
}
EMIT "Stack[-1] = 0";


void func_4231(bool var_60_bool, object var_61_object)
{
	cvector var_63_cvector;
	var_61_object->GetPosition(var_63_cvector);
	bool var_64_bool; cvector var_65_cvector;
	var_63_cvector = var_65_cvector;
	func_4221(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
}


// @pe
void func_4745(object var_137_object)
{
	@Trace("money 4000 is given");
	object var_140_object;
	var_137_object = var_140_object;
	func_4567(var_140_object, 4000);
}


void func_5260(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 425, 1, 526224);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5286(var_71_bool, var_72_object, 416);
}
EMIT "Stack[-1] = 0";


void func_4240(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


// @pe
void func_4755(object var_164_object)
{
	object var_167_object;
	var_164_object = var_167_object;
	bool var_166_bool;
	func_4618(var_166_bool, var_167_object, -0.05);
}


void func_4245(bool var_88_bool, object var_89_object, float var_90_float)
{
	cvector var_101_cvector; bool var_108_bool;
	var_89_object->GetPosition(var_101_cvector);
	float var_100_float;
	var_89_object->GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	SetByIndex(var_101_cvector, 1) = (var_109_float + var_100_float);
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	@GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	SetByIndex(var_102_cvector, 1) = (var_110_float + var_100_float);
	cvector var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_113_float = sqrt(var_103_cvector | var_103_cvector);
	var_103_cvector /= var_113_float;
	cvector var_104_cvector = -var_103_cvector;
	cvector var_115_cvector;
	func_4529(var_115_cvector, (var_104_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_105_cvector = ((var_103_cvector * var_90_float) + (var_115_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_107_bool;
	@IsOverrideActive(var_107_bool);
	if(var_107_bool != 0)
		var_88_bool = false;
	@StopWorld();
	@CameraTransit((var_102_cvector + var_105_cvector), var_104_cvector, true);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	@Rotate(var_129_float, var_130_float);
	bool var_131_bool;
	func_4727(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		@HasAnimationTrack(var_108_bool, "head");
		if(var_108_bool == 0) goto Label_4308;
		@LookAsyncCamera("head");
	}
Label_4308:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_88_bool = true;
	
}


// @pe
void func_5118(bool var_760_bool)
{
	int var_762_int;
	func_4550(var_762_int, "ook8Maria2");
	if(var_762_int == 0) {
		var_760_bool = true;
		return 0;
	}
	var_760_bool = false;
}


void func_5273(object var_90_object)
{
	object var_92_object;
	@GetDiaryRoot(var_92_object);
	if(!var_92_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_90_object = false;
	}
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4762(void)
{
	@SetVariable("k1q02", 4);
	func_5221();
}


// @pe
void func_4771(void)
{
	@SetVariable("ook3Maria1", 1);
}


// @pe
void func_164(object var_2_object, string var_345_string)
{
	bool var_346_bool;
	func_4727(var_346_bool);
	if(!var_346_bool) //@nz
		return 0;
	if(var_345_string == var_2_object)
		return 0;
	string var_349_string; bool var_350_bool;
	var_345_string = var_349_string;
	if(var_345_string == "")
		var_350_bool = false;
	else
		var_350_bool = true;
	func_4486(var_349_string, var_350_bool);
	var_2_object = var_345_string;
	
}


// @pe
void func_678(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_404_object, object var_405_object)
{
	var_0_object = var_405_object;
	var_1_object = var_404_object;
	var_3_string = false;
	if(1 != 0) {
		func_760(var_405_object, "Neutral");
		var_0_object->SetMessage(525607); //@t
		var_0_object->ClearReplies(); //@t
		bool var_420_bool = false;
		bool var_421_bool;
		func_4992(var_1_object);
		if(var_421_bool != 0) {
			bool var_427_bool;
			func_5004(var_1_object);
			if(var_427_bool != 0)
				var_420_bool = true;
		}
		if(var_420_bool != 0)
			var_0_object->AddReply(525608, 26956, 26955); //@t
		bool var_436_bool;
		func_5178(var_1_object);
		if(var_436_bool != 0)
			var_0_object->AddReply(540700, 42737, 42736); //@t
		var_0_object->AddReply(525613, -1, 26960); //@t
		goto Label_730;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2aa";
	}
Label_730:
	bool var_448_bool;
	func_4727(var_448_bool);
	if(var_448_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_759;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_759:
		return 0;

	}
	
}


void func_5286(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_5273(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	object var_88_object;
	var_87_object->Find(var_83_int, var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_83_int);
		var_81_bool = false;
	}
	var_88_object->AddChild(var_82_object);
	@SendWorldWndMessage(7);
	int var_89_int;
	var_82_object->GetCategory(var_89_int);
	@SetDiarySection(var_89_int);
	var_81_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4777(void)
{
	@SetVariable("ook4Maria1", 1);
}


void func_2222(object var_0_object, int var_966_int, object var_967_object)
{
	var_0_object = var_967_object;
	bool var_977_bool; object var_978_object;
	var_967_object = var_978_object;
	func_4245(var_977_bool, var_978_object, 70.0);
	if(!var_977_bool) { //@nz
		var_966_int = -2;
		return 8;
	}
	object var_973_object;
	@CreateDialog(var_973_object);
	int var_981_int;
	func_4721(var_981_int);
	var_973_object->SetNPCName(var_981_int);
	int var_982_int;
	func_4719(var_982_int);
	var_973_object->SetNPCDescription(var_982_int);
	string var_983_string;
	func_4723(var_983_string);
	var_973_object->SetPhoto(var_983_string);
	string var_984_string;
	func_4725(var_984_string);
	var_973_object->SetPhoto2(var_984_string);
	int var_985_int;
	func_5364(var_985_int);
	var_973_object->SetPlayerName(var_985_int);
	bool var_974_bool;
	@IsOverrideActive(var_974_bool);
	if(var_974_bool != 0) {
		var_966_int = -2;
		return 8;
	}
	@DoDialog(var_973_object);
	bool var_987_bool; object var_988_object;
	object var_989_object;
	func_4523(var_989_object);
	var_989_object = var_988_object;
	func_4332(var_987_bool, var_988_object);
	object var_990_object; object var_991_object;
	var_967_object = var_990_object;
	var_973_object = var_991_object;
	TaskCall(13);
	func_2303(var_992_object, var_993_object, var_994_string, var_995_bool, var_990_object, var_991_object);
	TaskReturn();
	bool var_976_bool;
	var_973_object->IsDialogEnd(var_976_bool);
	
	for(;;) {
		var_1023_bool = !var_976_bool; //@nz
		if(var_1023_bool == 0) goto Label_2292;
		@sync();
		var_973_object->IsDialogEnd(var_976_bool);
	}
	
Label_2292:
	object var_1024_object;
	var_967_object = var_1024_object;
	func_4314();
	@StopDialog(var_973_object);
	var_973_object->GetReturnValue(-1);
	int var_975_int = var_966_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4783(void)
{
	@SetVariable("k7q01", 7);
	func_5260();
}


// @pe
void func_1202(object var_2_object, string var_508_string)
{
	bool var_509_bool;
	func_4727(var_509_bool);
	if(!var_509_bool) //@nz
		return 0;
	if(var_508_string == var_2_object)
		return 0;
	string var_512_string; bool var_513_bool;
	var_508_string = var_512_string;
	if(var_508_string == "")
		var_513_bool = false;
	else
		var_513_bool = true;
	func_4486(var_512_string, var_513_bool);
	var_2_object = var_508_string;
	
}


// @pe
void func_4792(void)
{
	@SetVariable("k10q01", 2);
	func_5208();
	bool var_89_bool;
	func_4663(var_89_bool, "quest_k10_01", "place_soldiers");
}


void func_5314(object var_68_object)
{
	object var_71_object; object var_72_object;
	@GetMainOutdoorScene(var_71_object);
	if(var_71_object == null) {
		@Trace("Can't find main outdoor scene");
		var_72_object = null;
		var_72_object = var_68_object;
	}
	var_71_object->GetMap(var_72_object);
	var_72_object = var_68_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4806(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_4812(object var_147_object)
{
	@Trace("feromicin2 is given");
	object var_150_object;
	var_147_object = var_150_object;
	func_4605(var_150_object, "feromicin", 2);
}


void func_1740(object var_0_object, int var_869_int, object var_870_object)
{
	var_0_object = var_870_object;
	bool var_880_bool; object var_881_object;
	var_870_object = var_881_object;
	func_4245(var_880_bool, var_881_object, 70.0);
	if(!var_880_bool) { //@nz
		var_869_int = -2;
		return 8;
	}
	object var_876_object;
	@CreateDialog(var_876_object);
	int var_884_int;
	func_4721(var_884_int);
	var_876_object->SetNPCName(var_884_int);
	int var_885_int;
	func_4719(var_885_int);
	var_876_object->SetNPCDescription(var_885_int);
	string var_886_string;
	func_4723(var_886_string);
	var_876_object->SetPhoto(var_886_string);
	string var_887_string;
	func_4725(var_887_string);
	var_876_object->SetPhoto2(var_887_string);
	int var_888_int;
	func_5364(var_888_int);
	var_876_object->SetPlayerName(var_888_int);
	bool var_877_bool;
	@IsOverrideActive(var_877_bool);
	if(var_877_bool != 0) {
		var_869_int = -2;
		return 8;
	}
	@DoDialog(var_876_object);
	bool var_890_bool; object var_891_object;
	object var_892_object;
	func_4523(var_892_object);
	var_892_object = var_891_object;
	func_4332(var_890_bool, var_891_object);
	object var_893_object; object var_894_object;
	var_870_object = var_893_object;
	var_876_object = var_894_object;
	TaskCall(11);
	func_1821(var_895_object, var_896_object, var_897_string, var_898_bool, var_893_object, var_894_object);
	TaskReturn();
	bool var_879_bool;
	var_876_object->IsDialogEnd(var_879_bool);
	
	for(;;) {
		var_962_bool = !var_879_bool; //@nz
		if(var_962_bool == 0) goto Label_1810;
		@sync();
		var_876_object->IsDialogEnd(var_879_bool);
	}
	
Label_1810:
	object var_963_object;
	var_870_object = var_963_object;
	func_4314();
	@StopDialog(var_876_object);
	var_876_object->GetReturnValue(-1);
	int var_878_int = var_869_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3791(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1049_object, object var_1050_object)
{
	var_0_object = var_1050_object;
	var_1_object = var_1049_object;
	var_3_string = false;
	if(1 != 0) {
		func_3849(var_1050_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_3819;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xed3";
	}
Label_3819:
	bool var_1071_bool;
	func_4727(var_1071_bool);
	if(var_1071_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3848;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3848:
		return 0;

	}
	
}


void func_5331(object var_107_object, string var_108_string, float var_109_float)
{
	object var_117_object;
	@GetMainOutdoorScene(var_117_object);
	if(var_117_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_115_cvector;
	cvector var_116_cvector;
	bool var_118_bool;
	var_117_object->GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector);
	if(!var_118_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_108_string) + " doesnt exist");
	var_117_object->GetMap(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_128_float = GetByIndex(var_115_cvector, 0);
	var_129_float = GetByIndex(var_115_cvector, 2);
	var_107_object->SetMapParams(var_128_float, var_129_float, var_109_float);
}
EMIT "Stack[-2] = 0";


void func_4823(void)
{
	@SetVariable("k5q04", 2);
	object var_68_object;
	func_5314(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	float var_79_float;
	func_4675(var_79_float);
	var_65_object->AddMark("k5q04MariaGotoDanko", "pt_map_eva", 0, 515279, var_79_float);
	func_5247();
}
EMIT "Stack[-1] = 0";


void func_4314(void)
{
	bool var_296_bool;
	@CameraSwitchToNormal(true);
	bool var_298_bool;
	func_4727(var_298_bool);
	if(var_298_bool != 0) {
	} else {
		@HasAnimationTrack(var_296_bool, "head");
		if(var_296_bool == 0) goto Label_4331;
		@UnlookAsync("head");
	}
Label_4331:
	
}


void func_4332(bool var_149_bool, object var_150_object)
{
	int var_156_int; int var_157_int;
	@GetVariable("voice_common", var_156_int);
	if(var_156_int != 0) {
		bool var_160_bool; object var_161_object;
		var_150_object = var_161_object;
		func_4390(var_160_bool, var_161_object);
		if(!var_160_bool) { //@nz
			bool var_191_bool; object var_192_object;
			var_150_object = var_192_object;
			func_4427(var_191_bool, var_192_object);
			if(!var_191_bool) { //@nz
				var_149_bool = false;
				return 4;
			}
		}
		@irand(var_157_int, 2);
		if(var_157_int != 0)
			@SetVariable("voice_common", ((var_156_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_236_bool; object var_237_object;
		var_150_object = var_237_object;
		func_4427(var_236_bool, var_237_object);
		if(!var_236_bool) { //@nz
			bool var_239_bool; object var_240_object;
			var_150_object = var_240_object;
			func_4390(var_239_bool, var_240_object);
			if(!var_239_bool) { //@nz
				var_149_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4388;
	
Label_4388:
	var_149_bool = true;
	
}


// @pe
void func_4846(void)
{
	func_5234();
}


// @pe
void func_4851(void)
{
	@SetVariable("ook8Maria1", 1);
}


void func_5364(int var_140_int)
{
	int var_142_int;
	@GetVariable("branch", var_142_int);
	if(var_142_int == 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x1503";
	}
	if(var_142_int == 1) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
}


// @pe
void func_760(object var_2_object, string var_411_string)
{
	bool var_412_bool;
	func_4727(var_412_bool);
	if(!var_412_bool) //@nz
		return 0;
	if(var_411_string == var_2_object)
		return 0;
	string var_415_string; bool var_416_bool;
	var_411_string = var_415_string;
	if(var_411_string == "")
		var_416_bool = false;
	else
		var_416_bool = true;
	func_4486(var_415_string, var_416_bool);
	var_2_object = var_411_string;
	
}


// @pe
void func_4857(void)
{
	@SetVariable("ook8Maria2", 1);
}


void func_3325(object var_0_object, int var_784_int, object var_785_object)
{
	var_0_object = var_785_object;
	bool var_795_bool; object var_796_object;
	var_785_object = var_796_object;
	func_4245(var_795_bool, var_796_object, 70.0);
	if(!var_795_bool) { //@nz
		var_784_int = -2;
		return 8;
	}
	object var_791_object;
	@CreateDialog(var_791_object);
	int var_799_int;
	func_4721(var_799_int);
	var_791_object->SetNPCName(var_799_int);
	int var_800_int;
	func_4719(var_800_int);
	var_791_object->SetNPCDescription(var_800_int);
	string var_801_string;
	func_4723(var_801_string);
	var_791_object->SetPhoto(var_801_string);
	string var_802_string;
	func_4725(var_802_string);
	var_791_object->SetPhoto2(var_802_string);
	int var_803_int;
	func_5364(var_803_int);
	var_791_object->SetPlayerName(var_803_int);
	bool var_792_bool;
	@IsOverrideActive(var_792_bool);
	if(var_792_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	@DoDialog(var_791_object);
	bool var_805_bool; object var_806_object;
	object var_807_object;
	func_4523(var_807_object);
	var_807_object = var_806_object;
	func_4332(var_805_bool, var_806_object);
	object var_808_object; object var_809_object;
	var_785_object = var_808_object;
	var_791_object = var_809_object;
	TaskCall(19);
	func_3406(var_810_object, var_811_object, var_812_string, var_813_bool, var_808_object, var_809_object);
	TaskReturn();
	bool var_794_bool;
	var_791_object->IsDialogEnd(var_794_bool);
	
	for(;;) {
		var_865_bool = !var_794_bool; //@nz
		if(var_865_bool == 0) goto Label_3395;
		@sync();
		var_791_object->IsDialogEnd(var_794_bool);
	}
	
Label_3395:
	object var_866_object;
	var_785_object = var_866_object;
	func_4314();
	@StopDialog(var_791_object);
	var_791_object->GetReturnValue(-1);
	int var_793_int = var_784_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4863(void)
{
	@SetVariable("ook9Maria1", 1);
}


// @pe
void func_2303(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_990_object, object var_991_object)
{
	var_0_object = var_991_object;
	var_1_object = var_990_object;
	var_3_string = false;
	if(1 != 0) {
		func_2366(var_991_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_2336;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x903";
	}
Label_2336:
	bool var_1015_bool;
	func_4727(var_1015_bool);
	if(var_1015_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2365;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2365:
		return 0;

	}
	
}


// @pe
void func_4869(void)
{
	@SetVariable("ook9Maria2", 1);
}


void func_5381(int var_722_int)
{
	int var_724_int;
	@GetVariable("k2system_danko_day", var_724_int);
	var_724_int = var_722_int;
}


// @pe
void func_3849(object var_2_object, string var_1056_string)
{
	bool var_1057_bool;
	func_4727(var_1057_bool);
	if(!var_1057_bool) //@nz
		return 0;
	if(var_1056_string == var_2_object)
		return 0;
	string var_1060_string; bool var_1061_bool;
	var_1056_string = var_1060_string;
	if(var_1056_string == "")
		var_1061_bool = false;
	else
		var_1061_bool = true;
	func_4486(var_1060_string, var_1061_bool);
	var_2_object = var_1056_string;
	
}


// @pe
void func_4875(void)
{
	@SetVariable("ook10Maria1", 1);
}


void func_5387(int var_731_int)
{
	int var_736_int;
	func_5381(var_736_int);
	int var_734_int;
	var_736_int = var_734_int;
	int var_735_int;
	@GetVariable(("k2system_danko_state" + var_734_int), var_735_int);
	var_735_int = var_731_int;
}


// @pe
void func_4881(void)
{
	@SetVariable("ook10Maria2", 1);
}


void func_5398(bool var_720_bool)
{
	int var_721_int;
	func_4680(var_721_int);
	int var_722_int;
	func_5381(var_722_int);
	var_720_bool = var_721_int == var_722_int;
}


void func_4887(object var_99_object)
{
	int var_102_int;
	@irand(var_102_int, 1000);
	object var_104_object;
	var_99_object = var_104_object;
	func_4567(var_104_object, (var_102_int + 2000));
}


// @pe
void func_1821(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_893_object, object var_894_object)
{
	var_0_object = var_894_object;
	var_1_object = var_893_object;
	var_3_string = false;
	if(1 != 0) {
		func_1945(var_894_object, "Mysterious");
		var_0_object->SetMessage(526947); //@t
		var_0_object->ClearReplies(); //@t
		bool var_909_bool;
		func_5052(var_1_object);
		if(var_909_bool != 0)
			var_0_object->AddReply(526948, 28241, 28240); //@t
		bool var_918_bool = false;
		bool var_919_bool = false;
		bool var_920_bool;
		func_5076(var_920_bool, var_1_object);
		if(var_920_bool != 0) {
			bool var_922_bool;
			func_5086(var_922_bool, var_1_object);
			if(var_922_bool != 0)
				var_919_bool = true;
		}
		if(var_919_bool != 0) {
			bool var_924_bool;
			func_5154(var_1_object);
			if(var_924_bool != 0)
				var_918_bool = true;
		}
		if(var_918_bool != 0)
			var_0_object->AddReply(539852, 41805, 41804); //@t
		bool var_933_bool = false;
		bool var_934_bool = false;
		bool var_935_bool;
		func_5076(var_935_bool, var_1_object);
		if(var_935_bool != 0) {
			bool var_937_bool;
			func_5096(var_937_bool, var_1_object);
			if(var_937_bool != 0)
				var_934_bool = true;
		}
		if(var_934_bool != 0) {
			bool var_939_bool;
			func_5166(var_1_object);
			if(var_939_bool != 0)
				var_933_bool = true;
		}
		if(var_933_bool != 0)
			var_0_object->AddReply(539855, 41808, 41807); //@t
		var_0_object->AddReply(526951, -1, 28243); //@t
		var_0_object->AddReply(528006, -1, 29366); //@t
		goto Label_1915;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x721";
	}
Label_1915:
	bool var_954_bool;
	func_4727(var_954_bool);
	if(var_954_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1944;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1944:
		return 0;

	}
	
}


void func_5406(bool var_757_bool)
{
	int var_758_int;
	func_5387(var_758_int);
	var_757_bool = var_758_int == 2;
}


void func_4898(object var_99_object)
{
	int var_102_int;
	@irand(var_102_int, 1000);
	object var_104_object;
	var_99_object = var_104_object;
	func_4567(var_104_object, (var_102_int + 3000));
}


void func_5412(bool var_730_bool)
{
	int var_731_int;
	func_5387(var_731_int);
	var_730_bool = var_731_int == 0;
}


void func_4390(bool var_160_bool, object var_161_object)
{
	string var_167_string; bool var_169_bool; int var_170_int; string var_171_string;
	var_167_string = "c";
	int var_168_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_161_object->HasProperty((var_167_string + (var_168_int + 1)), var_169_bool);
			if(!var_169_bool) { //@nz
			} else {
				var_168_int += 1;
			}
		}
		if(!var_168_int) { //@nz
			var_160_bool = false;
			return 10;
		}
		var_170_int = 0;
		if(var_168_int > 1)
			@irand(var_170_int, var_168_int);
		var_161_object->GetProperty((var_167_string + (var_170_int + 1)), var_171_string);
		bool var_183_bool; string var_184_string;
		var_171_string = var_184_string;
		func_4501(var_183_bool, var_184_string);
		var_183_bool = var_160_bool;
		return 10;

	}
}


// @pe
void func_5418(object var_74_object)
{
	var_75_bool = GlobalVars[1];
	if(!var_75_bool) { //@nz
		int var_77_int; object var_78_object;
		var_74_object = var_78_object;
		TaskCall(2);
		func_371(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_302_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_303_bool;
	func_4689(var_303_bool, 1);
	if(var_303_bool != 0) {
		int var_306_int; object var_307_object;
		var_74_object = var_307_object;
		TaskCall(0);
		func_0(var_308_object, var_306_int, var_307_object);
		TaskReturn();
		return 0;
	}
	bool var_378_bool;
	func_4689(var_378_bool, 3);
	if(var_378_bool != 0) {
		int var_380_int; object var_381_object;
		var_74_object = var_381_object;
		TaskCall(4);
		func_597(var_382_object, var_380_int, var_381_object);
		TaskReturn();
		return 0;
	}
	bool var_458_bool;
	func_4689(var_458_bool, 4);
	if(var_458_bool != 0) {
		int var_460_int; object var_461_object;
		var_74_object = var_461_object;
		TaskCall(6);
		func_1024(var_462_object, var_460_int, var_461_object);
		TaskReturn();
		return 0;
	}
	bool var_541_bool;
	func_4689(var_541_bool, 5);
	if(var_541_bool != 0) {
		int var_543_int; object var_544_object;
		var_74_object = var_544_object;
		TaskCall(14);
		func_2481(var_545_object, var_543_int, var_544_object);
		TaskReturn();
		return 0;
	}
	bool var_608_bool;
	func_4689(var_608_bool, 7);
	if(var_608_bool != 0) {
		int var_610_int; object var_611_object;
		var_74_object = var_611_object;
		TaskCall(8);
		func_1401(var_612_object, var_610_int, var_611_object);
		TaskReturn();
		return 0;
	}
	bool var_672_bool;
	func_4689(var_672_bool, 8);
	if(var_672_bool != 0) {
		int var_674_int; object var_675_object;
		var_74_object = var_675_object;
		TaskCall(16);
		func_2899(var_676_object, var_674_int, var_675_object);
		TaskReturn();
		return 0;
	}
	bool var_782_bool;
	func_4689(var_782_bool, 9);
	if(var_782_bool != 0) {
		int var_784_int; object var_785_object;
		var_74_object = var_785_object;
		TaskCall(18);
		func_3325(var_786_object, var_784_int, var_785_object);
		TaskReturn();
		return 0;
	}
	bool var_867_bool;
	func_4689(var_867_bool, 10);
	if(var_867_bool != 0) {
		int var_869_int; object var_870_object;
		var_74_object = var_870_object;
		TaskCall(10);
		func_1740(var_871_object, var_869_int, var_870_object);
		TaskReturn();
		return 0;
	}
	bool var_964_bool;
	func_4689(var_964_bool, 12);
	if(var_964_bool != 0) {
		int var_966_int; object var_967_object;
		var_74_object = var_967_object;
		TaskCall(12);
		func_2222(var_968_object, var_966_int, var_967_object);
		TaskReturn();
		return 0;
	}
	int var_1025_int; object var_1026_object;
	var_74_object = var_1026_object;
	TaskCall(20);
	func_3710(var_1027_object, var_1025_int, var_1026_object);
	TaskReturn();
}


void func_4909(object var_119_object)
{
	int var_122_int;
	@irand(var_122_int, 1000);
	object var_124_object;
	var_119_object = var_124_object;
	func_4567(var_124_object, (var_122_int + 4000));
}


// @pe
void func_4920(void)
{
	@SetVariable("ook3Maria2", 1);
}


// @pe
void func_4926(object var_62_object)
{
	object var_65_object;
	var_62_object = var_65_object;
	bool var_64_bool;
	func_4618(var_64_bool, var_65_object, 0.1);
}


// @pe
void func_2366(object var_2_object, string var_997_string)
{
	bool var_998_bool;
	func_4727(var_998_bool);
	if(!var_998_bool) //@nz
		return 0;
	if(var_997_string == var_2_object)
		return 0;
	string var_1001_string; bool var_1002_bool;
	var_997_string = var_1001_string;
	if(var_997_string == "")
		var_1002_bool = false;
	else
		var_1002_bool = true;
	func_4486(var_1001_string, var_1002_bool);
	var_2_object = var_997_string;
	
}


// @pe
void func_4933(object var_115_object)
{
	object var_118_object;
	var_115_object = var_118_object;
	bool var_117_bool;
	func_4618(var_117_bool, var_118_object, -0.1);
}


void func_4427(bool var_191_bool, object var_192_object)
{
	bool var_200_bool; int var_201_int; string var_202_string;
	int var_204_int;
	func_4680(var_204_int);
	string var_198_string = ("d" + var_204_int) + "m";
	int var_199_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_192_object->HasProperty((var_198_string + (var_199_int + 1)), var_200_bool);
			if(!var_200_bool) { //@nz
			} else {
				var_199_int += 1;
			}
		}
		if(!var_199_int) { //@nz
			var_191_bool = false;
			return 10;
		}
		var_201_int = 0;
		if(var_199_int > 1)
			@irand(var_201_int, var_199_int);
		var_192_object->GetProperty((var_198_string + (var_201_int + 1)), var_202_string);
		bool var_223_bool; string var_224_string;
		var_202_string = var_224_string;
		func_4501(var_223_bool, var_224_string);
		var_223_bool = var_191_bool;
		return 10;

	}
}


// @pe
void func_4940(object var_104_object)
{
	object var_107_object;
	var_104_object = var_107_object;
	bool var_106_bool;
	func_4618(var_106_bool, var_107_object, -0.3);
}


// @pe
void func_3406(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_808_object, object var_809_object)
{
	var_0_object = var_809_object;
	var_1_object = var_808_object;
	var_3_string = false;
	if(1 != 0) {
		func_3515(var_809_object, "Mysterious");
		var_0_object->SetMessage(539840); //@t
		var_0_object->ClearReplies(); //@t
		bool var_824_bool = false;
		bool var_825_bool = false;
		bool var_826_bool;
		func_5076(var_826_bool, var_1_object);
		if(var_826_bool != 0) {
			bool var_828_bool;
			func_5086(var_828_bool, var_1_object);
			if(var_828_bool != 0)
				var_825_bool = true;
		}
		if(var_825_bool != 0) {
			bool var_830_bool;
			func_5130(var_1_object);
			if(var_830_bool != 0)
				var_824_bool = true;
		}
		if(var_824_bool != 0)
			var_0_object->AddReply(539841, 41794, 41793); //@t
		bool var_839_bool = false;
		bool var_840_bool = false;
		bool var_841_bool;
		func_5076(var_841_bool, var_1_object);
		if(var_841_bool != 0) {
			bool var_843_bool;
			func_5096(var_843_bool, var_1_object);
			if(var_843_bool != 0)
				var_840_bool = true;
		}
		if(var_840_bool != 0) {
			bool var_845_bool;
			func_5142(var_1_object);
			if(var_845_bool != 0)
				var_839_bool = true;
		}
		if(var_839_bool != 0)
			var_0_object->AddReply(539844, 41797, 41796); //@t
		var_0_object->AddReply(539850, -1, 41802); //@t
		goto Label_3485;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd52";
	}
Label_3485:
	bool var_857_bool;
	func_4727(var_857_bool);
	if(var_857_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3514;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3514:
		return 0;

	}
	
}


void func_3920(object var_0_object)
{
	bool var_57_bool;
	func_4240(var_57_bool);
	if(!var_57_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4096();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_4947(object var_123_object)
{
	@Trace("feromicin is given");
	object var_126_object;
	var_123_object = var_126_object;
	func_4605(var_126_object, "feromicin", 1);
}


void func_2899(object var_0_object, int var_674_int, object var_675_object)
{
	var_0_object = var_675_object;
	bool var_685_bool; object var_686_object;
	var_675_object = var_686_object;
	func_4245(var_685_bool, var_686_object, 70.0);
	if(!var_685_bool) { //@nz
		var_674_int = -2;
		return 8;
	}
	object var_681_object;
	@CreateDialog(var_681_object);
	int var_689_int;
	func_4721(var_689_int);
	var_681_object->SetNPCName(var_689_int);
	int var_690_int;
	func_4719(var_690_int);
	var_681_object->SetNPCDescription(var_690_int);
	string var_691_string;
	func_4723(var_691_string);
	var_681_object->SetPhoto(var_691_string);
	string var_692_string;
	func_4725(var_692_string);
	var_681_object->SetPhoto2(var_692_string);
	int var_693_int;
	func_5364(var_693_int);
	var_681_object->SetPlayerName(var_693_int);
	bool var_682_bool;
	@IsOverrideActive(var_682_bool);
	if(var_682_bool != 0) {
		var_674_int = -2;
		return 8;
	}
	@DoDialog(var_681_object);
	bool var_695_bool; object var_696_object;
	object var_697_object;
	func_4523(var_697_object);
	var_697_object = var_696_object;
	func_4332(var_695_bool, var_696_object);
	object var_698_object; object var_699_object;
	var_675_object = var_698_object;
	var_681_object = var_699_object;
	TaskCall(17);
	func_2980(var_700_object, var_701_object, var_702_string, var_703_bool, var_698_object, var_699_object);
	TaskReturn();
	bool var_684_bool;
	var_681_object->IsDialogEnd(var_684_bool);
	
	for(;;) {
		var_780_bool = !var_684_bool; //@nz
		if(var_780_bool == 0) goto Label_2969;
		@sync();
		var_681_object->IsDialogEnd(var_684_bool);
	}
	
Label_2969:
	object var_781_object;
	var_675_object = var_781_object;
	func_4314();
	@StopDialog(var_681_object);
	var_681_object->GetReturnValue(-1);
	int var_683_int = var_674_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4958(object var_127_object)
{
	@Trace("morfin is given");
	object var_130_object;
	var_127_object = var_130_object;
	func_4605(var_130_object, "morfin", 1);
}


void func_3934(bool var_81_bool)
{
	object var_83_object;
	@FindActor(var_83_object, "player");
	if(!var_83_object) //@nz
		var_81_bool = false;
	bool var_86_bool; object var_87_object;
	var_83_object = var_87_object;
	func_4231(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4969(object var_148_object)
{
	@Trace("neomicin is given");
	object var_151_object;
	var_148_object = var_151_object;
	func_4605(var_151_object, "neomicin", 1);
}


void func_3949(object var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_133_float, var_134_float);
}


void func_3954(bool var_64_bool)
{
	object var_67_object;
	@FindActor(var_67_object, "player");
	if(!var_67_object) { //@nz
		var_64_bool = false;
		return 4;
	}
	float var_71_float; object var_72_object;
	func_4172(var_71_float, var_72_object);
	if(var_71_float > 90000.0) {
		var_64_bool = false;
		return 4;
	}
	bool var_68_bool;
	@CanSee(var_68_bool, var_72_object);
	var_68_bool = var_64_bool;
}
EMIT "Stack[-2] = 0";


void func_371(object var_0_object, int var_77_int, object var_78_object)
{
	var_0_object = var_78_object;
	bool var_88_bool; object var_89_object;
	var_78_object = var_89_object;
	func_4245(var_88_bool, var_89_object, 70.0);
	if(!var_88_bool) { //@nz
		var_77_int = -2;
		return 8;
	}
	object var_84_object;
	@CreateDialog(var_84_object);
	int var_136_int;
	func_4721(var_136_int);
	var_84_object->SetNPCName(var_136_int);
	int var_137_int;
	func_4719(var_137_int);
	var_84_object->SetNPCDescription(var_137_int);
	string var_138_string;
	func_4723(var_138_string);
	var_84_object->SetPhoto(var_138_string);
	string var_139_string;
	func_4725(var_139_string);
	var_84_object->SetPhoto2(var_139_string);
	int var_140_int;
	func_5364(var_140_int);
	var_84_object->SetPlayerName(var_140_int);
	bool var_85_bool;
	@IsOverrideActive(var_85_bool);
	if(var_85_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	@DoDialog(var_84_object);
	bool var_149_bool; object var_150_object;
	object var_151_object;
	func_4523(var_151_object);
	var_151_object = var_150_object;
	func_4332(var_149_bool, var_150_object);
	object var_244_object; object var_245_object;
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(3);
	func_452(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	bool var_87_bool;
	var_84_object->IsDialogEnd(var_87_bool);
	
	for(;;) {
		var_293_bool = !var_87_bool; //@nz
		if(var_293_bool == 0) goto Label_441;
		@sync();
		var_84_object->IsDialogEnd(var_87_bool);
	}
	
Label_441:
	object var_294_object;
	var_78_object = var_294_object;
	func_4314();
	@StopDialog(var_84_object);
	var_84_object->GetReturnValue(-1);
	int var_86_int = var_77_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4980(bool var_337_bool)
{
	int var_339_int;
	func_4550(var_339_int, "k1q02");
	if(var_339_int == 3)
		var_337_bool = true;
	var_337_bool = false;
}


void func_4470(string var_277_string)
{
	bool var_281_bool; float var_282_float; float var_283_float;
	@lshHasAnimation(var_281_bool, var_277_string);
	if(var_281_bool != 0) {
		@lshGetAnimTimes(var_277_string, var_282_float, var_283_float);
		@lshPlayAnimation(var_282_float, var_283_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_277_string);
	}
	
}


void func_1401(object var_0_object, int var_610_int, object var_611_object)
{
	var_0_object = var_611_object;
	bool var_621_bool; object var_622_object;
	var_611_object = var_622_object;
	func_4245(var_621_bool, var_622_object, 70.0);
	if(!var_621_bool) { //@nz
		var_610_int = -2;
		return 8;
	}
	object var_617_object;
	@CreateDialog(var_617_object);
	int var_625_int;
	func_4721(var_625_int);
	var_617_object->SetNPCName(var_625_int);
	int var_626_int;
	func_4719(var_626_int);
	var_617_object->SetNPCDescription(var_626_int);
	string var_627_string;
	func_4723(var_627_string);
	var_617_object->SetPhoto(var_627_string);
	string var_628_string;
	func_4725(var_628_string);
	var_617_object->SetPhoto2(var_628_string);
	int var_629_int;
	func_5364(var_629_int);
	var_617_object->SetPlayerName(var_629_int);
	bool var_618_bool;
	@IsOverrideActive(var_618_bool);
	if(var_618_bool != 0) {
		var_610_int = -2;
		return 8;
	}
	@DoDialog(var_617_object);
	bool var_631_bool; object var_632_object;
	object var_633_object;
	func_4523(var_633_object);
	var_633_object = var_632_object;
	func_4332(var_631_bool, var_632_object);
	object var_634_object; object var_635_object;
	var_611_object = var_634_object;
	var_617_object = var_635_object;
	TaskCall(9);
	func_1482(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object);
	TaskReturn();
	bool var_620_bool;
	var_617_object->IsDialogEnd(var_620_bool);
	
	for(;;) {
		var_670_bool = !var_620_bool; //@nz
		if(var_670_bool == 0) goto Label_1471;
		@sync();
		var_617_object->IsDialogEnd(var_620_bool);
	}
	
Label_1471:
	object var_671_object;
	var_611_object = var_671_object;
	func_4314();
	@StopDialog(var_617_object);
	var_617_object->GetReturnValue(-1);
	int var_619_int = var_610_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4992(bool var_421_bool)
{
	int var_423_int;
	func_4550(var_423_int, "k3q03");
	if(var_423_int == 1000)
		var_421_bool = true;
	var_421_bool = false;
}


void func_4486(string var_255_string, bool var_256_bool)
{
	bool var_262_bool; float var_263_float; float var_264_float;
	@lshHasAnimation(var_262_bool, var_255_string);
	if(var_262_bool != 0) {
		@lshGetAnimTimes(var_255_string, var_263_float, var_264_float);
		@lshPlayAnimation(var_263_float, var_264_float, var_256_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_255_string);
	}
	
}


void func_3976(void)
{
	float var_1084_float;
	@rand(var_1084_float, 8, 16);
	@SetTimer(10, var_1084_float);
}


// @pe
void func_5004(bool var_427_bool)
{
	int var_429_int;
	func_4550(var_429_int, "ook3Maria1");
	if(var_429_int == 0) {
		var_427_bool = true;
		return 0;
	}
	var_427_bool = false;
}


void func_3985(void)
{
	@KillTimer(10);
}


void func_4501(bool var_183_bool, string var_184_string)
{
	bool var_186_bool;
	bool var_187_bool;
	func_4727(var_187_bool);
	if(var_187_bool != 0) {
		@lshHasSpeech(var_186_bool, var_184_string);
		if(var_186_bool != 0) {
			@lshPlaySpeech(var_184_string);
			var_183_bool = true;
		}
	}
	var_183_bool = false;
}


// @pe
void func_5016(bool var_492_bool)
{
	int var_494_int;
	func_4550(var_494_int, "k4q02");
	if(var_494_int == 1)
		var_492_bool = true;
	var_492_bool = false;
}


// @pe
void func_1945(object var_2_object, string var_900_string)
{
	bool var_901_bool;
	func_4727(var_901_bool);
	if(!var_901_bool) //@nz
		return 0;
	if(var_900_string == var_2_object)
		return 0;
	string var_904_string; bool var_905_bool;
	var_900_string = var_904_string;
	if(var_900_string == "")
		var_905_bool = false;
	else
		var_905_bool = true;
	func_4486(var_904_string, var_905_bool);
	var_2_object = var_900_string;
	
}


void func_4516(void)
{
	bool var_59_bool;
	func_4727(var_59_bool);
	if(var_59_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5028(bool var_498_bool)
{
	int var_500_int;
	func_4550(var_500_int, "ook4Maria1");
	if(var_500_int == 0) {
		var_498_bool = true;
		return 0;
	}
	var_498_bool = false;
}


// @pe
void func_2980(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_698_object, object var_699_object)
{
	var_0_object = var_699_object;
	var_1_object = var_698_object;
	var_3_string = false;
	if(1 != 0) {
		func_3089(var_699_object, "Neutral");
		var_0_object->SetMessage(539828); //@t
		var_0_object->ClearReplies(); //@t
		bool var_714_bool = false;
		bool var_715_bool = false;
		bool var_716_bool;
		func_5076(var_716_bool, var_1_object);
		if(var_716_bool != 0) {
			bool var_726_bool;
			func_5086(var_726_bool, var_1_object);
			if(var_726_bool != 0)
				var_715_bool = true;
		}
		if(var_715_bool != 0) {
			bool var_740_bool;
			func_5106(var_1_object);
			if(var_740_bool != 0)
				var_714_bool = true;
		}
		if(var_714_bool != 0)
			var_0_object->AddReply(539829, 41782, 41781); //@t
		bool var_749_bool = false;
		bool var_750_bool = false;
		bool var_751_bool;
		func_5076(var_751_bool, var_1_object);
		if(var_751_bool != 0) {
			bool var_753_bool;
			func_5096(var_753_bool, var_1_object);
			if(var_753_bool != 0)
				var_750_bool = true;
		}
		if(var_750_bool != 0) {
			bool var_760_bool;
			func_5118(var_1_object);
			if(var_760_bool != 0)
				var_749_bool = true;
		}
		if(var_749_bool != 0)
			var_0_object->AddReply(539832, 41785, 41784); //@t
		var_0_object->AddReply(539838, -1, 41790); //@t
		goto Label_3059;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xba8";
	}
Label_3059:
	bool var_772_bool;
	func_4727(var_772_bool);
	if(var_772_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3088;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3088:
		return 0;

	}
	
}


void func_4523(object var_151_object)
{
	object var_153_object;
	@self(var_153_object);
	var_153_object = var_151_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5040(bool var_650_bool)
{
	int var_652_int;
	func_4550(var_652_int, "k7q01");
	if(var_652_int == 6)
		var_650_bool = true;
	var_650_bool = false;
}


void func_4529(cvector var_115_cvector, cvector var_116_cvector)
{
	float var_119_float = sqrt(var_116_cvector | var_116_cvector);
	if(var_119_float < 0.000001)
		var_115_cvector = [0.0, 0.0, 0.0];
	var_115_cvector = var_116_cvector / var_119_float;
}


void func_2481(object var_0_object, int var_543_int, object var_544_object)
{
	var_0_object = var_544_object;
	bool var_554_bool; object var_555_object;
	var_544_object = var_555_object;
	func_4245(var_554_bool, var_555_object, 70.0);
	if(!var_554_bool) { //@nz
		var_543_int = -2;
		return 8;
	}
	object var_550_object;
	@CreateDialog(var_550_object);
	int var_558_int;
	func_4721(var_558_int);
	var_550_object->SetNPCName(var_558_int);
	int var_559_int;
	func_4719(var_559_int);
	var_550_object->SetNPCDescription(var_559_int);
	string var_560_string;
	func_4723(var_560_string);
	var_550_object->SetPhoto(var_560_string);
	string var_561_string;
	func_4725(var_561_string);
	var_550_object->SetPhoto2(var_561_string);
	int var_562_int;
	func_5364(var_562_int);
	var_550_object->SetPlayerName(var_562_int);
	bool var_551_bool;
	@IsOverrideActive(var_551_bool);
	if(var_551_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	@DoDialog(var_550_object);
	bool var_564_bool; object var_565_object;
	object var_566_object;
	func_4523(var_566_object);
	var_566_object = var_565_object;
	func_4332(var_564_bool, var_565_object);
	object var_567_object; object var_568_object;
	var_544_object = var_567_object;
	var_550_object = var_568_object;
	TaskCall(15);
	func_2562(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	bool var_553_bool;
	var_550_object->IsDialogEnd(var_553_bool);
	
	for(;;) {
		var_606_bool = !var_553_bool; //@nz
		if(var_606_bool == 0) goto Label_2551;
		@sync();
		var_550_object->IsDialogEnd(var_553_bool);
	}
	
Label_2551:
	object var_607_object;
	var_544_object = var_607_object;
	func_4314();
	@StopDialog(var_550_object);
	var_550_object->GetReturnValue(-1);
	int var_552_int = var_543_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3515(object var_2_object, string var_815_string)
{
	bool var_816_bool;
	func_4727(var_816_bool);
	if(!var_816_bool) //@nz
		return 0;
	if(var_815_string == var_2_object)
		return 0;
	string var_819_string; bool var_820_bool;
	var_815_string = var_819_string;
	if(var_815_string == "")
		var_820_bool = false;
	else
		var_820_bool = true;
	func_4486(var_819_string, var_820_bool);
	var_2_object = var_815_string;
	
}


// @pe
void func_5052(bool var_909_bool)
{
	int var_911_int;
	func_4550(var_911_int, "k10q01");
	if(var_911_int == 1)
		var_909_bool = true;
	var_909_bool = false;
}


// @pe
void func_4539(float var_195_float, float var_196_float, float var_197_float, float var_198_float)
{
	if(var_196_float < var_197_float) {
		var_197_float = var_195_float;
		return 0;
	}
	if(var_196_float > var_198_float) {
		var_198_float = var_195_float;
		return 0;
	}
	var_196_float = var_195_float;
}


// @pe
void func_452(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_244_object, object var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if(1 != 0) {
		func_510(var_245_object, "Neutral");
		var_0_object->SetMessage(525501); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525502, 27545, 26858); //@t
		var_0_object->AddReply(526269, 27545, 27544); //@t
		goto Label_480;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c8";
	}
Label_480:
	bool var_275_bool;
	func_4727(var_275_bool);
	if(var_275_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_509;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_509:
		return 0;

	}
	
}


void func_4550(int var_339_int, string var_340_string)
{
	int var_342_int;
	@GetVariable(var_340_string, var_342_int);
	var_342_int = var_339_int;
}


// @pe
void func_5064(bool var_583_bool)
{
	int var_585_int;
	func_4550(var_585_int, "k5q04");
	if(var_585_int == 1)
		var_583_bool = true;
	var_583_bool = false;
}


// @pe
void func_1482(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_634_object, object var_635_object)
{
	var_0_object = var_635_object;
	var_3_string = false;
	if(1 != 0) {
		func_1545(var_635_object, "Neutral");
		var_0_object->SetMessage(526192); //@t
		var_0_object->ClearReplies(); //@t
		bool var_650_bool;
		func_5040(var_634_object);
		if(var_650_bool != 0)
			var_0_object->AddReply(526193, 30159, 27474); //@t
		var_0_object->AddReply(526196, -1, 27477); //@t
		goto Label_1515;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5ce";
	}
Label_1515:
	bool var_662_bool;
	func_4727(var_662_bool);
	if(var_662_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4470(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1544;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1544:
		return 0;

	}
	
}


void func_4555(int var_118_int, int var_119_int)
{
	object var_121_object;
	@CreateIntVector(var_121_object);
	var_121_object->add(var_118_int);
	var_121_object->add(var_119_int);
	@SendWorldWndMessage(3, var_121_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5076(bool var_716_bool, object var_717_object)
{
	object var_719_object;
	var_717_object = var_719_object;
	func_5190(var_719_object);
	bool var_718_bool;
	if(var_718_bool != 0) {
		var_716_bool = true;
		return 0;
	}
	var_716_bool = false;
}


void func_4567(object var_104_object, int var_105_int)
{
	int var_108_int;
	object var_109_object;
	var_104_object = var_109_object;
	int var_111_int;
	func_4214(var_109_object, "money", var_111_int);
	if(var_111_int > 0) {
		@GetInvItemByName(var_108_int, "Money");
		int var_118_int; int var_119_int;
		var_108_int = var_118_int;
		var_105_int = var_119_int;
		func_4555(var_118_int, var_119_int);
	}
}


// @pe
void func_5086(bool var_726_bool, object var_727_object)
{
	object var_729_object;
	var_727_object = var_729_object;
	func_5196(var_729_object);
	bool var_728_bool;
	if(var_728_bool != 0) {
		var_726_bool = true;
		return 0;
	}
	var_726_bool = false;
}


// @pe
void func_5096(bool var_753_bool, object var_754_object)
{
	object var_756_object;
	var_754_object = var_756_object;
	func_5202(var_756_object);
	bool var_755_bool;
	if(var_755_bool != 0) {
		var_753_bool = true;
		return 0;
	}
	var_753_bool = false;
}


void func_4586(object var_135_object, object var_136_object, int var_137_int)
{
	int var_141_int;
	var_136_object->GetItemID(var_141_int);
	int var_142_int;
	@GetInvItemProperty(var_142_int, var_141_int, "Category");
	bool var_143_bool;
	var_135_object->AddItem(var_143_bool, var_136_object, var_142_int, var_137_int);
	if(!var_143_bool) { //@nz
		var_135_object->DropItems(var_136_object, var_137_int);
	} else {
		int var_146_int; int var_147_int;
		var_141_int = var_146_int;
		var_137_int = var_147_int;
		func_4555(var_146_int, var_147_int);
	}
	
}


// @pe
void func_5106(bool var_740_bool)
{
	int var_742_int;
	func_4550(var_742_int, "ook8Maria1");
	if(var_742_int == 0) {
		var_740_bool = true;
		return 0;
	}
	var_740_bool = false;
}


void func_4605(object var_130_object, string var_131_string, int var_132_int)
{
	object var_134_object;
	@CreateInvItem(var_134_object);
	var_134_object->SetItemName(var_131_string);
	object var_135_object; object var_136_object; int var_137_int;
	var_130_object = var_135_object;
	var_134_object = var_136_object;
	var_132_int = var_137_int;
	func_4586(var_135_object, var_136_object, var_137_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_510(object var_2_object, string var_251_string)
{
	bool var_252_bool;
	func_4727(var_252_bool);
	if(!var_252_bool) //@nz
		return 0;
	if(var_251_string == var_2_object)
		return 0;
	string var_255_string; bool var_256_bool;
	var_251_string = var_255_string;
	if(var_251_string == "")
		var_256_bool = false;
	else
		var_256_bool = true;
	func_4486(var_255_string, var_256_bool);
	var_2_object = var_251_string;
	
}


