// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 26084) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4700();
			}
			if(var_56_bool == 26083) {
				bool var_91_bool;
				func_4918(var_1_object);
				if(var_91_bool != 0) {
					func_172(var_57_cvector, "Neutral");
					var_0_object->SetMessage(524759); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526896, 28184, 28183); //@t
					var_0_object->AddReply(526903, 28184, 28191); //@t
					return 0;
				}
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(524761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526893, -1, 28180); //@t
				return 0;
			}
			if(var_56_bool == 28184) {
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526894, 28185, 28181); //@t
				var_0_object->AddReply(526904, 28194, 28193); //@t
				return 0;
			}
			if(var_56_bool == 28194) {
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526906, 28185, 28195); //@t
				var_0_object->AddReply(526907, 28187, 28197); //@t
				return 0;
			}
			if(var_56_bool == 28185) {
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526899, 28187, 28186); //@t
				var_0_object->AddReply(526908, 28182, 28199); //@t
				return 0;
			}
			if(var_56_bool == 28187) {
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526901, 28182, 28188); //@t
				var_0_object->AddReply(526902, 28182, 28189); //@t
				return 0;
			}
			if(var_56_bool == 28182) {
				func_172(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524760, -1, 26084); //@t
				return 0;
			}
			var_3_string = true;
			bool var_170_bool;
			func_4665(var_170_bool);
			if(var_170_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc3";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_56_bool == 26857) {
				func_513(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525501); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525502, 27545, 26858); //@t
				var_0_object->AddReply(526269, 27545, 27544); //@t
				return 0;
			}
			if(var_56_bool == 27545) {
				func_513(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526271, -1, 27546); //@t
				var_0_object->AddReply(526272, -1, 27547); //@t
				return 0;
			}
			var_3_string = true;
			bool var_91_bool;
			func_4665(var_91_bool);
			if(var_91_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x218";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 26955) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4709();
			}
			if(var_57_cvector == 26959) {
				object var_68_object = var_1_object;
				func_4871(var_0_object);
			}
			if(var_57_cvector == 42741) {
				object var_110_object = var_1_object;
				func_4871(var_0_object);
			}
			if(var_57_cvector == 42736) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_4858();
			}
			if(var_57_cvector == 42745) {
				object var_120_object = var_1_object;
				func_4864(var_0_object);
			}
			if(var_57_cvector == 42746) {
				object var_127_object = var_1_object;
				func_4864(var_0_object);
			}
			if(var_56_bool == 26954) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525607); //@t
				var_0_object->ClearReplies(); //@t
				bool var_144_bool = false;
				bool var_145_bool;
				func_4930(var_1_object);
				if(var_145_bool != 0) {
					bool var_153_bool;
					func_4942(var_1_object);
					if(var_153_bool != 0)
						var_144_bool = true;
				}
				if(var_144_bool != 0)
					var_0_object->AddReply(525608, 26956, 26955); //@t
				bool var_162_bool;
				func_5116(var_1_object);
				if(var_162_bool != 0)
					var_0_object->AddReply(540700, 42737, 42736); //@t
				var_0_object->AddReply(525613, -1, 26960); //@t
				return 0;
			}
			if(var_56_bool == 42737) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540702, 42740, 42738); //@t
				var_0_object->AddReply(540703, -1, 42739); //@t
				return 0;
			}
			if(var_56_bool == 42740) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540704); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540706, 42744, 42742); //@t
				var_0_object->AddReply(540707, -1, 42743); //@t
				return 0;
			}
			if(var_56_bool == 42744) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540708); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540709, -1, 42745); //@t
				var_0_object->AddReply(540710, -1, 42746); //@t
				return 0;
			}
			if(var_56_bool == 26956) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525610, 26958, 26957); //@t
				var_0_object->AddReply(540705, -1, 42741); //@t
				return 0;
			}
			if(var_56_bool == 26958) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529340, 30796, 30795); //@t
				return 0;
			}
			if(var_56_bool == 30796) {
				func_763(var_57_cvector, "Neutral");
				var_0_object->SetMessage(529341); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525612, -1, 26959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_228_bool;
			func_4665(var_228_bool);
			if(var_228_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x312";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 27069) {
				object var_62_object = var_1_object;
				func_4864(var_0_object);
			}
			if(var_57_cvector == 27070) {
				object var_104_object = var_1_object;
				func_4878(var_0_object);
			}
			if(var_57_cvector == 42750) {
				object var_111_object = var_1_object;
				func_4878(var_0_object);
			}
			if(var_57_cvector == 42753) {
				object var_115_object = var_1_object;
				func_4871(var_0_object);
			}
			if(var_56_bool == 27068) {
				bool var_122_bool = false;
				bool var_123_bool;
				func_4954(var_1_object);
				if(var_123_bool != 0) {
					bool var_131_bool;
					func_4966(var_1_object);
					if(var_131_bool != 0)
						var_122_bool = true;
				}
				if(var_122_bool != 0) {
					object var_137_object; object var_138_object;
					var_137_object = var_1_object;
					var_138_object = var_0_object;
					func_4715();
					func_1205(var_57_cvector, "Neutral");
					var_0_object->SetMessage(525756); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540712, 42749, 42748); //@t
					var_0_object->AddReply(540717, -1, 42753); //@t
					return 0;
				}
				func_1205(var_57_cvector, "Neutral");
				var_0_object->SetMessage(525759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525760, -1, 27072); //@t
				var_0_object->AddReply(540711, -1, 42747); //@t
				return 0;
			}
			if(var_56_bool == 42749) {
				func_1205(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540713); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529233, 30688, 30687); //@t
				var_0_object->AddReply(540714, -1, 42750); //@t
				return 0;
			}
			if(var_56_bool == 30688) {
				func_1205(var_57_cvector, "Neutral");
				var_0_object->SetMessage(529234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540715, 42752, 42751); //@t
				return 0;
			}
			if(var_56_bool == 42752) {
				func_1205(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525757, -1, 27069); //@t
				var_0_object->AddReply(525758, -1, 27070); //@t
				return 0;
			}
			var_3_string = true;
			bool var_195_bool;
			func_4665(var_195_bool);
			if(var_195_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4cc";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 27476) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4721();
			}
			if(var_56_bool == 27473) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526192); //@t
				var_0_object->ClearReplies(); //@t
				bool var_104_bool;
				func_4978(var_1_object);
				if(var_104_bool != 0)
					var_0_object->AddReply(526193, 30159, 27474); //@t
				var_0_object->AddReply(526196, -1, 27477); //@t
				return 0;
			}
			if(var_56_bool == 30159) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528736, 30161, 30160); //@t
				var_0_object->AddReply(528745, 30163, 30169); //@t
				return 0;
			}
			if(var_56_bool == 30161) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528738, 30163, 30162); //@t
				return 0;
			}
			if(var_56_bool == 30163) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528740, 30165, 30164); //@t
				return 0;
			}
			if(var_56_bool == 30165) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528742, 30167, 30166); //@t
				return 0;
			}
			if(var_56_bool == 30167) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528744, 27475, 30168); //@t
				var_0_object->AddReply(528746, 27475, 30171); //@t
				return 0;
			}
			if(var_56_bool == 27475) {
				func_1548(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526195, -1, 27476); //@t
				return 0;
			}
			var_3_string = true;
			bool var_166_bool;
			func_4665(var_166_bool);
			if(var_166_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x623";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 28242) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4730();
			}
			if(var_57_cvector == 41804) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_4813();
			}
			if(var_57_cvector == 41807) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_4819();
			}
			if(var_57_cvector == 41809) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_4784();
				object var_119_object = var_1_object;
				func_4847(var_0_object);
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4744();
				object var_147_object = var_1_object;
				func_4750(var_0_object);
			}
			if(var_56_bool == 28239) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526947); //@t
				var_0_object->ClearReplies(); //@t
				bool var_183_bool;
				func_4990(var_1_object);
				if(var_183_bool != 0)
					var_0_object->AddReply(526948, 28241, 28240); //@t
				bool var_194_bool = false;
				bool var_195_bool = false;
				bool var_196_bool;
				func_5014(var_196_bool, var_1_object);
				if(var_196_bool != 0) {
					bool var_211_bool;
					func_5024(var_211_bool, var_1_object);
					if(var_211_bool != 0)
						var_195_bool = true;
				}
				if(var_195_bool != 0) {
					bool var_225_bool;
					func_5092(var_1_object);
					if(var_225_bool != 0)
						var_194_bool = true;
				}
				if(var_194_bool != 0)
					var_0_object->AddReply(539852, 41805, 41804); //@t
				bool var_234_bool = false;
				bool var_235_bool = false;
				bool var_236_bool;
				func_5014(var_236_bool, var_1_object);
				if(var_236_bool != 0) {
					bool var_238_bool;
					func_5034(var_238_bool, var_1_object);
					if(var_238_bool != 0)
						var_235_bool = true;
				}
				if(var_235_bool != 0) {
					bool var_245_bool;
					func_5104(var_1_object);
					if(var_245_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 0)
					var_0_object->AddReply(539855, 41808, 41807); //@t
				var_0_object->AddReply(526951, -1, 28243); //@t
				var_0_object->AddReply(528006, -1, 29366); //@t
				return 0;
			}
			if(var_56_bool == 41808) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539857, -1, 41809); //@t
				return 0;
			}
			if(var_56_bool == 41805) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539854, -1, 41806); //@t
				return 0;
			}
			if(var_56_bool == 28241) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(526949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528007, 29368, 29367); //@t
				var_0_object->AddReply(528011, 29368, 29371); //@t
				return 0;
			}
			if(var_56_bool == 29368) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528009, 29370, 29369); //@t
				var_0_object->AddReply(528012, 29370, 29373); //@t
				return 0;
			}
			if(var_56_bool == 29370) {
				func_1948(var_57_cvector, "Neutral");
				var_0_object->SetMessage(528010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526950, -1, 28242); //@t
				return 0;
			}
			var_3_string = true;
			bool var_301_bool;
			func_4665(var_301_bool);
			if(var_301_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7b3";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_56_bool == 36906) {
				func_2369(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_56_bool == 36953) {
				func_2369(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_56_bool == 36957) {
				func_2369(var_57_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_104_bool;
			func_4665(var_104_bool);
			if(var_104_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x958";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 41363) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4761();
				object var_105_object = var_1_object;
				func_4667(var_0_object);
			}
			if(var_57_cvector == 42772) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_4761();
				object var_135_object = var_1_object;
				func_4667(var_0_object);
				object var_137_object = var_1_object;
				func_4683(var_0_object);
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_4744();
			}
			if(var_57_cvector == 42754) {
				object var_164_object = var_1_object;
				func_4693(var_0_object);
			}
			if(var_56_bool == 41356) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539425); //@t
				var_0_object->ClearReplies(); //@t
				bool var_219_bool;
				func_5002(var_1_object);
				if(var_219_bool != 0)
					var_0_object->AddReply(539426, 42755, 41357); //@t
				var_0_object->AddReply(539433, -1, 41364); //@t
				var_0_object->AddReply(540718, -1, 42754); //@t
				return 0;
			}
			if(var_56_bool == 42755) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540719); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540720, 41358, 42756); //@t
				var_0_object->AddReply(540723, 42760, 42759); //@t
				return 0;
			}
			if(var_56_bool == 42760) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540725, -1, 42761); //@t
				var_0_object->AddReply(540726, 42763, 42762); //@t
				return 0;
			}
			if(var_56_bool == 42763) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540728, 41360, 42764); //@t
				var_0_object->AddReply(540729, -1, 42765); //@t
				return 0;
			}
			if(var_56_bool == 41358) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539428, 41360, 41359); //@t
				return 0;
			}
			if(var_56_bool == 41360) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539430, 41362, 41361); //@t
				var_0_object->AddReply(540730, 41362, 42767); //@t
				return 0;
			}
			if(var_56_bool == 41362) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539432, -1, 41363); //@t
				var_0_object->AddReply(540731, 42771, 42768); //@t
				return 0;
			}
			if(var_56_bool == 42771) {
				func_2633(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540734); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540735, -1, 42772); //@t
				return 0;
			}
			var_3_string = true;
			bool var_300_bool;
			func_4665(var_300_bool);
			if(var_300_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa60";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 41781) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4789();
			}
			if(var_57_cvector == 41784) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4795();
			}
			if(var_57_cvector == 41786) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4784();
				object var_99_object = var_1_object;
				func_4825(var_0_object);
				object var_123_object = var_1_object;
				func_4885(var_0_object);
			}
			if(var_56_bool == 41780) {
				func_3092(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539828); //@t
				var_0_object->ClearReplies(); //@t
				bool var_159_bool = false;
				bool var_160_bool = false;
				bool var_161_bool;
				func_5014(var_161_bool, var_1_object);
				if(var_161_bool != 0) {
					bool var_176_bool;
					func_5024(var_176_bool, var_1_object);
					if(var_176_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0) {
					bool var_190_bool;
					func_5044(var_1_object);
					if(var_190_bool != 0)
						var_159_bool = true;
				}
				if(var_159_bool != 0)
					var_0_object->AddReply(539829, 41782, 41781); //@t
				bool var_201_bool = false;
				bool var_202_bool = false;
				bool var_203_bool;
				func_5014(var_203_bool, var_1_object);
				if(var_203_bool != 0) {
					bool var_205_bool;
					func_5034(var_205_bool, var_1_object);
					if(var_205_bool != 0)
						var_202_bool = true;
				}
				if(var_202_bool != 0) {
					bool var_212_bool;
					func_5056(var_1_object);
					if(var_212_bool != 0)
						var_201_bool = true;
				}
				if(var_201_bool != 0)
					var_0_object->AddReply(539832, 41785, 41784); //@t
				var_0_object->AddReply(539838, -1, 41790); //@t
				return 0;
			}
			if(var_56_bool == 41785) {
				func_3092(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539834, -1, 41786); //@t
				return 0;
			}
			if(var_56_bool == 41782) {
				func_3092(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539831, -1, 41783); //@t
				return 0;
			}
			var_3_string = true;
			bool var_238_bool;
			func_4665(var_238_bool);
			if(var_238_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2b";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_57_cvector == 41793) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4801();
			}
			if(var_57_cvector == 41796) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4807();
			}
			if(var_57_cvector == 41798) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4784();
				object var_99_object = var_1_object;
				func_4836(var_0_object);
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_4744();
				object var_127_object = var_1_object;
				func_4896(var_0_object);
				object var_148_object = var_1_object;
				func_4907(var_0_object);
			}
			if(var_56_bool == 41792) {
				func_3467(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539840); //@t
				var_0_object->ClearReplies(); //@t
				bool var_169_bool = false;
				bool var_170_bool = false;
				bool var_171_bool;
				func_5014(var_171_bool, var_1_object);
				if(var_171_bool != 0) {
					bool var_186_bool;
					func_5024(var_186_bool, var_1_object);
					if(var_186_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					bool var_200_bool;
					func_5068(var_1_object);
					if(var_200_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0)
					var_0_object->AddReply(539841, 41794, 41793); //@t
				bool var_211_bool = false;
				bool var_212_bool = false;
				bool var_213_bool;
				func_5014(var_213_bool, var_1_object);
				if(var_213_bool != 0) {
					bool var_215_bool;
					func_5034(var_215_bool, var_1_object);
					if(var_215_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0) {
					bool var_222_bool;
					func_5080(var_1_object);
					if(var_222_bool != 0)
						var_211_bool = true;
				}
				if(var_211_bool != 0)
					var_0_object->AddReply(539844, 41797, 41796); //@t
				var_0_object->AddReply(539850, -1, 41802); //@t
				return 0;
			}
			if(var_56_bool == 41797) {
				func_3467(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539846, -1, 41798); //@t
				return 0;
			}
			if(var_56_bool == 41794) {
				func_3467(var_57_cvector, "Neutral");
				var_0_object->SetMessage(539842); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539843, -1, 41795); //@t
				return 0;
			}
			var_3_string = true;
			bool var_248_bool;
			func_4665(var_248_bool);
			if(var_248_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xda2";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, cvector var_57_cvector)
	{
		if(1 != 0) {
			func_4454();
			if(var_56_int == 42548) {
				func_3801(var_57_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_4665(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xef0";
	
	}

}


maintask task_23
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		var_56_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_3872(var_55_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, int var_56_int)
	{
		if(var_56_int == 10) {
			func_3943();
			bool var_60_bool = false;
			bool var_61_bool;
			func_4198(var_61_bool);
			if(var_61_bool != 0) {
				bool var_64_bool;
				func_3912(var_64_bool);
				if(var_64_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool != 0) {
				bool var_81_bool;
				func_3892(var_81_bool);
				if(var_81_bool != 0) {
					bool var_100_bool; object var_101_object;
					object var_102_object;
					func_4461(var_102_object);
					var_102_object = var_101_object;
					func_4346(var_100_bool, var_101_object);
				}
			} else {
				func_3907(var_56_int);
				func_3934();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
	{
		func_4125();
		func_3943();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector)
		{
		@StopGroup0();
		func_3943();
		func_4426("Neutral");
		func_3934();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, bool var_56_bool)
	{
		if(var_56_bool != 0)
			func_3934();
		else
			func_4426("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, cvector var_55_cvector, object var_56_object)
	{
		bool var_58_bool;
		@IsOverrideActive(var_58_bool);
		if(!var_58_bool) { //@nz
			disable OnUse;
			func_4125();
			bool var_60_bool; object var_61_object;
			var_56_object = var_61_object;
			func_4189(var_60_bool, var_61_object);
			enable OnUse;
			object var_74_object;
			var_56_object = var_74_object;
			func_5356(var_74_object);
			func_4426("Neutral");
			func_3943();
			func_3934();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_61_bool;
	func_4198(var_61_bool);
	if(!var_61_bool) goto Label_0; //@nz
}


// @pe
void func_513(object var_2_object, string var_250_string)
{
	bool var_251_bool;
	func_4665(var_251_bool);
	if(!var_251_bool) //@nz
		return 0;
	if(var_250_string == var_2_object)
		return 0;
	string var_254_string; bool var_255_bool;
	var_250_string = var_254_string;
	if(var_250_string == "")
		var_255_bool = false;
	else
		var_255_bool = true;
	func_4433(var_254_string, var_255_bool);
	var_2_object = var_250_string;
	
}


void func_1027(object var_0_object, int var_445_int, object var_446_object)
{
	var_0_object = var_446_object;
	bool var_456_bool; object var_457_object;
	object var_458_object;
	func_4461(var_458_object);
	var_458_object = var_457_object;
	func_4288(var_456_bool, var_457_object);
	bool var_459_bool; object var_460_object;
	var_446_object = var_460_object;
	func_4203(var_459_bool, var_460_object, 70.0);
	if(!var_459_bool) { //@nz
		var_445_int = -2;
		return 8;
	}
	object var_452_object;
	@CreateDialog(var_452_object);
	int var_463_int;
	func_4659(var_463_int);
	var_452_object->SetNPCName(var_463_int);
	int var_464_int;
	func_4657(var_464_int);
	var_452_object->SetNPCDescription(var_464_int);
	string var_465_string;
	func_4661(var_465_string);
	var_452_object->SetPhoto(var_465_string);
	string var_466_string;
	func_4663(var_466_string);
	var_452_object->SetPhoto2(var_466_string);
	int var_467_int;
	func_5302(var_467_int);
	var_452_object->SetPlayerName(var_467_int);
	bool var_453_bool;
	@IsOverrideActive(var_453_bool);
	if(var_453_bool != 0) {
		var_445_int = -2;
		return 8;
	}
	@DoDialog(var_452_object);
	object var_469_object; object var_470_object;
	var_446_object = var_469_object;
	var_452_object = var_470_object;
	TaskCall(8);
	func_1108(var_471_object, var_472_object, var_473_string, var_474_bool, var_469_object, var_470_object);
	TaskReturn();
	bool var_455_bool;
	var_452_object->IsDialogEnd(var_455_bool);
	
	for(;;) {
		var_524_bool = !var_455_bool; //@nz
		if(var_524_bool == 0) goto Label_1097;
		@sync();
		var_452_object->IsDialogEnd(var_455_bool);
	}
	
Label_1097:
	object var_525_object;
	var_446_object = var_525_object;
	func_4271();
	@StopDialog(var_452_object);
	var_452_object->GetReturnValue(-1);
	int var_454_int = var_445_int;
}
EMIT "Stack[-4] = 0";


void func_4613(float var_79_float)
{
	float var_81_float;
	@GetGameTime(var_81_float);
	var_81_float = var_79_float;
}


// @pe
void func_2565(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_552_object, object var_553_object)
{
	var_0_object = var_553_object;
	var_3_string = false;
	if(1 != 0) {
		func_2633(var_553_object, "Neutral");
		var_0_object->SetMessage(539425); //@t
		var_0_object->ClearReplies(); //@t
		bool var_568_bool;
		func_5002(var_552_object);
		if(var_568_bool != 0)
			var_0_object->AddReply(539426, 42755, 41357); //@t
		var_0_object->AddReply(539433, -1, 41364); //@t
		var_0_object->AddReply(540718, -1, 42754); //@t
		goto Label_2603;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa09";
	}
Label_2603:
	bool var_583_bool;
	func_4665(var_583_bool);
	if(var_583_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2632;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2632:
		return 0;

	}
	
}


// @pe
void func_5128(bool var_703_bool)
{
	bool var_705_bool;
	func_5336(var_705_bool);
	var_705_bool = var_703_bool;
}


void func_4618(int var_143_int)
{
	float var_145_float;
	@GetGameTime(var_145_float);
	var_143_int = 1 + (var_145_float / 24);
}


// @pe
void func_1548(object var_2_object, string var_626_string)
{
	bool var_627_bool;
	func_4665(var_627_bool);
	if(!var_627_bool) //@nz
		return 0;
	if(var_626_string == var_2_object)
		return 0;
	string var_630_string; bool var_631_bool;
	var_626_string = var_630_string;
	if(var_626_string == "")
		var_631_bool = false;
	else
		var_631_bool = true;
	func_4433(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	
}


void func_13(object var_0_object, int var_294_int, object var_295_object)
{
	var_0_object = var_295_object;
	bool var_305_bool; object var_306_object;
	object var_307_object;
	func_4461(var_307_object);
	var_307_object = var_306_object;
	func_4288(var_305_bool, var_306_object);
	bool var_308_bool; object var_309_object;
	var_295_object = var_309_object;
	func_4203(var_308_bool, var_309_object, 70.0);
	if(!var_308_bool) { //@nz
		var_294_int = -2;
		return 8;
	}
	object var_301_object;
	@CreateDialog(var_301_object);
	int var_312_int;
	func_4659(var_312_int);
	var_301_object->SetNPCName(var_312_int);
	int var_313_int;
	func_4657(var_313_int);
	var_301_object->SetNPCDescription(var_313_int);
	string var_314_string;
	func_4661(var_314_string);
	var_301_object->SetPhoto(var_314_string);
	string var_315_string;
	func_4663(var_315_string);
	var_301_object->SetPhoto2(var_315_string);
	int var_316_int;
	func_5302(var_316_int);
	var_301_object->SetPlayerName(var_316_int);
	bool var_302_bool;
	@IsOverrideActive(var_302_bool);
	if(var_302_bool != 0) {
		var_294_int = -2;
		return 8;
	}
	@DoDialog(var_301_object);
	object var_318_object; object var_319_object;
	var_295_object = var_318_object;
	var_301_object = var_319_object;
	TaskCall(2);
	func_94(var_320_object, var_321_object, var_322_string, var_323_bool, var_318_object, var_319_object);
	TaskReturn();
	bool var_304_bool;
	var_301_object->IsDialogEnd(var_304_bool);
	
	for(;;) {
		var_361_bool = !var_304_bool; //@nz
		if(var_361_bool == 0) goto Label_83;
		@sync();
		var_301_object->IsDialogEnd(var_304_bool);
	}
	
Label_83:
	object var_362_object;
	var_295_object = var_362_object;
	func_4271();
	@StopDialog(var_301_object);
	var_301_object->GetReturnValue(-1);
	int var_303_int = var_294_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5134(bool var_713_bool)
{
	bool var_715_bool;
	func_5350(var_715_bool);
	var_715_bool = var_713_bool;
}


// @pe
void func_4627(bool var_291_bool, int var_292_int)
{
	int var_293_int;
	func_4618(var_293_int);
	var_291_bool = var_293_int == var_292_int;
}


// @pe
void func_3092(object var_2_object, string var_690_string)
{
	bool var_691_bool;
	func_4665(var_691_bool);
	if(!var_691_bool) //@nz
		return 0;
	if(var_690_string == var_2_object)
		return 0;
	string var_694_string; bool var_695_bool;
	var_690_string = var_694_string;
	if(var_690_string == "")
		var_695_bool = false;
	else
		var_695_bool = true;
	func_4433(var_694_string, var_695_bool);
	var_2_object = var_690_string;
	
}


// @pe
void func_5140(bool var_740_bool)
{
	bool var_742_bool;
	func_5344(var_742_bool);
	var_742_bool = var_740_bool;
}


void func_4633(string var_95_string, int var_96_int)
{
	string var_98_string = "idle";
	if(var_96_int != 0)
		var_98_string += var_96_int;
	var_98_string = var_95_string;
}


void func_5146(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 449, 1, 527007);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5224(var_71_bool, var_72_object, 447);
}
EMIT "Stack[-1] = 0";


void func_4123(bool var_109_bool)
{
	var_109_bool = true;
}


void func_4125(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4640(int var_89_int)
{
	int var_92_int; bool var_93_bool;
	var_92_int = 0;
	
	for(;;) {
		string var_95_string; int var_96_int;
		var_92_int = var_96_int;
		func_4633(var_95_string, var_96_int);
		@HasAnimation(var_93_bool, "all", var_95_string);
		if(!var_93_bool) //@nz
			break;
		var_92_int += 1;
	}
	var_92_int = var_89_int;
}


void func_4130(float var_71_float, object var_72_object)
{
	cvector var_76_cvector;
	@GetPosition(var_76_cvector);
	cvector var_77_cvector;
	var_72_object->GetPosition(var_77_cvector);
	var_71_float = (var_77_cvector - var_76_cvector) | (var_77_cvector - var_76_cvector);
}


void func_5159(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 330, 2, 524775);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5224(var_71_bool, var_72_object, 326);
}
EMIT "Stack[-1] = 0";


void func_4138(bool var_185_bool, object var_186_object, string var_187_string)
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


void func_4657(int var_231_int)
{
	var_231_int = 515543;
}


void func_4659(int var_230_int)
{
	var_230_int = 502868;
}


void func_5172(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 762, 2, 539747);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_5224(var_81_bool, var_82_object, 757);
}
EMIT "Stack[-1] = 0";


void func_4661(string var_232_string)
{
	var_232_string = "ui/NPC_Maria.png";
}


void func_4150(bool var_177_bool, object var_178_object, string var_179_string, float var_180_float, float var_181_float, float var_182_float)
{
	object var_186_object;
	var_178_object = var_186_object;
	string var_187_string;
	var_179_string = var_187_string;
	bool var_185_bool;
	func_4138(var_185_bool, var_186_object, var_187_string);
	if(!var_185_bool) //@nz
		var_177_bool = false;
	float var_184_float;
	var_178_object->GetProperty(var_179_string, var_184_float);
	float var_195_float; float var_197_float; float var_198_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_4477(var_195_float, (var_184_float + var_180_float), var_197_float, var_198_float);
	var_178_object->SetProperty(var_179_string, var_195_float);
	var_177_bool = true;
}


void func_4663(string var_233_string)
{
	var_233_string = "ui/NPC_Maria_b.png";
}


void func_4665(bool var_126_bool)
{
	var_126_bool = true;
}


// @pe
void func_4667(object var_106_object)
{
	object var_110_object;
	func_5252(var_110_object);
	object var_107_object;
	var_110_object = var_107_object;
	func_5269(var_107_object, "pt_map_eva", (float)2);
	object var_130_object;
	func_5252(var_130_object);
	var_106_object->ShowMap(var_130_object);
}


void func_5185(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 742, 2, 539459);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_5224(var_87_bool, var_88_object, 740);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2633(object var_2_object, string var_559_string)
{
	bool var_560_bool;
	func_4665(var_560_bool);
	if(!var_560_bool) //@nz
		return 0;
	if(var_559_string == var_2_object)
		return 0;
	string var_563_string; bool var_564_bool;
	var_559_string = var_563_string;
	if(var_559_string == "")
		var_564_bool = false;
	else
		var_564_bool = true;
	func_4433(var_563_string, var_564_bool);
	var_2_object = var_559_string;
	
}


// @pe
void func_4683(object var_137_object)
{
	@Trace("money 4000 is given");
	object var_140_object;
	var_137_object = var_140_object;
	func_4505(var_140_object, 4000);
}


void func_4172(object var_109_object, string var_110_string, int var_111_int)
{
	int var_113_int;
	var_109_object->GetProperty(var_110_string, var_113_int);
	var_109_object->SetProperty(var_110_string, (var_113_int + var_111_int));
}


void func_5198(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 425, 1, 526224);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_5224(var_71_bool, var_72_object, 416);
}
EMIT "Stack[-1] = 0";


void func_3662(object var_0_object, int var_1010_int, object var_1011_object)
{
	var_0_object = var_1011_object;
	bool var_1021_bool; object var_1022_object;
	object var_1023_object;
	func_4461(var_1023_object);
	var_1023_object = var_1022_object;
	func_4288(var_1021_bool, var_1022_object);
	bool var_1024_bool; object var_1025_object;
	var_1011_object = var_1025_object;
	func_4203(var_1024_bool, var_1025_object, 70.0);
	if(!var_1024_bool) { //@nz
		var_1010_int = -2;
		return 8;
	}
	object var_1017_object;
	@CreateDialog(var_1017_object);
	int var_1028_int;
	func_4659(var_1028_int);
	var_1017_object->SetNPCName(var_1028_int);
	int var_1029_int;
	func_4657(var_1029_int);
	var_1017_object->SetNPCDescription(var_1029_int);
	string var_1030_string;
	func_4661(var_1030_string);
	var_1017_object->SetPhoto(var_1030_string);
	string var_1031_string;
	func_4663(var_1031_string);
	var_1017_object->SetPhoto2(var_1031_string);
	int var_1032_int;
	func_5302(var_1032_int);
	var_1017_object->SetPlayerName(var_1032_int);
	bool var_1018_bool;
	@IsOverrideActive(var_1018_bool);
	if(var_1018_bool != 0) {
		var_1010_int = -2;
		return 8;
	}
	@DoDialog(var_1017_object);
	object var_1034_object; object var_1035_object;
	var_1011_object = var_1034_object;
	var_1017_object = var_1035_object;
	TaskCall(22);
	func_3743(var_1036_object, var_1037_object, var_1038_string, var_1039_bool, var_1034_object, var_1035_object);
	TaskReturn();
	bool var_1020_bool;
	var_1017_object->IsDialogEnd(var_1020_bool);
	
	for(;;) {
		var_1064_bool = !var_1020_bool; //@nz
		if(var_1064_bool == 0) goto Label_3732;
		@sync();
		var_1017_object->IsDialogEnd(var_1020_bool);
	}
	
Label_3732:
	object var_1065_object;
	var_1011_object = var_1065_object;
	func_4271();
	@StopDialog(var_1017_object);
	var_1017_object->GetReturnValue(-1);
	int var_1019_int = var_1010_int;
}
EMIT "Stack[-4] = 0";


void func_4179(bool var_64_bool, cvector var_65_cvector)
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


// @pe
void func_1108(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_469_object, object var_470_object)
{
	var_0_object = var_470_object;
	var_1_object = var_469_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_476_bool = false;
		bool var_477_bool;
		func_4954(var_1_object);
		if(var_477_bool != 0) {
			bool var_483_bool;
			func_4966(var_1_object);
			if(var_483_bool != 0)
				var_476_bool = true;
		}
		if(var_476_bool != 0) {
			object var_489_object; object var_490_object;
			var_489_object = var_1_object;
			var_490_object = var_0_object;
			func_4715();
			func_1205(var_470_object, "Neutral");
			var_0_object->SetMessage(525756); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540712, 42749, 42748); //@t
			var_0_object->AddReply(540717, -1, 42753); //@t
		} else {
					func_1205(var_470_object, "Neutral");
					var_0_object->SetMessage(525759); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525760, -1, 27072); //@t
					var_0_object->AddReply(540711, -1, 42747); //@t
		}
	}
	for(;;) {
		bool var_508_bool;
		func_4665(var_508_bool);
		if(var_508_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4426(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1204;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1204:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x458";


// @pe
void func_4693(object var_164_object)
{
	object var_167_object;
	var_164_object = var_167_object;
	bool var_166_bool;
	func_4556(var_166_bool, var_167_object, -0.05);
}


void func_600(object var_0_object, int var_365_int, object var_366_object)
{
	var_0_object = var_366_object;
	bool var_376_bool; object var_377_object;
	object var_378_object;
	func_4461(var_378_object);
	var_378_object = var_377_object;
	func_4288(var_376_bool, var_377_object);
	bool var_379_bool; object var_380_object;
	var_366_object = var_380_object;
	func_4203(var_379_bool, var_380_object, 70.0);
	if(!var_379_bool) { //@nz
		var_365_int = -2;
		return 8;
	}
	object var_372_object;
	@CreateDialog(var_372_object);
	int var_383_int;
	func_4659(var_383_int);
	var_372_object->SetNPCName(var_383_int);
	int var_384_int;
	func_4657(var_384_int);
	var_372_object->SetNPCDescription(var_384_int);
	string var_385_string;
	func_4661(var_385_string);
	var_372_object->SetPhoto(var_385_string);
	string var_386_string;
	func_4663(var_386_string);
	var_372_object->SetPhoto2(var_386_string);
	int var_387_int;
	func_5302(var_387_int);
	var_372_object->SetPlayerName(var_387_int);
	bool var_373_bool;
	@IsOverrideActive(var_373_bool);
	if(var_373_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	@DoDialog(var_372_object);
	object var_389_object; object var_390_object;
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(6);
	func_681(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	bool var_375_bool;
	var_372_object->IsDialogEnd(var_375_bool);
	
	for(;;) {
		var_441_bool = !var_375_bool; //@nz
		if(var_441_bool == 0) goto Label_670;
		@sync();
		var_372_object->IsDialogEnd(var_375_bool);
	}
	
Label_670:
	object var_442_object;
	var_366_object = var_442_object;
	func_4271();
	@StopDialog(var_372_object);
	var_372_object->GetReturnValue(-1);
	int var_374_int = var_365_int;
}
EMIT "Stack[-4] = 0";


void func_5211(object var_90_object)
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
void func_4700(void)
{
	@SetVariable("k1q02", 4);
	func_5159();
}


void func_4189(bool var_60_bool, object var_61_object)
{
	cvector var_63_cvector;
	var_61_object->GetPosition(var_63_cvector);
	bool var_64_bool; cvector var_65_cvector;
	var_63_cvector = var_65_cvector;
	func_4179(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_318_object, object var_319_object)
{
	var_0_object = var_319_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_325_bool;
		func_4918(var_318_object);
		if(var_325_bool != 0) {
			func_172(var_319_object, "Neutral");
			var_0_object->SetMessage(524759); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526896, 28184, 28183); //@t
			var_0_object->AddReply(526903, 28184, 28191); //@t
		} else {
					func_172(var_319_object, "Neutral");
					var_0_object->SetMessage(524761); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526893, -1, 28180); //@t
		}
	}
	for(;;) {
		bool var_348_bool;
		func_4665(var_348_bool);
		if(var_348_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4426(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_171;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_171:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_4709(void)
{
	@SetVariable("ook3Maria1", 1);
}


void func_4198(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


void func_5224(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_5211(var_90_object);
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


void func_4203(bool var_183_bool, object var_184_object, float var_185_float)
{
	cvector var_196_cvector; bool var_203_bool;
	var_184_object->GetPosition(var_196_cvector);
	float var_195_float;
	var_184_object->GetEyesHeight(var_195_float);
	var_204_float = GetByIndex(var_196_cvector, 1);
	SetByIndex(var_196_cvector, 1) = (var_204_float + var_195_float);
	cvector var_197_cvector;
	@GetPosition(var_197_cvector);
	@GetEyesHeight(var_195_float);
	var_205_float = GetByIndex(var_197_cvector, 1);
	SetByIndex(var_197_cvector, 1) = (var_205_float + var_195_float);
	cvector var_198_cvector = var_196_cvector - var_197_cvector;
	var_206_float = GetByIndex(var_198_cvector, 1);
	SetByIndex(var_198_cvector, 1) = (float)0;
	var_208_float = sqrt(var_198_cvector | var_198_cvector);
	var_198_cvector /= var_208_float;
	cvector var_199_cvector = -var_198_cvector;
	cvector var_210_cvector;
	func_4467(var_210_cvector, (var_199_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_200_cvector = ((var_198_cvector * var_185_float) + (var_210_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_202_bool;
	@IsOverrideActive(var_202_bool);
	if(var_202_bool != 0)
		var_183_bool = false;
	@StopWorld();
	@CameraTransit((var_197_cvector + var_200_cvector), var_199_cvector);
	var_223_float = GetByIndex(var_200_cvector, 0);
	var_224_float = GetByIndex(var_200_cvector, 2);
	@Rotate(var_223_float, var_224_float);
	bool var_225_bool;
	func_4665(var_225_bool);
	if(var_225_bool != 0) {
	} else {
		@HasAnimationTrack(var_203_bool, "head");
		if(var_203_bool == 0) goto Label_4265;
		@LookAsyncCamera("head");
	}
Label_4265:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_183_bool = true;
	
}


// @pe
void func_4715(void)
{
	@SetVariable("ook4Maria1", 1);
}


// @pe
void func_4721(void)
{
	@SetVariable("k7q01", 7);
	func_5198();
}


// @pe
void func_4730(void)
{
	@SetVariable("k10q01", 2);
	func_5146();
	bool var_89_bool;
	func_4601(var_89_bool, "quest_k10_01", "place_soldiers");
}


void func_5252(object var_68_object)
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
void func_4744(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_4750(object var_147_object)
{
	@Trace("feromicin2 is given");
	object var_150_object;
	var_147_object = var_150_object;
	func_4543(var_150_object, "feromicin", 2);
}


void func_5269(object var_107_object, string var_108_string, float var_109_float)
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


void func_4761(void)
{
	@SetVariable("k5q04", 2);
	object var_68_object;
	func_5252(var_68_object);
	object var_65_object;
	var_68_object = var_65_object;
	float var_79_float;
	func_4613(var_79_float);
	var_65_object->AddMark("k5q04MariaGotoDanko", "pt_map_eva", 0, 515279, var_79_float);
	func_5185();
}
EMIT "Stack[-1] = 0";


// @pe
void func_3743(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1034_object, object var_1035_object)
{
	var_0_object = var_1035_object;
	var_1_object = var_1034_object;
	var_3_string = false;
	if(1 != 0) {
		func_3801(var_1035_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_3771;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xea3";
	}
Label_3771:
	bool var_1056_bool;
	func_4665(var_1056_bool);
	if(var_1056_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3800;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3800:
		return 0;

	}
	
}


// @pe
void func_681(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_389_object, object var_390_object)
{
	var_0_object = var_390_object;
	var_1_object = var_389_object;
	var_3_string = false;
	if(1 != 0) {
		func_763(var_390_object, "Neutral");
		var_0_object->SetMessage(525607); //@t
		var_0_object->ClearReplies(); //@t
		bool var_405_bool = false;
		bool var_406_bool;
		func_4930(var_1_object);
		if(var_406_bool != 0) {
			bool var_412_bool;
			func_4942(var_1_object);
			if(var_412_bool != 0)
				var_405_bool = true;
		}
		if(var_405_bool != 0)
			var_0_object->AddReply(525608, 26956, 26955); //@t
		bool var_421_bool;
		func_5116(var_1_object);
		if(var_421_bool != 0)
			var_0_object->AddReply(540700, 42737, 42736); //@t
		var_0_object->AddReply(525613, -1, 26960); //@t
		goto Label_733;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ad";
	}
Label_733:
	bool var_433_bool;
	func_4665(var_433_bool);
	if(var_433_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_762;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_762:
		return 0;

	}
	
}


// @pe
void func_172(object var_2_object, string var_333_string)
{
	bool var_334_bool;
	func_4665(var_334_bool);
	if(!var_334_bool) //@nz
		return 0;
	if(var_333_string == var_2_object)
		return 0;
	string var_337_string; bool var_338_bool;
	var_333_string = var_337_string;
	if(var_333_string == "")
		var_338_bool = false;
	else
		var_338_bool = true;
	func_4433(var_337_string, var_338_bool);
	var_2_object = var_333_string;
	
}


void func_4271(void)
{
	bool var_285_bool;
	@CameraSwitchToNormal();
	bool var_286_bool;
	func_4665(var_286_bool);
	if(var_286_bool != 0) {
	} else {
		@HasAnimationTrack(var_285_bool, "head");
		if(var_285_bool == 0) goto Label_4287;
		@UnlookAsync("head");
	}
Label_4287:
	
}


// @pe
void func_4784(void)
{
	func_5172();
}


void func_2225(object var_0_object, int var_951_int, object var_952_object)
{
	var_0_object = var_952_object;
	bool var_962_bool; object var_963_object;
	object var_964_object;
	func_4461(var_964_object);
	var_964_object = var_963_object;
	func_4288(var_962_bool, var_963_object);
	bool var_965_bool; object var_966_object;
	var_952_object = var_966_object;
	func_4203(var_965_bool, var_966_object, 70.0);
	if(!var_965_bool) { //@nz
		var_951_int = -2;
		return 8;
	}
	object var_958_object;
	@CreateDialog(var_958_object);
	int var_969_int;
	func_4659(var_969_int);
	var_958_object->SetNPCName(var_969_int);
	int var_970_int;
	func_4657(var_970_int);
	var_958_object->SetNPCDescription(var_970_int);
	string var_971_string;
	func_4661(var_971_string);
	var_958_object->SetPhoto(var_971_string);
	string var_972_string;
	func_4663(var_972_string);
	var_958_object->SetPhoto2(var_972_string);
	int var_973_int;
	func_5302(var_973_int);
	var_958_object->SetPlayerName(var_973_int);
	bool var_959_bool;
	@IsOverrideActive(var_959_bool);
	if(var_959_bool != 0) {
		var_951_int = -2;
		return 8;
	}
	@DoDialog(var_958_object);
	object var_975_object; object var_976_object;
	var_952_object = var_975_object;
	var_958_object = var_976_object;
	TaskCall(14);
	func_2306(var_977_object, var_978_object, var_979_string, var_980_bool, var_975_object, var_976_object);
	TaskReturn();
	bool var_961_bool;
	var_958_object->IsDialogEnd(var_961_bool);
	
	for(;;) {
		var_1008_bool = !var_961_bool; //@nz
		if(var_1008_bool == 0) goto Label_2295;
		@sync();
		var_958_object->IsDialogEnd(var_961_bool);
	}
	
Label_2295:
	object var_1009_object;
	var_952_object = var_1009_object;
	func_4271();
	@StopDialog(var_958_object);
	var_958_object->GetReturnValue(-1);
	int var_960_int = var_951_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1205(object var_2_object, string var_493_string)
{
	bool var_494_bool;
	func_4665(var_494_bool);
	if(!var_494_bool) //@nz
		return 0;
	if(var_493_string == var_2_object)
		return 0;
	string var_497_string; bool var_498_bool;
	var_493_string = var_497_string;
	if(var_493_string == "")
		var_498_bool = false;
	else
		var_498_bool = true;
	func_4433(var_497_string, var_498_bool);
	var_2_object = var_493_string;
	
}


void func_5302(int var_234_int)
{
	int var_236_int;
	@GetVariable("branch", var_236_int);
	if(var_236_int == 0) {
		var_234_int = 1;
		return 2;
	EMIT "GOTO 0x14c5";
	}
	if(var_236_int == 1) {
		var_234_int = 2;
		return 2;
	}
	var_234_int = 3;
}


// @pe
void func_4789(void)
{
	@SetVariable("ook8Maria1", 1);
}


// @pe
void func_4795(void)
{
	@SetVariable("ook8Maria2", 1);
}


void func_4288(bool var_88_bool, object var_89_object)
{
	int var_95_int; int var_96_int;
	@GetVariable("voice_common", var_95_int);
	if(var_95_int != 0) {
		bool var_99_bool; object var_100_object;
		var_89_object = var_100_object;
		func_4346(var_99_bool, var_100_object);
		if(!var_99_bool) { //@nz
			bool var_130_bool; object var_131_object;
			var_89_object = var_131_object;
			func_4383(var_130_bool, var_131_object);
			if(!var_130_bool) { //@nz
				var_88_bool = false;
				return 4;
			}
		}
		@irand(var_96_int, 2);
		if(var_96_int != 0)
			@SetVariable("voice_common", ((var_95_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_175_bool; object var_176_object;
		var_89_object = var_176_object;
		func_4383(var_175_bool, var_176_object);
		if(!var_175_bool) { //@nz
			bool var_178_bool; object var_179_object;
			var_89_object = var_179_object;
			func_4346(var_178_bool, var_179_object);
			if(!var_178_bool) { //@nz
				var_88_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4344;
	
Label_4344:
	var_88_bool = true;
	
}


// @pe
void func_4801(void)
{
	@SetVariable("ook8Maria1", 1);
}


// @pe
void func_4807(void)
{
	@SetVariable("ook8Maria2", 1);
}


void func_5319(int var_707_int)
{
	int var_709_int;
	@GetVariable("k2system_danko_day", var_709_int);
	var_709_int = var_707_int;
}


// @pe
void func_4813(void)
{
	@SetVariable("ook10Maria1", 1);
}


void func_5325(int var_716_int)
{
	int var_721_int;
	func_5319(var_721_int);
	int var_719_int;
	var_721_int = var_719_int;
	int var_720_int;
	@GetVariable(("k2system_danko_state" + var_719_int), var_720_int);
	var_720_int = var_716_int;
}


void func_3277(object var_0_object, int var_769_int, object var_770_object)
{
	var_0_object = var_770_object;
	bool var_780_bool; object var_781_object;
	object var_782_object;
	func_4461(var_782_object);
	var_782_object = var_781_object;
	func_4288(var_780_bool, var_781_object);
	bool var_783_bool; object var_784_object;
	var_770_object = var_784_object;
	func_4203(var_783_bool, var_784_object, 70.0);
	if(!var_783_bool) { //@nz
		var_769_int = -2;
		return 8;
	}
	object var_776_object;
	@CreateDialog(var_776_object);
	int var_787_int;
	func_4659(var_787_int);
	var_776_object->SetNPCName(var_787_int);
	int var_788_int;
	func_4657(var_788_int);
	var_776_object->SetNPCDescription(var_788_int);
	string var_789_string;
	func_4661(var_789_string);
	var_776_object->SetPhoto(var_789_string);
	string var_790_string;
	func_4663(var_790_string);
	var_776_object->SetPhoto2(var_790_string);
	int var_791_int;
	func_5302(var_791_int);
	var_776_object->SetPlayerName(var_791_int);
	bool var_777_bool;
	@IsOverrideActive(var_777_bool);
	if(var_777_bool != 0) {
		var_769_int = -2;
		return 8;
	}
	@DoDialog(var_776_object);
	object var_793_object; object var_794_object;
	var_770_object = var_793_object;
	var_776_object = var_794_object;
	TaskCall(20);
	func_3358(var_795_object, var_796_object, var_797_string, var_798_bool, var_793_object, var_794_object);
	TaskReturn();
	bool var_779_bool;
	var_776_object->IsDialogEnd(var_779_bool);
	
	for(;;) {
		var_850_bool = !var_779_bool; //@nz
		if(var_850_bool == 0) goto Label_3347;
		@sync();
		var_776_object->IsDialogEnd(var_779_bool);
	}
	
Label_3347:
	object var_851_object;
	var_770_object = var_851_object;
	func_4271();
	@StopDialog(var_776_object);
	var_776_object->GetReturnValue(-1);
	int var_778_int = var_769_int;
}
EMIT "Stack[-4] = 0";


void func_1743(object var_0_object, int var_854_int, object var_855_object)
{
	var_0_object = var_855_object;
	bool var_865_bool; object var_866_object;
	object var_867_object;
	func_4461(var_867_object);
	var_867_object = var_866_object;
	func_4288(var_865_bool, var_866_object);
	bool var_868_bool; object var_869_object;
	var_855_object = var_869_object;
	func_4203(var_868_bool, var_869_object, 70.0);
	if(!var_868_bool) { //@nz
		var_854_int = -2;
		return 8;
	}
	object var_861_object;
	@CreateDialog(var_861_object);
	int var_872_int;
	func_4659(var_872_int);
	var_861_object->SetNPCName(var_872_int);
	int var_873_int;
	func_4657(var_873_int);
	var_861_object->SetNPCDescription(var_873_int);
	string var_874_string;
	func_4661(var_874_string);
	var_861_object->SetPhoto(var_874_string);
	string var_875_string;
	func_4663(var_875_string);
	var_861_object->SetPhoto2(var_875_string);
	int var_876_int;
	func_5302(var_876_int);
	var_861_object->SetPlayerName(var_876_int);
	bool var_862_bool;
	@IsOverrideActive(var_862_bool);
	if(var_862_bool != 0) {
		var_854_int = -2;
		return 8;
	}
	@DoDialog(var_861_object);
	object var_878_object; object var_879_object;
	var_855_object = var_878_object;
	var_861_object = var_879_object;
	TaskCall(12);
	func_1824(var_880_object, var_881_object, var_882_string, var_883_bool, var_878_object, var_879_object);
	TaskReturn();
	bool var_864_bool;
	var_861_object->IsDialogEnd(var_864_bool);
	
	for(;;) {
		var_947_bool = !var_864_bool; //@nz
		if(var_947_bool == 0) goto Label_1813;
		@sync();
		var_861_object->IsDialogEnd(var_864_bool);
	}
	
Label_1813:
	object var_948_object;
	var_855_object = var_948_object;
	func_4271();
	@StopDialog(var_861_object);
	var_861_object->GetReturnValue(-1);
	int var_863_int = var_854_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4819(void)
{
	@SetVariable("ook10Maria2", 1);
}


void func_5336(bool var_705_bool)
{
	int var_706_int;
	func_4618(var_706_int);
	int var_707_int;
	func_5319(var_707_int);
	var_705_bool = var_706_int == var_707_int;
}


void func_4825(object var_99_object)
{
	int var_102_int;
	@irand(var_102_int, 1000);
	object var_104_object;
	var_99_object = var_104_object;
	func_4505(var_104_object, (var_102_int + 2000));
}


// @pe
void func_3801(object var_2_object, string var_1041_string)
{
	bool var_1042_bool;
	func_4665(var_1042_bool);
	if(!var_1042_bool) //@nz
		return 0;
	if(var_1041_string == var_2_object)
		return 0;
	string var_1045_string; bool var_1046_bool;
	var_1041_string = var_1045_string;
	if(var_1041_string == "")
		var_1046_bool = false;
	else
		var_1046_bool = true;
	func_4433(var_1045_string, var_1046_bool);
	var_2_object = var_1041_string;
	
}


void func_5344(bool var_742_bool)
{
	int var_743_int;
	func_5325(var_743_int);
	var_742_bool = var_743_int == 2;
}


void func_4836(object var_99_object)
{
	int var_102_int;
	@irand(var_102_int, 1000);
	object var_104_object;
	var_99_object = var_104_object;
	func_4505(var_104_object, (var_102_int + 3000));
}


void func_5350(bool var_715_bool)
{
	int var_716_int;
	func_5325(var_716_int);
	var_715_bool = var_716_int == 0;
}


// @pe
void func_5356(object var_74_object)
{
	var_75_bool = GlobalVars[1];
	if(!var_75_bool) { //@nz
		int var_77_int; object var_78_object;
		var_74_object = var_78_object;
		TaskCall(3);
		func_374(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_290_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_291_bool;
	func_4627(var_291_bool, 1);
	if(var_291_bool != 0) {
		int var_294_int; object var_295_object;
		var_74_object = var_295_object;
		TaskCall(1);
		func_13(var_296_object, var_294_int, var_295_object);
		TaskReturn();
		return 0;
	}
	bool var_363_bool;
	func_4627(var_363_bool, 3);
	if(var_363_bool != 0) {
		int var_365_int; object var_366_object;
		var_74_object = var_366_object;
		TaskCall(5);
		func_600(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 0;
	}
	bool var_443_bool;
	func_4627(var_443_bool, 4);
	if(var_443_bool != 0) {
		int var_445_int; object var_446_object;
		var_74_object = var_446_object;
		TaskCall(7);
		func_1027(var_447_object, var_445_int, var_446_object);
		TaskReturn();
		return 0;
	}
	bool var_526_bool;
	func_4627(var_526_bool, 5);
	if(var_526_bool != 0) {
		int var_528_int; object var_529_object;
		var_74_object = var_529_object;
		TaskCall(15);
		func_2484(var_530_object, var_528_int, var_529_object);
		TaskReturn();
		return 0;
	}
	bool var_593_bool;
	func_4627(var_593_bool, 7);
	if(var_593_bool != 0) {
		int var_595_int; object var_596_object;
		var_74_object = var_596_object;
		TaskCall(9);
		func_1404(var_597_object, var_595_int, var_596_object);
		TaskReturn();
		return 0;
	}
	bool var_657_bool;
	func_4627(var_657_bool, 8);
	if(var_657_bool != 0) {
		int var_659_int; object var_660_object;
		var_74_object = var_660_object;
		TaskCall(17);
		func_2902(var_661_object, var_659_int, var_660_object);
		TaskReturn();
		return 0;
	}
	bool var_767_bool;
	func_4627(var_767_bool, 9);
	if(var_767_bool != 0) {
		int var_769_int; object var_770_object;
		var_74_object = var_770_object;
		TaskCall(19);
		func_3277(var_771_object, var_769_int, var_770_object);
		TaskReturn();
		return 0;
	}
	bool var_852_bool;
	func_4627(var_852_bool, 10);
	if(var_852_bool != 0) {
		int var_854_int; object var_855_object;
		var_74_object = var_855_object;
		TaskCall(11);
		func_1743(var_856_object, var_854_int, var_855_object);
		TaskReturn();
		return 0;
	}
	bool var_949_bool;
	func_4627(var_949_bool, 12);
	if(var_949_bool != 0) {
		int var_951_int; object var_952_object;
		var_74_object = var_952_object;
		TaskCall(13);
		func_2225(var_953_object, var_951_int, var_952_object);
		TaskReturn();
		return 0;
	}
	int var_1010_int; object var_1011_object;
	var_74_object = var_1011_object;
	TaskCall(21);
	func_3662(var_1012_object, var_1010_int, var_1011_object);
	TaskReturn();
}


void func_4847(object var_119_object)
{
	int var_122_int;
	@irand(var_122_int, 1000);
	object var_124_object;
	var_119_object = var_124_object;
	func_4505(var_124_object, (var_122_int + 4000));
}


// @pe
void func_4858(void)
{
	@SetVariable("ook3Maria2", 1);
}


// @pe
void func_763(object var_2_object, string var_396_string)
{
	bool var_397_bool;
	func_4665(var_397_bool);
	if(!var_397_bool) //@nz
		return 0;
	if(var_396_string == var_2_object)
		return 0;
	string var_400_string; bool var_401_bool;
	var_396_string = var_400_string;
	if(var_396_string == "")
		var_401_bool = false;
	else
		var_401_bool = true;
	func_4433(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	
}


void func_4346(bool var_99_bool, object var_100_object)
{
	string var_106_string; bool var_108_bool; int var_109_int; string var_110_string;
	var_106_string = "c";
	int var_107_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_100_object->HasProperty((var_106_string + (var_107_int + 1)), var_108_bool);
			if(!var_108_bool) { //@nz
			} else {
				var_107_int += 1;
			}
		}
		if(!var_107_int) { //@nz
			var_99_bool = false;
			return 10;
		}
		var_109_int = 0;
		if(var_107_int > 1)
			@irand(var_109_int, var_107_int);
		var_100_object->GetProperty((var_106_string + (var_109_int + 1)), var_110_string);
		bool var_122_bool; string var_123_string;
		var_110_string = var_123_string;
		func_4439(var_122_bool, var_123_string);
		var_122_bool = var_99_bool;
		return 10;

	}
}


// @pe
void func_4864(object var_62_object)
{
	object var_65_object;
	var_62_object = var_65_object;
	bool var_64_bool;
	func_4556(var_64_bool, var_65_object, 0.1);
}


// @pe
void func_2306(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_975_object, object var_976_object)
{
	var_0_object = var_976_object;
	var_1_object = var_975_object;
	var_3_string = false;
	if(1 != 0) {
		func_2369(var_976_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_2339;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x906";
	}
Label_2339:
	bool var_1000_bool;
	func_4665(var_1000_bool);
	if(var_1000_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2368;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2368:
		return 0;

	}
	
}


// @pe
void func_4871(object var_115_object)
{
	object var_118_object;
	var_115_object = var_118_object;
	bool var_117_bool;
	func_4556(var_117_bool, var_118_object, -0.1);
}


// @pe
void func_4878(object var_104_object)
{
	object var_107_object;
	var_104_object = var_107_object;
	bool var_106_bool;
	func_4556(var_106_bool, var_107_object, -0.3);
}


// @pe
void func_4885(object var_123_object)
{
	@Trace("feromicin is given");
	object var_126_object;
	var_123_object = var_126_object;
	func_4543(var_126_object, "feromicin", 1);
}


// @pe
void func_3358(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_793_object, object var_794_object)
{
	var_0_object = var_794_object;
	var_1_object = var_793_object;
	var_3_string = false;
	if(1 != 0) {
		func_3467(var_794_object, "Neutral");
		var_0_object->SetMessage(539840); //@t
		var_0_object->ClearReplies(); //@t
		bool var_809_bool = false;
		bool var_810_bool = false;
		bool var_811_bool;
		func_5014(var_811_bool, var_1_object);
		if(var_811_bool != 0) {
			bool var_813_bool;
			func_5024(var_813_bool, var_1_object);
			if(var_813_bool != 0)
				var_810_bool = true;
		}
		if(var_810_bool != 0) {
			bool var_815_bool;
			func_5068(var_1_object);
			if(var_815_bool != 0)
				var_809_bool = true;
		}
		if(var_809_bool != 0)
			var_0_object->AddReply(539841, 41794, 41793); //@t
		bool var_824_bool = false;
		bool var_825_bool = false;
		bool var_826_bool;
		func_5014(var_826_bool, var_1_object);
		if(var_826_bool != 0) {
			bool var_828_bool;
			func_5034(var_828_bool, var_1_object);
			if(var_828_bool != 0)
				var_825_bool = true;
		}
		if(var_825_bool != 0) {
			bool var_830_bool;
			func_5080(var_1_object);
			if(var_830_bool != 0)
				var_824_bool = true;
		}
		if(var_824_bool != 0)
			var_0_object->AddReply(539844, 41797, 41796); //@t
		var_0_object->AddReply(539850, -1, 41802); //@t
		goto Label_3437;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd22";
	}
Label_3437:
	bool var_842_bool;
	func_4665(var_842_bool);
	if(var_842_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3466;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3466:
		return 0;

	}
	
}


void func_4383(bool var_130_bool, object var_131_object)
{
	bool var_139_bool; int var_140_int; string var_141_string;
	int var_143_int;
	func_4618(var_143_int);
	string var_137_string = ("d" + var_143_int) + "m";
	int var_138_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_131_object->HasProperty((var_137_string + (var_138_int + 1)), var_139_bool);
			if(!var_139_bool) { //@nz
			} else {
				var_138_int += 1;
			}
		}
		if(!var_138_int) { //@nz
			var_130_bool = false;
			return 10;
		}
		var_140_int = 0;
		if(var_138_int > 1)
			@irand(var_140_int, var_138_int);
		var_131_object->GetProperty((var_137_string + (var_140_int + 1)), var_141_string);
		bool var_162_bool; string var_163_string;
		var_141_string = var_163_string;
		func_4439(var_162_bool, var_163_string);
		var_162_bool = var_130_bool;
		return 10;

	}
}


// @pe
void func_1824(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_878_object, object var_879_object)
{
	var_0_object = var_879_object;
	var_1_object = var_878_object;
	var_3_string = false;
	if(1 != 0) {
		func_1948(var_879_object, "Neutral");
		var_0_object->SetMessage(526947); //@t
		var_0_object->ClearReplies(); //@t
		bool var_894_bool;
		func_4990(var_1_object);
		if(var_894_bool != 0)
			var_0_object->AddReply(526948, 28241, 28240); //@t
		bool var_903_bool = false;
		bool var_904_bool = false;
		bool var_905_bool;
		func_5014(var_905_bool, var_1_object);
		if(var_905_bool != 0) {
			bool var_907_bool;
			func_5024(var_907_bool, var_1_object);
			if(var_907_bool != 0)
				var_904_bool = true;
		}
		if(var_904_bool != 0) {
			bool var_909_bool;
			func_5092(var_1_object);
			if(var_909_bool != 0)
				var_903_bool = true;
		}
		if(var_903_bool != 0)
			var_0_object->AddReply(539852, 41805, 41804); //@t
		bool var_918_bool = false;
		bool var_919_bool = false;
		bool var_920_bool;
		func_5014(var_920_bool, var_1_object);
		if(var_920_bool != 0) {
			bool var_922_bool;
			func_5034(var_922_bool, var_1_object);
			if(var_922_bool != 0)
				var_919_bool = true;
		}
		if(var_919_bool != 0) {
			bool var_924_bool;
			func_5104(var_1_object);
			if(var_924_bool != 0)
				var_918_bool = true;
		}
		if(var_918_bool != 0)
			var_0_object->AddReply(539855, 41808, 41807); //@t
		var_0_object->AddReply(526951, -1, 28243); //@t
		var_0_object->AddReply(528006, -1, 29366); //@t
		goto Label_1918;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x724";
	}
Label_1918:
	bool var_939_bool;
	func_4665(var_939_bool);
	if(var_939_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1947;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1947:
		return 0;

	}
	
}


// @pe
void func_4896(object var_127_object)
{
	@Trace("morfin is given");
	object var_130_object;
	var_127_object = var_130_object;
	func_4543(var_130_object, "morfin", 1);
}


void func_3872(object var_0_object)
{
	bool var_57_bool;
	func_4198(var_57_bool);
	if(!var_57_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4000();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_4054();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_4907(object var_148_object)
{
	@Trace("neomicin is given");
	object var_151_object;
	var_148_object = var_151_object;
	func_4543(var_151_object, "neomicin", 1);
}


void func_3892(bool var_81_bool)
{
	object var_83_object;
	@FindActor(var_83_object, "player");
	if(!var_83_object) //@nz
		var_81_bool = false;
	bool var_86_bool; object var_87_object;
	var_83_object = var_87_object;
	func_4189(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4918(bool var_325_bool)
{
	int var_327_int;
	func_4488(var_327_int, "k1q02");
	if(var_327_int == 3)
		var_325_bool = true;
	var_325_bool = false;
}


// @pe
void func_2369(object var_2_object, string var_982_string)
{
	bool var_983_bool;
	func_4665(var_983_bool);
	if(!var_983_bool) //@nz
		return 0;
	if(var_982_string == var_2_object)
		return 0;
	string var_986_string; bool var_987_bool;
	var_982_string = var_986_string;
	if(var_982_string == "")
		var_987_bool = false;
	else
		var_987_bool = true;
	func_4433(var_986_string, var_987_bool);
	var_2_object = var_982_string;
	
}


// @pe
void func_4930(bool var_406_bool)
{
	int var_408_int;
	func_4488(var_408_int, "k3q03");
	if(var_408_int == 1000)
		var_406_bool = true;
	var_406_bool = false;
}


void func_3907(object var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_133_float, var_134_float);
}


void func_3912(bool var_64_bool)
{
	object var_67_object;
	@FindActor(var_67_object, "player");
	if(!var_67_object) { //@nz
		var_64_bool = false;
		return 4;
	}
	float var_71_float; object var_72_object;
	func_4130(var_71_float, var_72_object);
	if(var_71_float > 90000.0) {
		var_64_bool = false;
		return 4;
	}
	bool var_68_bool;
	@CanSee(var_68_bool, var_72_object);
	var_68_bool = var_64_bool;
}
EMIT "Stack[-2] = 0";


void func_4426(string var_64_string)
{
	float var_67_float; float var_68_float;
	@lshGetAnimTimes(var_64_string, var_67_float, var_68_float);
	@lshPlayAnimation(var_67_float, var_68_float, false);
}


// @pe
void func_4942(bool var_412_bool)
{
	int var_414_int;
	func_4488(var_414_int, "ook3Maria1");
	if(var_414_int == 0) {
		var_412_bool = true;
		return 0;
	}
	var_412_bool = false;
}


void func_4433(string var_254_string, bool var_255_bool)
{
	float var_260_float; float var_261_float;
	@lshGetAnimTimes(var_254_string, var_260_float, var_261_float);
	@lshPlayAnimation(var_260_float, var_261_float, var_255_bool);
}


void func_2902(object var_0_object, int var_659_int, object var_660_object)
{
	var_0_object = var_660_object;
	bool var_670_bool; object var_671_object;
	object var_672_object;
	func_4461(var_672_object);
	var_672_object = var_671_object;
	func_4288(var_670_bool, var_671_object);
	bool var_673_bool; object var_674_object;
	var_660_object = var_674_object;
	func_4203(var_673_bool, var_674_object, 70.0);
	if(!var_673_bool) { //@nz
		var_659_int = -2;
		return 8;
	}
	object var_666_object;
	@CreateDialog(var_666_object);
	int var_677_int;
	func_4659(var_677_int);
	var_666_object->SetNPCName(var_677_int);
	int var_678_int;
	func_4657(var_678_int);
	var_666_object->SetNPCDescription(var_678_int);
	string var_679_string;
	func_4661(var_679_string);
	var_666_object->SetPhoto(var_679_string);
	string var_680_string;
	func_4663(var_680_string);
	var_666_object->SetPhoto2(var_680_string);
	int var_681_int;
	func_5302(var_681_int);
	var_666_object->SetPlayerName(var_681_int);
	bool var_667_bool;
	@IsOverrideActive(var_667_bool);
	if(var_667_bool != 0) {
		var_659_int = -2;
		return 8;
	}
	@DoDialog(var_666_object);
	object var_683_object; object var_684_object;
	var_660_object = var_683_object;
	var_666_object = var_684_object;
	TaskCall(18);
	func_2983(var_685_object, var_686_object, var_687_string, var_688_bool, var_683_object, var_684_object);
	TaskReturn();
	bool var_669_bool;
	var_666_object->IsDialogEnd(var_669_bool);
	
	for(;;) {
		var_765_bool = !var_669_bool; //@nz
		if(var_765_bool == 0) goto Label_2972;
		@sync();
		var_666_object->IsDialogEnd(var_669_bool);
	}
	
Label_2972:
	object var_766_object;
	var_660_object = var_766_object;
	func_4271();
	@StopDialog(var_666_object);
	var_666_object->GetReturnValue(-1);
	int var_668_int = var_659_int;
}
EMIT "Stack[-4] = 0";


void func_4439(bool var_122_bool, string var_123_string)
{
	bool var_125_bool;
	bool var_126_bool;
	func_4665(var_126_bool);
	if(var_126_bool != 0) {
		@lshHasSpeech(var_125_bool, var_123_string);
		if(var_125_bool != 0) {
			@lshPlaySpeech(var_123_string);
			var_122_bool = true;
		}
	}
	var_122_bool = false;
}


// @pe
void func_4954(bool var_477_bool)
{
	int var_479_int;
	func_4488(var_479_int, "k4q02");
	if(var_479_int == 1)
		var_477_bool = true;
	var_477_bool = false;
}


void func_3934(void)
{
	float var_71_float;
	@rand(var_71_float, 8, 16);
	@SetTimer(10, var_71_float);
}


void func_4454(void)
{
	bool var_59_bool;
	func_4665(var_59_bool);
	if(var_59_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4966(bool var_483_bool)
{
	int var_485_int;
	func_4488(var_485_int, "ook4Maria1");
	if(var_485_int == 0) {
		var_483_bool = true;
		return 0;
	}
	var_483_bool = false;
}


void func_3943(void)
{
	@KillTimer(10);
}


void func_4461(object var_90_object)
{
	object var_92_object;
	@self(var_92_object);
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4978(bool var_635_bool)
{
	int var_637_int;
	func_4488(var_637_int, "k7q01");
	if(var_637_int == 6)
		var_635_bool = true;
	var_635_bool = false;
}


void func_4467(cvector var_210_cvector, cvector var_211_cvector)
{
	float var_214_float = sqrt(var_211_cvector | var_211_cvector);
	if(var_214_float < 0.000001)
		var_210_cvector = [0.0, 0.0, 0.0];
	var_210_cvector = var_211_cvector / var_214_float;
}


void func_374(object var_0_object, int var_77_int, object var_78_object)
{
	var_0_object = var_78_object;
	bool var_88_bool; object var_89_object;
	object var_90_object;
	func_4461(var_90_object);
	var_90_object = var_89_object;
	func_4288(var_88_bool, var_89_object);
	bool var_183_bool; object var_184_object;
	var_78_object = var_184_object;
	func_4203(var_183_bool, var_184_object, 70.0);
	if(!var_183_bool) { //@nz
		var_77_int = -2;
		return 8;
	}
	object var_84_object;
	@CreateDialog(var_84_object);
	int var_230_int;
	func_4659(var_230_int);
	var_84_object->SetNPCName(var_230_int);
	int var_231_int;
	func_4657(var_231_int);
	var_84_object->SetNPCDescription(var_231_int);
	string var_232_string;
	func_4661(var_232_string);
	var_84_object->SetPhoto(var_232_string);
	string var_233_string;
	func_4663(var_233_string);
	var_84_object->SetPhoto2(var_233_string);
	int var_234_int;
	func_5302(var_234_int);
	var_84_object->SetPlayerName(var_234_int);
	bool var_85_bool;
	@IsOverrideActive(var_85_bool);
	if(var_85_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	@DoDialog(var_84_object);
	object var_243_object; object var_244_object;
	var_78_object = var_243_object;
	var_84_object = var_244_object;
	TaskCall(4);
	func_455(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object);
	TaskReturn();
	bool var_87_bool;
	var_84_object->IsDialogEnd(var_87_bool);
	
	for(;;) {
		var_282_bool = !var_87_bool; //@nz
		if(var_282_bool == 0) goto Label_444;
		@sync();
		var_84_object->IsDialogEnd(var_87_bool);
	}
	
Label_444:
	object var_283_object;
	var_78_object = var_283_object;
	func_4271();
	@StopDialog(var_84_object);
	var_84_object->GetReturnValue(-1);
	int var_86_int = var_77_int;
}
EMIT "Stack[-4] = 0";


void func_1404(object var_0_object, int var_595_int, object var_596_object)
{
	var_0_object = var_596_object;
	bool var_606_bool; object var_607_object;
	object var_608_object;
	func_4461(var_608_object);
	var_608_object = var_607_object;
	func_4288(var_606_bool, var_607_object);
	bool var_609_bool; object var_610_object;
	var_596_object = var_610_object;
	func_4203(var_609_bool, var_610_object, 70.0);
	if(!var_609_bool) { //@nz
		var_595_int = -2;
		return 8;
	}
	object var_602_object;
	@CreateDialog(var_602_object);
	int var_613_int;
	func_4659(var_613_int);
	var_602_object->SetNPCName(var_613_int);
	int var_614_int;
	func_4657(var_614_int);
	var_602_object->SetNPCDescription(var_614_int);
	string var_615_string;
	func_4661(var_615_string);
	var_602_object->SetPhoto(var_615_string);
	string var_616_string;
	func_4663(var_616_string);
	var_602_object->SetPhoto2(var_616_string);
	int var_617_int;
	func_5302(var_617_int);
	var_602_object->SetPlayerName(var_617_int);
	bool var_603_bool;
	@IsOverrideActive(var_603_bool);
	if(var_603_bool != 0) {
		var_595_int = -2;
		return 8;
	}
	@DoDialog(var_602_object);
	object var_619_object; object var_620_object;
	var_596_object = var_619_object;
	var_602_object = var_620_object;
	TaskCall(10);
	func_1485(var_621_object, var_622_object, var_623_string, var_624_bool, var_619_object, var_620_object);
	TaskReturn();
	bool var_605_bool;
	var_602_object->IsDialogEnd(var_605_bool);
	
	for(;;) {
		var_655_bool = !var_605_bool; //@nz
		if(var_655_bool == 0) goto Label_1474;
		@sync();
		var_602_object->IsDialogEnd(var_605_bool);
	}
	
Label_1474:
	object var_656_object;
	var_596_object = var_656_object;
	func_4271();
	@StopDialog(var_602_object);
	var_602_object->GetReturnValue(-1);
	int var_604_int = var_595_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4477(float var_195_float, float var_196_float, float var_197_float, float var_198_float)
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
void func_4990(bool var_894_bool)
{
	int var_896_int;
	func_4488(var_896_int, "k10q01");
	if(var_896_int == 1)
		var_894_bool = true;
	var_894_bool = false;
}


void func_4488(int var_327_int, string var_328_string)
{
	int var_330_int;
	@GetVariable(var_328_string, var_330_int);
	var_330_int = var_327_int;
}


// @pe
void func_5002(bool var_568_bool)
{
	int var_570_int;
	func_4488(var_570_int, "k5q04");
	if(var_570_int == 1)
		var_568_bool = true;
	var_568_bool = false;
}


// @pe
void func_3467(object var_2_object, string var_800_string)
{
	bool var_801_bool;
	func_4665(var_801_bool);
	if(!var_801_bool) //@nz
		return 0;
	if(var_800_string == var_2_object)
		return 0;
	string var_804_string; bool var_805_bool;
	var_800_string = var_804_string;
	if(var_800_string == "")
		var_805_bool = false;
	else
		var_805_bool = true;
	func_4433(var_804_string, var_805_bool);
	var_2_object = var_800_string;
	
}


void func_4493(int var_118_int, int var_119_int)
{
	object var_121_object;
	@CreateIntVector(var_121_object);
	var_121_object->add(var_118_int);
	var_121_object->add(var_119_int);
	@SendWorldWndMessage(3, var_121_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5014(bool var_701_bool, object var_702_object)
{
	object var_704_object;
	var_702_object = var_704_object;
	func_5128(var_704_object);
	bool var_703_bool;
	if(var_703_bool != 0) {
		var_701_bool = true;
		return 0;
	}
	var_701_bool = false;
}


void func_4505(object var_104_object, int var_105_int)
{
	int var_108_int;
	object var_109_object;
	var_104_object = var_109_object;
	int var_111_int;
	func_4172(var_109_object, "money", var_111_int);
	if(var_111_int > 0) {
		@GetInvItemByName(var_108_int, "Money");
		int var_118_int; int var_119_int;
		var_108_int = var_118_int;
		var_105_int = var_119_int;
		func_4493(var_118_int, var_119_int);
	}
}


// @pe
void func_1948(object var_2_object, string var_885_string)
{
	bool var_886_bool;
	func_4665(var_886_bool);
	if(!var_886_bool) //@nz
		return 0;
	if(var_885_string == var_2_object)
		return 0;
	string var_889_string; bool var_890_bool;
	var_885_string = var_889_string;
	if(var_885_string == "")
		var_890_bool = false;
	else
		var_890_bool = true;
	func_4433(var_889_string, var_890_bool);
	var_2_object = var_885_string;
	
}


// @pe
void func_5024(bool var_711_bool, object var_712_object)
{
	object var_714_object;
	var_712_object = var_714_object;
	func_5134(var_714_object);
	bool var_713_bool;
	if(var_713_bool != 0) {
		var_711_bool = true;
		return 0;
	}
	var_711_bool = false;
}


// @pe
void func_2983(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_683_object, object var_684_object)
{
	var_0_object = var_684_object;
	var_1_object = var_683_object;
	var_3_string = false;
	if(1 != 0) {
		func_3092(var_684_object, "Neutral");
		var_0_object->SetMessage(539828); //@t
		var_0_object->ClearReplies(); //@t
		bool var_699_bool = false;
		bool var_700_bool = false;
		bool var_701_bool;
		func_5014(var_701_bool, var_1_object);
		if(var_701_bool != 0) {
			bool var_711_bool;
			func_5024(var_711_bool, var_1_object);
			if(var_711_bool != 0)
				var_700_bool = true;
		}
		if(var_700_bool != 0) {
			bool var_725_bool;
			func_5044(var_1_object);
			if(var_725_bool != 0)
				var_699_bool = true;
		}
		if(var_699_bool != 0)
			var_0_object->AddReply(539829, 41782, 41781); //@t
		bool var_734_bool = false;
		bool var_735_bool = false;
		bool var_736_bool;
		func_5014(var_736_bool, var_1_object);
		if(var_736_bool != 0) {
			bool var_738_bool;
			func_5034(var_738_bool, var_1_object);
			if(var_738_bool != 0)
				var_735_bool = true;
		}
		if(var_735_bool != 0) {
			bool var_745_bool;
			func_5056(var_1_object);
			if(var_745_bool != 0)
				var_734_bool = true;
		}
		if(var_734_bool != 0)
			var_0_object->AddReply(539832, 41785, 41784); //@t
		var_0_object->AddReply(539838, -1, 41790); //@t
		goto Label_3062;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbab";
	}
Label_3062:
	bool var_757_bool;
	func_4665(var_757_bool);
	if(var_757_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3091;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3091:
		return 0;

	}
	
}


// @pe
void func_5034(bool var_738_bool, object var_739_object)
{
	object var_741_object;
	var_739_object = var_741_object;
	func_5140(var_741_object);
	bool var_740_bool;
	if(var_740_bool != 0) {
		var_738_bool = true;
		return 0;
	}
	var_738_bool = false;
}


void func_4524(object var_135_object, object var_136_object, int var_137_int)
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
		func_4493(var_146_int, var_147_int);
	}
	
}


// @pe
void func_5044(bool var_725_bool)
{
	int var_727_int;
	func_4488(var_727_int, "ook8Maria1");
	if(var_727_int == 0) {
		var_725_bool = true;
		return 0;
	}
	var_725_bool = false;
}


void func_2484(object var_0_object, int var_528_int, object var_529_object)
{
	var_0_object = var_529_object;
	bool var_539_bool; object var_540_object;
	object var_541_object;
	func_4461(var_541_object);
	var_541_object = var_540_object;
	func_4288(var_539_bool, var_540_object);
	bool var_542_bool; object var_543_object;
	var_529_object = var_543_object;
	func_4203(var_542_bool, var_543_object, 70.0);
	if(!var_542_bool) { //@nz
		var_528_int = -2;
		return 8;
	}
	object var_535_object;
	@CreateDialog(var_535_object);
	int var_546_int;
	func_4659(var_546_int);
	var_535_object->SetNPCName(var_546_int);
	int var_547_int;
	func_4657(var_547_int);
	var_535_object->SetNPCDescription(var_547_int);
	string var_548_string;
	func_4661(var_548_string);
	var_535_object->SetPhoto(var_548_string);
	string var_549_string;
	func_4663(var_549_string);
	var_535_object->SetPhoto2(var_549_string);
	int var_550_int;
	func_5302(var_550_int);
	var_535_object->SetPlayerName(var_550_int);
	bool var_536_bool;
	@IsOverrideActive(var_536_bool);
	if(var_536_bool != 0) {
		var_528_int = -2;
		return 8;
	}
	@DoDialog(var_535_object);
	object var_552_object; object var_553_object;
	var_529_object = var_552_object;
	var_535_object = var_553_object;
	TaskCall(16);
	func_2565(var_554_object, var_555_object, var_556_string, var_557_bool, var_552_object, var_553_object);
	TaskReturn();
	bool var_538_bool;
	var_535_object->IsDialogEnd(var_538_bool);
	
	for(;;) {
		var_591_bool = !var_538_bool; //@nz
		if(var_591_bool == 0) goto Label_2554;
		@sync();
		var_535_object->IsDialogEnd(var_538_bool);
	}
	
Label_2554:
	object var_592_object;
	var_529_object = var_592_object;
	func_4271();
	@StopDialog(var_535_object);
	var_535_object->GetReturnValue(-1);
	int var_537_int = var_528_int;
}
EMIT "Stack[-4] = 0";


void func_4543(object var_130_object, string var_131_string, int var_132_int)
{
	object var_134_object;
	@CreateInvItem(var_134_object);
	var_134_object->SetItemName(var_131_string);
	object var_135_object; object var_136_object; int var_137_int;
	var_130_object = var_135_object;
	var_134_object = var_136_object;
	var_132_int = var_137_int;
	func_4524(var_135_object, var_136_object, var_137_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5056(bool var_745_bool)
{
	int var_747_int;
	func_4488(var_747_int, "ook8Maria2");
	if(var_747_int == 0) {
		var_745_bool = true;
		return 0;
	}
	var_745_bool = false;
}


// @pe
void func_455(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_243_object, object var_244_object)
{
	var_0_object = var_244_object;
	var_1_object = var_243_object;
	var_3_string = false;
	if(1 != 0) {
		func_513(var_244_object, "Neutral");
		var_0_object->SetMessage(525501); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525502, 27545, 26858); //@t
		var_0_object->AddReply(526269, 27545, 27544); //@t
		goto Label_483;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1cb";
	}
Label_483:
	bool var_269_bool;
	func_4665(var_269_bool);
	if(var_269_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_512;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_512:
		return 0;

	}
	
}


// @pe
void func_5068(bool var_815_bool)
{
	int var_817_int;
	func_4488(var_817_int, "ook8Maria1");
	if(var_817_int == 0) {
		var_815_bool = true;
		return 0;
	}
	var_815_bool = false;
}


// @pe
void func_1485(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_619_object, object var_620_object)
{
	var_0_object = var_620_object;
	var_3_string = false;
	if(1 != 0) {
		func_1548(var_620_object, "Neutral");
		var_0_object->SetMessage(526192); //@t
		var_0_object->ClearReplies(); //@t
		bool var_635_bool;
		func_4978(var_619_object);
		if(var_635_bool != 0)
			var_0_object->AddReply(526193, 30159, 27474); //@t
		var_0_object->AddReply(526196, -1, 27477); //@t
		goto Label_1518;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5d1";
	}
Label_1518:
	bool var_647_bool;
	func_4665(var_647_bool);
	if(var_647_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4426(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1547;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1547:
		return 0;

	}
	
}


// @pe
void func_4556(bool var_166_bool, object var_167_object, float var_168_float)
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
		func_4591(var_173_float);
		bool var_177_bool; object var_178_object; float var_180_float;
		var_167_object = var_178_object;
		var_168_float = var_180_float;
		func_4150(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
		var_166_bool = true;
		return 0;

	}
	
	var_166_bool = false;
}


void func_4054(void)
{
	bool var_83_bool; int var_84_int; int var_85_int; bool var_86_bool;
	@WaitForAnimEnd();
	bool var_87_bool;
	func_4198(var_87_bool);
	if(!var_87_bool) //@nz
		return 12;
	int var_89_int;
	func_4640(var_89_int);
	int var_81_int;
	var_89_int = var_81_int;
	int var_82_int = 0;
	
	for(;;) {
		bool var_102_bool = false;
		if(var_82_int < 5) {
			bool var_105_bool;
			func_4198(var_105_bool);
			if(var_105_bool != 0)
				var_102_bool = true;
		}
		if(var_102_bool != 0) {
			if(!var_81_int) { //@nz
				@Sleep(3, var_83_bool);
				if(!var_83_bool) { //@nz
				} else {
			} else {
			@irand(var_84_int, var_81_int);
			@irand(var_85_int, 5);
			if(var_85_int != 0)
				var_84_int = 0;
			string var_116_string; int var_117_int;
			var_84_int = var_117_int;
			func_4633(var_116_string, var_117_int);
			@PlayAnimation("all", var_116_string);
			@WaitForAnimEnd(var_86_bool);
			var_118_bool = !var_86_bool; //@nz
			if(var_118_bool == 0) goto Label_4109;
			goto Label_4120;
			}
				Label_4109:
					bool var_109_bool;
					func_4123(var_109_bool);
					var_110_bool = !var_109_bool; //@nz
					if(var_110_bool == 0) goto Label_4115;
			}
		}
	Label_4120:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4115:
		@ResetAAS();
		var_82_int += 1;
	}
	
}


// @pe
void func_5080(bool var_830_bool)
{
	int var_832_int;
	func_4488(var_832_int, "ook8Maria2");
	if(var_832_int == 0) {
		var_830_bool = true;
		return 0;
	}
	var_830_bool = false;
}


// @pe
void func_5092(bool var_909_bool)
{
	int var_911_int;
	func_4488(var_911_int, "ook10Maria1");
	if(var_911_int == 0) {
		var_909_bool = true;
		return 0;
	}
	var_909_bool = false;
}


void func_4591(float var_173_float)
{
	object var_175_object;
	@CreateFloatVector(var_175_object);
	var_175_object->add(var_173_float);
	@SendWorldWndMessage(16, var_175_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5104(bool var_924_bool)
{
	int var_926_int;
	func_4488(var_926_int, "ook10Maria2");
	if(var_926_int == 0) {
		var_924_bool = true;
		return 0;
	}
	var_924_bool = false;
}


void func_4601(bool var_89_bool, string var_90_string, string var_91_string)
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
void func_5116(bool var_421_bool)
{
	int var_423_int;
	func_4488(var_423_int, "ook3Maria2");
	if(var_423_int == 0) {
		var_421_bool = true;
		return 0;
	}
	var_421_bool = false;
}


