// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool;
		func_5776(var_20_bool);
		if(var_20_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_4729();
			if(var_20_bool == 38466) {
				object var_25_object = var_1_object;
				func_4907(var_0_bool);
			}
			if(var_20_bool == 38472) {
				object var_30_object = var_1_object;
				func_4907(var_0_bool);
			}
			if(var_20_bool == 38469) {
				object var_34_object = var_1_object;
				func_4907(var_0_bool);
			}
			if(var_20_bool == 38470) {
				object var_38_object = var_1_object;
				func_4907(var_0_bool);
			}
			if(var_20_bool == 38471) {
				object var_42_object = var_1_object;
				func_4907(var_0_bool);
			}
			if(var_19_object == 38464) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536636); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_59_bool = false;
				bool var_60_bool;
				func_4912(var_1_object);
				if(var_60_bool != 0) {
					bool var_68_bool;
					func_4948(var_68_bool, var_1_object);
					if(var_68_bool != 0)
						var_59_bool = true;
				}
				if(var_59_bool != 0)
					var_0_bool->AddReply(536638, -1, 38466); //@t
				bool var_82_bool = false;
				bool var_83_bool;
				func_4912(var_1_object);
				if(var_83_bool != 0) {
					bool var_85_bool;
					func_4948(var_85_bool, var_1_object);
					if(!var_85_bool) //@nz
						var_82_bool = true;
				}
				if(var_82_bool != 0)
					var_0_bool->AddReply(536644, -1, 38472); //@t
				bool var_91_bool = false;
				bool var_92_bool;
				func_4924(var_1_object);
				if(var_92_bool != 0) {
					bool var_98_bool;
					func_4948(var_98_bool, var_1_object);
					if(var_98_bool != 0)
						var_91_bool = true;
				}
				if(var_91_bool != 0)
					var_0_bool->AddReply(536639, 38468, 38467); //@t
				bool var_103_bool = false;
				bool var_104_bool;
				func_4924(var_1_object);
				if(var_104_bool != 0) {
					bool var_106_bool;
					func_4948(var_106_bool, var_1_object);
					if(!var_106_bool) //@nz
						var_103_bool = true;
				}
				if(var_103_bool != 0)
					var_0_bool->AddReply(536642, -1, 38470); //@t
				bool var_112_bool;
				func_4936(var_1_object);
				if(var_112_bool != 0)
					var_0_bool->AddReply(536643, -1, 38471); //@t
				bool var_121_bool = false;
				bool var_122_bool;
				func_4958(var_122_bool, var_1_object);
				if(var_122_bool != 0) {
					bool var_128_bool;
					func_4912(var_1_object);
					if(var_128_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0)
					var_0_bool->AddReply(536645, 38474, 38473); //@t
				bool var_133_bool;
				func_4968(var_133_bool, var_1_object);
				if(var_133_bool != 0)
					var_0_bool->AddReply(536663, 38493, 38492); //@t
				bool var_142_bool;
				func_4978(var_142_bool, var_1_object);
				if(var_142_bool != 0)
					var_0_bool->AddReply(536685, 38517, 38516); //@t
				bool var_151_bool;
				func_4988(var_151_bool, var_1_object);
				if(var_151_bool != 0)
					var_0_bool->AddReply(536710, 38542, 38541); //@t
				bool var_160_bool;
				func_4998(var_160_bool, var_1_object);
				if(var_160_bool != 0)
					var_0_bool->AddReply(536747, 38579, 38578); //@t
				bool var_169_bool;
				func_5008(var_169_bool, var_1_object);
				if(var_169_bool != 0)
					var_0_bool->AddReply(536769, 38602, 38601); //@t
				bool var_178_bool;
				func_5018(var_178_bool, var_1_object);
				if(var_178_bool != 0)
					var_0_bool->AddReply(536782, 38617, 38616); //@t
				bool var_187_bool;
				func_5028(var_187_bool, var_1_object);
				if(var_187_bool != 0)
					var_0_bool->AddReply(536792, 38627, 38626); //@t
				bool var_196_bool;
				func_5038(var_196_bool, var_1_object);
				if(var_196_bool != 0)
					var_0_bool->AddReply(536814, 38651, 38650); //@t
				bool var_205_bool;
				func_5048(var_205_bool, var_1_object);
				if(var_205_bool != 0)
					var_0_bool->AddReply(536833, 38670, 38669); //@t
				bool var_214_bool;
				func_5058(var_214_bool, var_1_object);
				if(var_214_bool != 0)
					var_0_bool->AddReply(536843, 38680, 38679); //@t
				bool var_223_bool;
				func_4912(var_1_object);
				if(var_223_bool != 0)
					var_0_bool->AddReply(536850, -1, 38686); //@t
				bool var_228_bool;
				func_4924(var_1_object);
				if(var_228_bool != 0)
					var_0_bool->AddReply(536851, -1, 38687); //@t
				bool var_233_bool;
				func_4936(var_1_object);
				if(var_233_bool != 0)
					var_0_bool->AddReply(536852, -1, 38688); //@t
				return 0;
			}
			if(var_19_object == 38680) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536845, 38682, 38681); //@t
				var_0_bool->AddReply(536849, -1, 38685); //@t
				return 0;
			}
			if(var_19_object == 38682) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536846); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536847, -1, 38683); //@t
				var_0_bool->AddReply(536848, -1, 38684); //@t
				return 0;
			}
			if(var_19_object == 38670) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536834); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536835, 38672, 38671); //@t
				var_0_bool->AddReply(536842, -1, 38678); //@t
				return 0;
			}
			if(var_19_object == 38672) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536836); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536837, 38674, 38673); //@t
				var_0_bool->AddReply(536841, -1, 38677); //@t
				return 0;
			}
			if(var_19_object == 38674) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536838); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536839, -1, 38675); //@t
				var_0_bool->AddReply(536840, -1, 38676); //@t
				return 0;
			}
			if(var_19_object == 38651) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536815); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536816, 38653, 38652); //@t
				var_0_bool->AddReply(536823, 38660, 38659); //@t
				var_0_bool->AddReply(536832, -1, 38668); //@t
				return 0;
			}
			if(var_19_object == 38660) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536824); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536825, 38662, 38661); //@t
				var_0_bool->AddReply(536830, -1, 38666); //@t
				var_0_bool->AddReply(536831, -1, 38667); //@t
				return 0;
			}
			if(var_19_object == 38662) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536826); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536827, 38664, 38663); //@t
				return 0;
			}
			if(var_19_object == 38664) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536828); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536829, -1, 38665); //@t
				return 0;
			}
			if(var_19_object == 38653) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536817); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536818, 38655, 38654); //@t
				var_0_bool->AddReply(536822, -1, 38658); //@t
				return 0;
			}
			if(var_19_object == 38655) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536819); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536820, -1, 38656); //@t
				var_0_bool->AddReply(536821, -1, 38657); //@t
				return 0;
			}
			if(var_19_object == 38627) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536793); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536794, 38629, 38628); //@t
				var_0_bool->AddReply(536806, 38642, 38641); //@t
				var_0_bool->AddReply(536813, -1, 38649); //@t
				return 0;
			}
			if(var_19_object == 38642) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536807); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536808, 38644, 38643); //@t
				var_0_bool->AddReply(536812, 38644, 38647); //@t
				return 0;
			}
			if(var_19_object == 38644) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536809); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536810, -1, 38645); //@t
				var_0_bool->AddReply(536811, -1, 38646); //@t
				return 0;
			}
			if(var_19_object == 38629) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536795); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536796, 38631, 38630); //@t
				var_0_bool->AddReply(536805, -1, 38640); //@t
				return 0;
			}
			if(var_19_object == 38631) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536797); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536798, 38633, 38632); //@t
				var_0_bool->AddReply(536804, -1, 38639); //@t
				return 0;
			}
			if(var_19_object == 38633) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536799); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536800, 38635, 38634); //@t
				var_0_bool->AddReply(536803, 38635, 38637); //@t
				return 0;
			}
			if(var_19_object == 38635) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536801); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536802, -1, 38636); //@t
				return 0;
			}
			if(var_19_object == 38617) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536783); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536784, 38619, 38618); //@t
				var_0_bool->AddReply(536791, -1, 38625); //@t
				return 0;
			}
			if(var_19_object == 38619) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536785); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536786, 38621, 38620); //@t
				var_0_bool->AddReply(536790, -1, 38624); //@t
				return 0;
			}
			if(var_19_object == 38621) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536787); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536788, -1, 38622); //@t
				var_0_bool->AddReply(536789, -1, 38623); //@t
				return 0;
			}
			if(var_19_object == 38602) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536770); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536771, 38604, 38603); //@t
				var_0_bool->AddReply(536781, -1, 38615); //@t
				return 0;
			}
			if(var_19_object == 38604) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536772); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536773, 38606, 38605); //@t
				var_0_bool->AddReply(536780, 38606, 38613); //@t
				return 0;
			}
			if(var_19_object == 38606) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536775, 38608, 38607); //@t
				var_0_bool->AddReply(536779, 38608, 38611); //@t
				return 0;
			}
			if(var_19_object == 38608) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536776); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536777, -1, 38609); //@t
				var_0_bool->AddReply(536778, -1, 38610); //@t
				return 0;
			}
			if(var_19_object == 38579) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536748); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536749, 38581, 38580); //@t
				var_0_bool->AddReply(536761, 38593, 38592); //@t
				var_0_bool->AddReply(536768, -1, 38600); //@t
				return 0;
			}
			if(var_19_object == 38593) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536762); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536763, 38595, 38594); //@t
				var_0_bool->AddReply(536767, 38595, 38598); //@t
				return 0;
			}
			if(var_19_object == 38595) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536764); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536765, -1, 38596); //@t
				var_0_bool->AddReply(536766, -1, 38597); //@t
				return 0;
			}
			if(var_19_object == 38581) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536751, 38583, 38582); //@t
				var_0_bool->AddReply(536760, -1, 38591); //@t
				return 0;
			}
			if(var_19_object == 38583) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536752); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536753, 38585, 38584); //@t
				return 0;
			}
			if(var_19_object == 38585) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536754); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536755, 38587, 38586); //@t
				var_0_bool->AddReply(536759, -1, 38590); //@t
				return 0;
			}
			if(var_19_object == 38587) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536757, -1, 38588); //@t
				var_0_bool->AddReply(536758, -1, 38589); //@t
				return 0;
			}
			if(var_19_object == 38542) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536711); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536712, 38544, 38543); //@t
				var_0_bool->AddReply(536730, 38562, 38561); //@t
				var_0_bool->AddReply(536746, -1, 38577); //@t
				return 0;
			}
			if(var_19_object == 38562) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536731); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536732, 38564, 38563); //@t
				var_0_bool->AddReply(536745, -1, 38576); //@t
				return 0;
			}
			if(var_19_object == 38564) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536733); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536734, 38566, 38565); //@t
				var_0_bool->AddReply(536744, -1, 38575); //@t
				return 0;
			}
			if(var_19_object == 38566) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536735); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536736, -1, 38567); //@t
				var_0_bool->AddReply(536737, 38569, 38568); //@t
				return 0;
			}
			if(var_19_object == 38569) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536738); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536739, 38571, 38570); //@t
				var_0_bool->AddReply(536743, -1, 38574); //@t
				return 0;
			}
			if(var_19_object == 38571) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536740); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536741, -1, 38572); //@t
				var_0_bool->AddReply(536742, -1, 38573); //@t
				return 0;
			}
			if(var_19_object == 38544) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536713); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536714, 38546, 38545); //@t
				var_0_bool->AddReply(536729, -1, 38560); //@t
				return 0;
			}
			if(var_19_object == 38546) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536716, 38548, 38547); //@t
				var_0_bool->AddReply(536726, 38558, 38557); //@t
				return 0;
			}
			if(var_19_object == 38558) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536727); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536728, -1, 38559); //@t
				return 0;
			}
			if(var_19_object == 38548) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536717); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536718, 38550, 38549); //@t
				return 0;
			}
			if(var_19_object == 38550) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536719); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536720, 38552, 38551); //@t
				var_0_bool->AddReply(536723, 38555, 38554); //@t
				return 0;
			}
			if(var_19_object == 38555) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536724); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536725, -1, 38556); //@t
				return 0;
			}
			if(var_19_object == 38552) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536721); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536722, -1, 38553); //@t
				return 0;
			}
			if(var_19_object == 38517) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536686); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536687, 38519, 38518); //@t
				var_0_bool->AddReply(536699, 38531, 38530); //@t
				var_0_bool->AddReply(536709, -1, 38540); //@t
				return 0;
			}
			if(var_19_object == 38531) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536700); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536701, 38533, 38532); //@t
				var_0_bool->AddReply(536705, 38537, 38536); //@t
				return 0;
			}
			if(var_19_object == 38537) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536706); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536707, -1, 38538); //@t
				var_0_bool->AddReply(536708, -1, 38539); //@t
				return 0;
			}
			if(var_19_object == 38533) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536702); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536703, -1, 38534); //@t
				var_0_bool->AddReply(536704, -1, 38535); //@t
				return 0;
			}
			if(var_19_object == 38519) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536689, 38521, 38520); //@t
				var_0_bool->AddReply(536695, 38527, 38526); //@t
				return 0;
			}
			if(var_19_object == 38527) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536696); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536697, -1, 38528); //@t
				var_0_bool->AddReply(536698, -1, 38529); //@t
				return 0;
			}
			if(var_19_object == 38521) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536690); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536691, -1, 38522); //@t
				var_0_bool->AddReply(536692, 38524, 38523); //@t
				return 0;
			}
			if(var_19_object == 38524) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536693); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536694, -1, 38525); //@t
				return 0;
			}
			if(var_19_object == 38493) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536665, 38495, 38494); //@t
				var_0_bool->AddReply(536675, 38507, 38506); //@t
				var_0_bool->AddReply(536684, -1, 38515); //@t
				return 0;
			}
			if(var_19_object == 38507) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536676); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536677, 38509, 38508); //@t
				return 0;
			}
			if(var_19_object == 38509) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536679, 38511, 38510); //@t
				var_0_bool->AddReply(536683, -1, 38514); //@t
				return 0;
			}
			if(var_19_object == 38511) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536680); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536681, -1, 38512); //@t
				var_0_bool->AddReply(536682, -1, 38513); //@t
				return 0;
			}
			if(var_19_object == 38495) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536666); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536667, 38497, 38496); //@t
				var_0_bool->AddReply(536674, 38499, 38504); //@t
				return 0;
			}
			if(var_19_object == 38497) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536669, 38499, 38498); //@t
				var_0_bool->AddReply(536673, 38499, 38502); //@t
				return 0;
			}
			if(var_19_object == 38499) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536670); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536671, -1, 38500); //@t
				var_0_bool->AddReply(536672, -1, 38501); //@t
				return 0;
			}
			if(var_19_object == 38474) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536646); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536647, 38476, 38475); //@t
				var_0_bool->AddReply(536653, 38482, 38481); //@t
				var_0_bool->AddReply(536662, -1, 38491); //@t
				return 0;
			}
			if(var_19_object == 38482) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536654); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536655, 38484, 38483); //@t
				var_0_bool->AddReply(536659, 38488, 38487); //@t
				return 0;
			}
			if(var_19_object == 38488) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536661, 38484, 38489); //@t
				return 0;
			}
			if(var_19_object == 38484) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536657, -1, 38485); //@t
				var_0_bool->AddReply(536658, -1, 38486); //@t
				return 0;
			}
			if(var_19_object == 38476) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536648); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536649, 38478, 38477); //@t
				var_0_bool->AddReply(536652, -1, 38480); //@t
				return 0;
			}
			if(var_19_object == 38478) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536651, -1, 38479); //@t
				return 0;
			}
			if(var_19_object == 38468) {
				func_399(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536640); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536641, -1, 38469); //@t
				return 0;
			}
			var_3_object = true;
			bool var_893_bool;
			func_5776(var_893_bool);
			if(var_893_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a6";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5722(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			object var_26_object;
			var_19_bool = var_26_object;
			func_5725(var_26_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_5731();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, bool var_20_bool, object var_21_object, bool var_22_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@SensePlayerOnly(true);
		func_5778();
		func_2417();
	
		for(;;) {
			var_2_object = false;
			func_2678(var_17_object, var_18_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5722(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2613(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_5725(var_29_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5453(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5536(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2613(var_21_int);
			object var_72_object;
			var_19_bool = var_72_object;
			func_5546(var_72_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5830(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5629(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_2613(var_23_int);
				object var_124_object;
				var_19_bool = var_124_object;
				func_5636(var_124_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5671(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_2613(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_5674();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5367(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_2613(var_22_int);
			object var_52_object; string var_53_string;
			var_19_object = var_52_object;
			var_20_bool = var_53_string;
			func_5399(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_20_bool = var_129_string;
			var_19_object = var_130_object;
			func_5676(var_128_int, var_129_string, var_130_object);
			var_128_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2554;
			if(var_22_int > 1)
				func_2613(var_22_int);
			string var_176_string; object var_177_object;
			var_20_bool = var_176_string;
			var_19_object = var_177_object;
			func_5688(var_176_string, var_177_object);
		}
	Label_2554:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; string var_21_string;
		func_5466(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_2613(var_21_string);
			string var_30_string;
			var_19_bool = var_30_string;
			func_5482(var_30_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; object var_21_object;
		func_5424(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_2613(var_21_object);
			object var_33_object;
			var_19_bool = var_33_object;
			func_5447(var_33_object);
		} else {
			object var_35_object;
			func_2638(var_35_object, var_35_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_2638(var_20_object, var_20_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_2613(var_18_bool);
		func_5731();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_2613(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_5343();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5722(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3016();
			object var_28_object;
			var_19_bool = var_28_object;
			func_5725(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5453(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5536(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3016();
			object var_71_object;
			var_19_bool = var_71_object;
			func_5546(var_71_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5830(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5629(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3016();
				object var_123_object;
				var_19_bool = var_123_object;
				func_5636(var_123_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5671(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3016();
			object var_28_object;
			var_19_bool = var_28_object;
			func_5674();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5367(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3016();
			object var_51_object; string var_52_string;
			var_19_object = var_51_object;
			var_20_bool = var_52_string;
			func_5399(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_20_bool = var_128_string;
			var_19_object = var_129_object;
			func_5676(var_127_int, var_128_string, var_129_object);
			var_127_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_2899;
			if(var_22_int > 1)
				func_3016();
			string var_175_string; object var_176_object;
			var_20_bool = var_175_string;
			var_19_object = var_176_object;
			func_5688(var_175_string, var_176_object);
		}
	Label_2899:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5466(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3016();
			string var_29_string;
			var_19_bool = var_29_string;
			func_5482(var_29_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3016();
		func_5731();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5424(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3016();
			object var_32_object;
			var_19_bool = var_32_object;
			func_5447(var_32_object);
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5722(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3220();
			object var_30_object;
			var_19_bool = var_30_object;
			func_5725(var_30_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_5453(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_5536(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3220();
			object var_73_object;
			var_19_bool = var_73_object;
			func_5546(var_73_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_5830(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_5629(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3220();
				object var_125_object;
				var_19_bool = var_125_object;
				func_5636(var_125_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_5671(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3220();
			object var_30_object;
			var_19_bool = var_30_object;
			func_5674();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_5367(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3220();
			object var_53_object; string var_54_string;
			var_19_object = var_53_object;
			var_20_bool = var_54_string;
			func_5399(var_53_object, var_54_string);
		} else {
			int var_129_int; string var_130_string; object var_131_object;
			var_20_bool = var_130_string;
			var_19_object = var_131_object;
			func_5676(var_129_int, var_130_string, var_131_object);
			var_129_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_3205;
			if(var_22_int > 1)
				func_3220();
			string var_177_string; object var_178_object;
			var_20_bool = var_177_string;
			var_19_object = var_178_object;
			func_5688(var_177_string, var_178_object);
		}
	Label_3205:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_5466(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3220();
			string var_31_string;
			var_19_bool = var_31_string;
			func_5482(var_31_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_3220();
		object var_22_object;
		var_19_bool = var_22_object;
		func_5343();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 111)
			return 4;
		bool var_26_bool;
		func_4395(var_26_bool, var_0_bool);
		if(!var_26_bool) { //@nz
			func_3220();
			return 4;
		}
		cvector var_22_cvector;
		@GetDirection(var_22_cvector);
		cvector var_63_cvector;
		func_4249(var_63_cvector, var_0_bool);
		cvector var_23_cvector;
		var_63_cvector = var_23_cvector;
		float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
		var_22_cvector = var_70_cvector;
		var_23_cvector = var_71_cvector;
		func_4846(var_69_float, var_70_cvector, var_71_cvector);
		if(var_69_float < 0.49999997)
			func_4545(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3220();
		func_5731();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_5424(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3220();
			object var_34_object;
			var_19_bool = var_34_object;
			func_5447(var_34_object);
		}
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_4042(var_18_bool);
		func_5731();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_4887(var_1_object);
		} else {
			int var_27_int;
			func_4186(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_4718(var_23_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_4042(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_5343();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_5322(var_20_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_4463(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_4531(var_27_float, var_28_cvector, var_29_cvector);
}


void func_3072(bool var_0_bool)
{
	func_4718(var_0_bool);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_370_bool;
		func_5776(var_370_bool);
		if(var_370_bool == 0) goto Label_15;
		func_4705("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


// @pe
void func_5636(object var_125_object)
{
	object var_126_object;
	var_125_object = var_126_object;
	func_5546(var_126_object);
}


// @pe
void func_5124(bool var_265_bool)
{
	int var_267_int;
	func_4878(var_267_int);
	var_265_bool = var_267_int == 8;
}


void func_5642(bool var_28_bool, object var_29_object, object var_30_object, float var_31_float, bool var_32_bool)
{
	object var_36_object;
	var_30_object = var_36_object;
	bool var_35_bool;
	func_5554(var_35_bool, var_36_object, !var_32_bool);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_34_bool;
	@CanSee(var_34_bool, var_29_object);
	bool var_74_bool = true;
	if(var_34_bool != 1) {
		float var_76_float; object var_77_object;
		var_29_object = var_77_object;
		func_4256(var_76_float, var_77_object);
		var_85_bool = var_76_float <= (var_31_float * var_31_float);
		if(var_85_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 0) {
		var_28_bool = true;
		return 2;
	}
	var_28_bool = false;
}


// @pe
void func_5131(bool var_274_bool)
{
	int var_276_int;
	func_4878(var_276_int);
	var_274_bool = var_276_int == 9;
}


// @pe
void func_5138(bool var_283_bool)
{
	int var_285_int;
	func_4878(var_285_int);
	var_283_bool = var_285_int == 10;
}


void func_4629(void)
{
	bool var_330_bool;
	@CameraSwitchToNormal();
	bool var_331_bool;
	func_5776(var_331_bool);
	if(var_331_bool != 0) {
	} else {
		@HasAnimationTrack(var_330_bool, "head");
		if(var_330_bool == 0) goto Label_4645;
		@UnlookAsync("head");
	}
Label_4645:
	
}


// @pe
void func_5145(bool var_292_bool)
{
	int var_294_int;
	func_4878(var_294_int);
	var_292_bool = var_294_int == 11;
}


void func_3613(bool var_0_bool, object var_1_object, bool var_461_bool, float var_462_float)
{
	string var_470_string;
	func_3952(var_470_string);
	int var_467_int;
	@irand(var_467_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_4896();
	@PlayAnimation("all", ("attack_begin" + (var_467_int + 1)));
	@WaitForAnimEnd();
	int var_469_int;
	func_3920(var_469_int, var_470_string);
	bool var_495_bool;
	func_4395(var_495_bool, var_0_bool);
	if(!var_495_bool) { //@nz
		@StopAsync();
		var_461_bool = false;
		return 8;
	}
	float var_498_float; int var_499_int;
	var_462_float = var_498_float;
	var_467_int = var_499_int;
	func_3574(var_470_string, var_498_float, var_499_int);
	bool var_468_bool;
	@HasAnimation(var_468_bool, "all", ("attack_middle" + var_467_int));
	if(var_468_bool != 0) {
		func_4896();
		@PlayAnimation("all", ("attack_middle" + var_467_int));
		@WaitForAnimEnd();
		func_3952(var_470_string);
		bool var_583_bool;
		func_4395(var_583_bool, var_0_bool);
		if(!var_583_bool) { //@nz
			@StopAsync();
			var_461_bool = false;
			return 8;
		}
		float var_586_float; int var_587_int;
		var_462_float = var_586_float;
		func_3574(var_470_string, var_586_float, var_587_int);
		var_469_int = 1;

		for(;;) {
			var_470_string = (("attack_middle" + var_587_int) + "_") + var_469_int;
			@HasAnimation(var_468_bool, "all", var_470_string);
			if(!var_468_bool) { //@nz
			} else {
				func_4896();
				@PlayAnimation("all", var_470_string);
				@WaitForAnimEnd();
				func_3952(var_470_string);
				bool var_609_bool;
				func_4395(var_609_bool, var_0_bool);
				if(!var_609_bool) { //@nz
					@StopAsync();
					var_461_bool = false;
					return 8;
				}
				float var_612_float; int var_613_int;
				var_462_float = var_612_float;
				var_467_int = var_613_int;
				func_3574(var_470_string, var_612_float, var_613_int);
				var_469_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_467_int));
		bool var_598_bool;
		func_3966(var_598_bool);
		if(var_598_bool != 0) {
			bool var_599_bool;
			func_3750(var_599_bool, 0.75);
			@StopAsync();
		}
		var_461_bool = true;
		return 8;

	}
}


void func_5152(int var_106_int)
{
	int var_108_int;
	@GetVariable("branch", var_108_int);
	if(var_108_int == 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0x142f";
	}
	if(var_108_int == 1) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
}


// @pe
void func_4646(bool var_336_bool, object var_337_object)
{
	object var_339_object;
	var_337_object = var_339_object;
	bool var_338_bool;
	func_4654(var_338_bool, var_339_object, (float)70);
	var_338_bool = var_336_bool;
}


// @pe
void func_5671(int var_22_int)
{
	var_22_int = 0;
}


void func_40(bool var_0_bool, int var_44_int, object var_45_object)
{
	var_0_bool = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_4561(var_55_bool, var_56_object, 70.0);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_102_int;
	func_5770(var_102_int);
	var_51_object->SetNPCName(var_102_int);
	int var_103_int;
	func_5768(var_103_int);
	var_51_object->SetNPCDescription(var_103_int);
	string var_104_string;
	func_5772(var_104_string);
	var_51_object->SetPhoto(var_104_string);
	string var_105_string;
	func_5774(var_105_string);
	var_51_object->SetPhoto2(var_105_string);
	int var_106_int;
	func_5152(var_106_int);
	var_51_object->SetPlayerName(var_106_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_115_object; object var_116_object;
	var_45_object = var_115_object;
	var_51_object = var_116_object;
	TaskCall(2);
	func_114(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_327_bool = !var_54_bool; //@nz
		if(var_327_bool == 0) goto Label_103;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_103:
	object var_328_object;
	var_45_object = var_328_object;
	func_4629();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5674(void)
{
}


// @pe
void func_5676(int var_129_int, string var_130_string, object var_131_object)
{
	if(var_130_string == "killme") {
		int var_134_int; object var_135_object;
		var_131_object = var_135_object;
		func_5698(var_134_int, var_135_object);
		var_134_int = var_129_int;
		return 0;
	}
	var_129_int = 0;
}


void func_4654(bool var_338_bool, object var_339_object, float var_340_float)
{
	cvector var_350_cvector;
	var_339_object->GetPosition(var_350_cvector);
	float var_349_float;
	var_339_object->GetEyesHeight(var_349_float);
	var_357_float = GetByIndex(var_350_cvector, 1);
	SetByIndex(var_350_cvector, 1) = (var_357_float + var_349_float);
	cvector var_351_cvector;
	@GetPosition(var_351_cvector);
	@GetEyesHeight(var_349_float);
	var_358_float = GetByIndex(var_351_cvector, 1);
	SetByIndex(var_351_cvector, 1) = (var_358_float + var_349_float);
	cvector var_352_cvector = var_350_cvector - var_351_cvector;
	var_359_float = GetByIndex(var_352_cvector, 1);
	SetByIndex(var_352_cvector, 1) = (float)0;
	var_361_float = sqrt(var_352_cvector | var_352_cvector);
	var_352_cvector /= var_361_float;
	cvector var_353_cvector = -var_352_cvector;
	cvector var_354_cvector = (var_352_cvector * var_340_float) - [0.0, 10.0, 0.0];
	bool var_356_bool;
	@IsOverrideActive(var_356_bool);
	if(var_356_bool != 0)
		var_338_bool = false;
	@StopWorld();
	@CameraTransit((var_351_cvector + var_354_cvector), var_353_cvector);
	var_365_float = GetByIndex(var_354_cvector, 0);
	var_366_float = GetByIndex(var_354_cvector, 2);
	@Rotate(var_365_float, var_366_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_338_bool = true;
}


void func_5169(int var_163_int)
{
	int var_165_int;
	@GetVariable("branch", var_165_int);
	var_165_int = var_163_int;
}


void func_2613(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2749(var_18_object, var_19_bool);
}


// @pe
void func_5175(object var_36_object)
{
	int var_37_int;
	func_5169(var_37_int);
	if(var_37_int == 1)
		@WorkWithCorpse(var_36_object);
	else
		@Barter(var_36_object);
	
}


// @pe
void func_5688(string var_177_string, object var_178_object)
{
	if(var_177_string == "killme") {
		object var_181_object;
		var_178_object = var_181_object;
		func_5716(var_181_object);
	}
}


void func_2621(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2756(var_23_bool, var_24_int);
}


// @pe
void func_5698(int var_134_int, object var_135_object)
{
	object var_137_object;
	var_135_object = var_137_object;
	bool var_136_bool;
	func_4395(var_136_bool, var_137_object);
	if(!var_136_bool) { //@nz
		var_134_int = 0;
		return 0;
	}
	bool var_171_bool; object var_172_object;
	var_135_object = var_172_object;
	func_5827(var_172_object);
	if(var_171_bool != 0)
		var_134_int = 2;
	else
		var_134_int = 0;
	
}


void func_5188(int var_115_int, int var_116_int)
{
	if(var_115_int > var_116_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_128_int = 0;
	if(var_115_int != var_116_int) {
		@irand(var_128_int, (var_116_int - var_115_int));
	} else if(var_115_int == 0) {
		return 4;
	}
	var_128_int += var_115_int;
	if(var_128_int == 0)
		return 4;
	int var_136_int;
	func_5317(var_136_int, "Money");
	bool var_129_bool;
	@AddItem(var_129_bool, var_136_int, 0, var_128_int);
	
}


void func_2638(object var_2_object, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_4395(var_25_bool, var_26_object);
	if(!var_25_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_23_bool;
	@IsPlayerActor(var_26_object, var_23_bool);
	if(!var_23_bool) //@nz
		return 4;
	int var_62_int; object var_63_object;
	var_20_object = var_63_object;
	func_5519(var_63_object);
	int var_24_int;
	var_62_int = var_24_int;
	if(var_24_int > 0) {
		if(var_24_int > 1)
			func_2621(var_24_int);
		object var_70_object;
		var_20_object = var_70_object;
		func_5528(var_70_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_5716(object var_181_object)
{
	object var_182_object;
	var_181_object = var_182_object;
	func_5546(var_182_object);
}


// @pe
void func_5722(int var_22_int)
{
	var_22_int = 2;
}


// @pe
void func_4186(bool var_0_bool, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_4224(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_5725(object var_30_object)
{
	object var_31_object;
	func_5785(var_31_object, var_31_object);
}


// @pe
void func_4701(void)
{
	@CameraSwitchToNormal();
}


void func_4705(string var_316_string)
{
	float var_319_float; float var_320_float;
	@lshGetAnimTimes(var_316_string, var_319_float, var_320_float);
	@lshPlayAnimation(var_319_float, var_320_float, false);
}


void func_5731(void)
{
}


void func_5219(string var_169_string)
{
	object var_173_object;
	@CreateInvItem(var_173_object);
	var_173_object->SetItemName(var_169_string);
	var_173_object->SetProperty("Organ", 1);
	int var_174_int;
	var_173_object->GetItemID(var_174_int);
	bool var_175_bool;
	@AddItem(var_175_bool, var_173_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_5732(bool var_25_bool)
{
	var_25_bool = false;
}


// @pe
void func_5735(void)
{
}


void func_4712(string var_126_string, bool var_127_bool)
{
	float var_132_float; float var_133_float;
	@lshGetAnimTimes(var_126_string, var_132_float, var_133_float);
	@lshPlayAnimation(var_132_float, var_133_float, var_127_bool);
}


void func_5737(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@CanSee(var_35_bool, var_33_object);
	var_32_bool = true;
	if(var_35_bool != 1) {
		float var_37_float; object var_38_object;
		var_33_object = var_38_object;
		func_4256(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 2250000;
		if(var_46_bool != 1)
			var_32_bool = false;
	}
}


void func_4718(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_4208(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_115_object, object var_116_object)
{
	var_0_bool = var_116_object;
	var_1_object = var_115_object;
	var_3_object = false;
	if(1 != 0) {
		func_399(var_116_object, "Neutral");
		var_0_bool->SetMessage(536636); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_135_bool = false;
		bool var_136_bool;
		func_4912(var_1_object);
		if(var_136_bool != 0) {
			bool var_144_bool;
			func_4948(var_144_bool, var_1_object);
			if(var_144_bool != 0)
				var_135_bool = true;
		}
		if(var_135_bool != 0)
			var_0_bool->AddReply(536638, -1, 38466); //@t
		bool var_158_bool = false;
		bool var_159_bool;
		func_4912(var_1_object);
		if(var_159_bool != 0) {
			bool var_161_bool;
			func_4948(var_161_bool, var_1_object);
			if(!var_161_bool) //@nz
				var_158_bool = true;
		}
		if(var_158_bool != 0)
			var_0_bool->AddReply(536644, -1, 38472); //@t
		bool var_167_bool = false;
		bool var_168_bool;
		func_4924(var_1_object);
		if(var_168_bool != 0) {
			bool var_174_bool;
			func_4948(var_174_bool, var_1_object);
			if(var_174_bool != 0)
				var_167_bool = true;
		}
		if(var_167_bool != 0)
			var_0_bool->AddReply(536639, 38468, 38467); //@t
		bool var_179_bool = false;
		bool var_180_bool;
		func_4924(var_1_object);
		if(var_180_bool != 0) {
			bool var_182_bool;
			func_4948(var_182_bool, var_1_object);
			if(!var_182_bool) //@nz
				var_179_bool = true;
		}
		if(var_179_bool != 0)
			var_0_bool->AddReply(536642, -1, 38470); //@t
		bool var_188_bool;
		func_4936(var_1_object);
		if(var_188_bool != 0)
			var_0_bool->AddReply(536643, -1, 38471); //@t
		bool var_197_bool = false;
		bool var_198_bool;
		func_4958(var_198_bool, var_1_object);
		if(var_198_bool != 0) {
			bool var_204_bool;
			func_4912(var_1_object);
			if(var_204_bool != 0)
				var_197_bool = true;
		}
		if(var_197_bool != 0)
			var_0_bool->AddReply(536645, 38474, 38473); //@t
		bool var_209_bool;
		func_4968(var_209_bool, var_1_object);
		if(var_209_bool != 0)
			var_0_bool->AddReply(536663, 38493, 38492); //@t
		bool var_218_bool;
		func_4978(var_218_bool, var_1_object);
		if(var_218_bool != 0)
			var_0_bool->AddReply(536685, 38517, 38516); //@t
		bool var_227_bool;
		func_4988(var_227_bool, var_1_object);
		if(var_227_bool != 0)
			var_0_bool->AddReply(536710, 38542, 38541); //@t
		bool var_236_bool;
		func_4998(var_236_bool, var_1_object);
		if(var_236_bool != 0)
			var_0_bool->AddReply(536747, 38579, 38578); //@t
		bool var_245_bool;
		func_5008(var_245_bool, var_1_object);
		if(var_245_bool != 0)
			var_0_bool->AddReply(536769, 38602, 38601); //@t
		bool var_254_bool;
		func_5018(var_254_bool, var_1_object);
		if(var_254_bool != 0)
			var_0_bool->AddReply(536782, 38617, 38616); //@t
		bool var_263_bool;
		func_5028(var_263_bool, var_1_object);
		if(var_263_bool != 0)
			var_0_bool->AddReply(536792, 38627, 38626); //@t
		bool var_272_bool;
		func_5038(var_272_bool, var_1_object);
		if(var_272_bool != 0)
			var_0_bool->AddReply(536814, 38651, 38650); //@t
		bool var_281_bool;
		func_5048(var_281_bool, var_1_object);
		if(var_281_bool != 0)
			var_0_bool->AddReply(536833, 38670, 38669); //@t
		bool var_290_bool;
		func_5058(var_290_bool, var_1_object);
		if(var_290_bool != 0)
			var_0_bool->AddReply(536843, 38680, 38679); //@t
		bool var_299_bool;
		func_4912(var_1_object);
		if(var_299_bool != 0)
			var_0_bool->AddReply(536850, -1, 38686); //@t
		bool var_304_bool;
		func_4924(var_1_object);
		if(var_304_bool != 0)
			var_0_bool->AddReply(536851, -1, 38687); //@t
		bool var_309_bool;
		func_4936(var_1_object);
		if(var_309_bool != 0)
			var_0_bool->AddReply(536852, -1, 38688); //@t
		goto Label_369;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_369:
	bool var_314_bool;
	func_5776(var_314_bool);
	if(var_314_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4705(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_398;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_398:
		return 0;

	}
	
}


void func_5236(void)
{
	int var_163_int;
	func_5169(var_163_int);
	if(var_163_int != 1) {
	}
	func_5219("liver");
	func_5219("kidney");
	func_5219("heart");
	func_5219("blood");
}


void func_2678(bool var_0_bool, object var_1_object)
{
	float var_48_float; cvector var_49_cvector; cvector var_50_cvector; bool var_51_bool; object var_52_object; bool var_53_bool;
	@rand(var_48_float, 0.5);
	@Sleep(var_48_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_2690:
				@GetPosition(var_50_cvector);
				float var_57_float;
				func_2737(var_57_float);
				@GetRandomPFPointInCircle(var_49_cvector, var_50_cvector, var_57_float, var_51_bool);
				if(var_51_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_2690;
			}
				var_1_object = false;
		}
		}
		goto Label_2706;

	Label_2706:
		object var_61_object; cvector var_62_cvector;
		var_49_cvector = var_62_cvector;
		func_2765(var_61_object, var_62_cvector);
		var_61_object = var_52_object;
		if(var_52_object != null) {
			@RotatePath(var_52_object, var_53_bool);
			if(var_53_bool != 0) {
				bool var_67_bool;
				func_2763(var_67_bool);
				@FollowPath(var_52_object, var_67_bool, var_53_bool);
				var_52_object = null;
				if(var_53_bool != 0) {
					TaskCall(5);
					func_2935();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_52_object = null;
	}
	
}


// @pe
void func_5752(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_5528(var_61_object);
}


void func_4729(void)
{
	bool var_22_bool;
	func_5776(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5758(bool var_49_bool)
{
	var_49_bool = false;
}


// @pe
void func_4224(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_4395(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_4736(string var_24_string, int var_25_int, int var_26_int)
{
	bool var_28_bool;
	int var_30_int;
	var_25_int = var_30_int;
	int var_31_int;
	var_26_int = var_31_int;
	bool var_29_bool;
	func_4822(var_29_bool, var_30_int, var_31_int);
	if(var_29_bool != 0)
		@AddItem(var_28_bool, var_24_string, 0);
}


// @pe
void func_5761(void)
{
}


// @pe
void func_5763(bool var_27_bool)
{
	var_27_bool = false;
}


// @pe
void func_5766(void)
{
}


void func_4231(string var_324_string)
{
	var_324_string = "walk";
}


void func_5768(int var_103_int)
{
	var_103_int = 515557;
}


void func_4233(string var_325_string)
{
	var_325_string = "run";
}


void func_5770(int var_102_int)
{
	var_102_int = 503342;
}


void func_4747(string var_45_string)
{
	bool var_54_bool; int var_55_int; bool var_56_bool; int var_57_int; bool var_58_bool; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	@IsExisting3DSound(var_54_bool, var_45_string);
	if(!var_54_bool) { //@nz
		var_55_int = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, (var_45_string + (var_55_int + 1)));
			if(!var_56_bool) { //@nz
				break;
			Label_4767:
				@irand(var_57_int, var_55_int);
				var_45_string += (var_57_int + 1);
	}
			@Is3DSoundLoaded(var_58_bool, var_45_string);
			if(var_58_bool != 0) {
				@GetEyesHeight(var_59_float);
				@GetDirection(var_60_cvector);
				var_61_cvector = var_60_cvector * 50;
				var_72_float = GetByIndex(var_61_cvector, 1);
				SetByIndex(var_61_cvector, 1) = (var_72_float + var_59_float);
				@PlayGlobalSound(var_45_string, var_61_cvector);
			}
		}
		var_55_int += 1;
	}
	var_67_bool = !var_55_int; //@nz
	if(var_67_bool == 0) goto Label_4767;
}


void func_5772(string var_104_string)
{
	var_104_string = "ui/NPC_Citizen1.png";
}


// @pe
void func_4235(string var_540_string, int var_541_int)
{
	if(var_541_int == 2) {
		var_540_string = "fire";
		return 0;
	EMIT "GOTO 0x1097";
	}
	if(var_541_int == 1) {
		var_540_string = "bullet";
		return 0;
	}
	var_540_string = "phys";
}


void func_5774(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen1_b.png";
}


void func_5260(void)
{
	@ClearSubContainer(0);
	int var_118_int;
	func_4878(var_118_int);
	func_5188(30, (50 + (var_118_int * 40)));
	func_4736("tourniquet", 1, 10);
	func_4736("bandage", 1, 10);
	func_4736("bottle_empty", 1, 2);
	func_4736("tvirin", 1, 8);
}


void func_5776(bool var_97_bool)
{
	var_97_bool = false;
}


// @pe
void func_5117(bool var_256_bool)
{
	int var_258_int;
	func_4878(var_258_int);
	var_256_bool = var_258_int == 7;
}


void func_5778(void)
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_5300();
}


void func_3220(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_4249(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


void func_5785(object var_31_object, object var_46_object)
{
	bool var_33_bool;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			object var_36_object;
			var_31_object = var_36_object;
			func_5175(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x16c0";
	}
	int var_44_int; object var_45_object;
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	if(1000 == var_46_object) {
		bool var_336_bool; object var_337_object;
		var_31_object = var_337_object;
		func_4646(var_336_bool, var_337_object);
		if(!var_336_bool) //@nz
			return 2;
		object var_368_object;
		var_31_object = var_368_object;
		TaskCall(0);
		func_0(var_368_object);
		TaskReturn();
		object var_375_object;
		var_31_object = var_375_object;
		func_4701();
	}
}


void func_4256(float var_37_float, object var_38_object)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_38_object->GetPosition(var_43_cvector);
	var_37_float = (var_43_cvector - var_42_cvector) | (var_43_cvector - var_42_cvector);
}


void func_3750(bool var_599_bool, float var_600_float)
{
	float var_603_float; bool var_604_bool;
	@rand(var_603_float);
	if(var_603_float < var_600_float) {

		for(;;) {
			@IsAnimationPlaying(var_604_bool);
			if(!var_604_bool) { //@nz
			} else {
				bool var_607_bool;
				func_3848(var_607_bool);
				if(var_607_bool != 0) {
					var_599_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_599_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_3952(var_604_bool);
}


void func_4264(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	@IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
}


void func_4269(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_2737(float var_57_float)
{
	float var_59_float;
	@GetCameraFarDistance(var_59_float);
	var_59_float = var_57_float;
}


void func_4788(object var_107_object)
{
	object var_109_object;
	@self(var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_5300(void)
{
	@ClearSubContainer(0);
	func_4736("tourniquet", 1, 4);
	func_4736("bandage", 1, 2);
}


void func_4281(float var_512_float, object var_513_object, float var_514_float, int var_515_int)
{
	int var_525_int; int var_527_int;
	object var_532_object;
	var_513_object = var_532_object;
	bool var_531_bool;
	func_4269(var_531_bool, var_532_object, "health");
	if(!var_531_bool) //@nz
		var_512_float = 0.0;
	bool var_535_bool; object var_536_object;
	func_4269(var_535_bool, var_536_object, "armor");
	if(!var_535_bool) //@nz
		var_525_int = 0;
	else
		var_536_object->GetProperty("armor", var_525_int);
	string var_540_string; int var_541_int;
	var_515_int = var_541_int;
	func_4235(var_540_string, var_541_int);
	string var_526_string = "armor_" + var_540_string;
	bool var_546_bool; object var_547_object; string var_548_string;
	var_513_object = var_547_object;
	func_4269(var_546_bool, var_547_object, var_548_string);
	if(!var_546_bool) //@nz
		var_527_int = 0;
	else
		var_513_object->GetProperty(var_548_string, var_527_int);

	float var_550_float;
	func_4804(var_550_float, ((var_525_int + var_527_int) / 100.0), (float)1);
	float var_528_float;
	var_550_float = var_528_float;
	float var_529_float;
	var_513_object->GetProperty("health", var_529_float);
	float var_530_float = var_514_float * (1 - var_528_float);
	float var_560_float;
	func_4811(var_560_float, (var_529_float - var_530_float), (float)0, (float)1);
	var_513_object->SetProperty("health", var_560_float);
	bool var_566_bool; object var_567_object;
	var_513_object = var_567_object;
	func_4264(var_566_bool, var_567_object);
	if(var_566_bool != 0) {
		float var_568_float = -var_530_float;
		func_4868(var_568_float);
	}
	var_530_float = var_512_float;
	
}


void func_4794(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


void func_2749(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_3777(bool var_0_bool, bool var_404_bool, float var_405_float)
{
	bool var_411_bool; cvector var_412_cvector; cvector var_413_cvector; cvector var_414_cvector; float var_415_float;
	
	for(;;) {
		@IsAnimationPlaying(var_411_bool);
		if(!var_411_bool) //@nz
			break;
		bool var_417_bool;
		func_3848(var_417_bool);
		if(var_417_bool != 0) {
			var_404_bool = true;
			return 10;
		}
		bool var_456_bool;
		func_4395(var_456_bool, var_0_bool);
		if(!var_456_bool) { //@nz
			var_404_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_412_cvector); //@t
		@GetPFPosition(var_413_cvector);
		var_414_cvector = var_412_cvector - var_413_cvector;
		var_415_float = var_414_cvector | var_414_cvector;
		if(var_415_float < (var_405_float * var_405_float)) {
			bool var_461_bool; float var_462_float;
			var_405_float = var_462_float;
			func_3613(var_414_cvector, var_415_float, var_461_bool, var_462_float);
			var_404_bool = true;
			return 10;
		}
		@sync();
	}
	func_3952(var_415_float);
	var_404_bool = false;
}


void func_5825(bool var_64_bool)
{
	var_64_bool = false;
}


// @pe
void func_5827(bool var_171_bool)
{
	var_171_bool = true;
}


void func_2756(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_4804(float var_550_float, float var_551_float, float var_552_float)
{
	if(var_551_float < var_552_float)
		var_551_float = var_550_float;
	else
		var_552_float = var_550_float;
	
}


// @pe
void func_5830(bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool)
{
	object var_29_object;
	var_25_object = var_29_object;
	object var_30_object;
	var_26_object = var_30_object;
	bool var_32_bool;
	var_27_bool = var_32_bool;
	bool var_28_bool;
	func_5642(var_28_bool, var_29_object, var_30_object, 700.0, var_32_bool);
	var_28_bool = var_24_bool;
}


void func_5317(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
}


// @pe
void func_2246(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2279(var_22_object);
	object var_102_object;
	var_21_object = var_102_object;
	func_5840(var_102_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_5322(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_2246(var_21_object);
	TaskReturn();
}


void func_2763(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_4811(float var_560_float, float var_561_float, float var_562_float, float var_563_float)
{
	if(var_561_float < var_562_float) {
		var_562_float = var_560_float;
		return 0;
	}
	if(var_561_float > var_563_float) {
		var_563_float = var_560_float;
		return 0;
	}
	var_561_float = var_560_float;
}


void func_2765(object var_61_object, cvector var_62_cvector)
{
	object var_64_object;
	@FindShiftedPathTo(var_64_object, var_62_cvector);
	var_64_object = var_61_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5840(object var_102_object)
{
	bool var_103_bool; object var_104_object;
	func_4264(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		object var_107_object;
		func_4788(var_107_object);
		@ReportReputationChange(var_104_object, var_107_object, -0.03, true);
		func_5260();
	}
	func_5236();
	var_183_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_4822(bool var_29_bool, int var_30_int, int var_31_int)
{
	int var_33_int;
	@irand(var_33_int, var_31_int);
	var_29_bool = var_33_int < var_30_int;
}


// @pe
void func_4827(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_72_float = (var_75_float * var_76_float) + (var_78_float * var_79_float);
}


// @pe
void func_3296(object var_183_object)
{
	object var_190_object;
	func_3310(var_186_int, var_187_bool, var_188_float, var_189_int, var_190_object, var_190_object, true, 180.0);
}


// @pe
void func_4836(float var_81_float, cvector var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0);
	var_84_float = GetByIndex(var_82_cvector, 0);
	var_86_float = GetByIndex(var_82_cvector, 2);
	var_87_float = GetByIndex(var_82_cvector, 2);
	var_81_float = sqrt((var_83_float * var_84_float) + (var_86_float * var_87_float));
}


void func_2279(object var_22_object)
{
	cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; string var_37_string; object var_38_object; bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector;
	if(var_22_object == null) {
		func_2370("fdie");
	} else {
		var_22_object->GetPosition(var_33_cvector);
		@GetPosition(var_34_cvector);
		@GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_76_float = GetByIndex(var_36_cvector, 0);
		var_77_float = GetByIndex(var_35_cvector, 0);
		var_79_float = GetByIndex(var_36_cvector, 2);
		var_80_float = GetByIndex(var_35_cvector, 2);
		if(((var_76_float * var_77_float) + (var_79_float * var_80_float)) >= 0)
			var_37_string = "fdie";
		else
			var_37_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_22_object = var_38_object;
		var_87_bool = IsFuncExist(var_22_object, "GetScriptProperty", 2);
		if(var_87_bool != 0) {
			var_22_object->HasScriptProperty(var_39_bool, "Owner");
			if(var_39_bool != 0) {
				var_22_object->GetScriptProperty(var_38_object, "Owner");
				if(var_38_object == null)
					var_22_object = var_38_object;
			}
		}
		var_94_bool = IsFuncExist(var_38_object, "@GetEyesHeight", 1);
		if(var_94_bool != 0) {
			var_38_object->GetEyesHeight(var_41_float);
			var_42_cvector = [0.0, 0.0, 0.0];
			var_95_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_95_float;
			SetByIndex(var_42_cvector, 1) = var_95_float;
			@LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = true;
		} else {
			var_40_bool = false;

		}
		string var_97_string;
		var_37_string = var_97_string;
		func_4747(var_97_string);
		@PlayAnimation("all", var_37_string);
		@WaitForAnimEnd();
		if(var_40_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_37_string);
		@RemoveEnvelope();
		var_38_object = null;
	}
	
}


// @pe
void func_3304(float var_509_float)
{
	var_509_float = 0.05;
}


// @pe
void func_3307(int var_516_int)
{
	var_516_int = 0;
}


void func_3820(bool var_0_bool, bool var_419_bool)
{
	cvector var_425_cvector; cvector var_426_cvector;
	bool var_430_bool;
	func_4395(var_430_bool, var_0_bool);
	if(!var_430_bool) { //@nz
		var_419_bool = false;
		return 10;
	}
	bool var_433_bool;
	float var_429_float;
	func_3909(var_429_float, var_433_bool);
	if(var_433_bool != 0) {
		var_0_bool->GetPFPosition(var_425_cvector); //@t
		@GetPFPosition(var_426_cvector);
		var_0_bool->GetAttackDistance(var_429_float); //@t
		var_419_bool = ((var_425_cvector - var_426_cvector) | (var_425_cvector - var_426_cvector)) <= ((var_429_float + 50) * (var_429_float + 50));
		return 10;
	}
	var_419_bool = false;
}


// @pe
void func_4846(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	cvector var_74_cvector;
	var_71_cvector = var_74_cvector;
	float var_72_float;
	func_4827(var_72_float, var_73_cvector, var_74_cvector);
	float var_81_float; cvector var_82_cvector;
	var_70_cvector = var_82_cvector;
	func_4836(var_81_float, var_82_cvector);
	float var_90_float; cvector var_91_cvector;
	var_71_cvector = var_91_cvector;
	func_4836(var_90_float, var_91_cvector);
	var_69_float = var_72_float / (var_81_float * var_90_float);
}


void func_3310(bool var_0_bool, object var_3_object, bool var_5_bool, object var_190_object, bool var_191_bool, float var_192_float, bool var_267_bool, bool var_353_bool)
{
	float var_204_float; cvector var_205_cvector; cvector var_206_cvector; bool var_208_bool; float var_211_float; cvector var_212_cvector; bool var_213_bool; float var_214_float;
	func_3539(var_212_cvector, var_213_bool, var_214_float);
	var_5_bool = 0;
	var_239_bool = IsFuncExist(var_190_object, "@GetAttackDistance", 1);
	if(var_239_bool != 0) {
		var_190_object->GetAttackDistance(var_204_float);
		var_204_float += 50;
	} else {
						var_192_float = var_204_float;
	}
	if(var_204_float >= 150)
		var_204_float = 150;
	var_3_object = false;
	var_0_bool = var_190_object;
	bool var_207_bool;
	@IsPlayerActor(var_0_bool, var_207_bool);
	if(var_207_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_245_object;
		func_4788(var_245_object);
		@SendPlayerEnemy(var_190_object, var_245_object);
	}
	if(var_191_bool != 0)
		var_208_bool = false;
	else
		var_208_bool = true;

	
Label_3350:
	for(;;) {
		bool var_250_bool = false;
		bool var_251_bool;
		func_4395(var_251_bool, var_0_bool);
		if(var_251_bool != 0) {
			if(!var_3_object) //@nz
				var_250_bool = true;
		}
		if(var_250_bool != 0) {
			func_3952(var_214_float);
			var_0_bool->GetPFPosition(var_205_cvector); //@t
			@GetPFPosition(var_206_cvector);
			var_211_float = (var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector);
			if(var_211_float >= ((400.0 + var_204_float) * (400.0 + var_204_float))) {
				bool var_261_bool; float var_263_float;
				var_204_float = var_263_float;
				TaskCall(8);
				func_3979(var_269_bool, var_261_bool, var_0_bool, var_263_float, 3000.0, true, false);
				TaskReturn();
				if(!var_267_bool) { //@nz
				} else {
					var_208_bool = false;
			} else {
			if(var_211_float >= (var_192_float * var_192_float)) {
				var_0_bool->GetPFPosition(var_212_cvector); //@t
				@CanReachByPF(var_213_bool, var_212_cvector);
				if(!var_213_bool) { //@nz
					bool var_347_bool; float var_349_float;
					var_204_float = var_349_float;
					TaskCall(8);
					func_3979(var_355_bool, var_347_bool, var_0_bool, var_349_float, 3000.0, true, false);
					TaskReturn();
					if(!var_353_bool) { //@nz
						goto Label_3522;
					}
					var_208_bool = false;
					goto Label_3350;
				}
				if(!var_208_bool) { //@nz
					func_4545(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_3952(var_214_float);
					@StopAsync();
					var_208_bool = true;
					bool var_361_bool;
					func_4395(var_361_bool, var_0_bool);
					if(!var_361_bool) { //@nz
						goto Label_3522;
					}
				}
				@rand(var_214_float);
				bool var_364_bool;
				var_366_bool = var_214_float < 0.25;
				if(var_366_bool != 1) {
					bool var_367_bool;
					func_3909(true, var_367_bool);
					if(var_367_bool != 1)
						var_364_bool = false;
				}
				if(var_364_bool != 0) {
					@Face(var_0_bool);
					func_3959();
					@PlayAnimation("all", "attack_stay");
					bool var_404_bool; float var_405_float;
					func_3777(var_214_float, var_404_bool, var_405_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_3952(var_214_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_618_bool;
					func_3909(var_214_float, var_618_bool);
					var_619_bool = !var_618_bool; //@nz
					if(var_619_bool == 0) goto Label_3512;
					bool var_620_bool;
					func_4395(var_620_bool, var_0_bool);
					if(!var_620_bool) { //@nz
						goto Label_3522;
					}
					var_0_bool->GetPFPosition(var_205_cvector); //@t
					@GetPFPosition(var_206_cvector);
					if(!(((var_205_cvector - var_206_cvector) | (var_205_cvector - var_206_cvector)) < (var_405_float * var_405_float))) goto Label_3512;
					bool var_625_bool; float var_626_float;
					var_192_float = var_626_float;
					func_3613(var_213_bool, var_214_float, var_625_bool, var_626_float);
					var_627_bool = !var_625_bool; //@nz
					if(var_627_bool == 0) goto Label_3512;
					goto Label_3522;
			}
				bool var_628_bool; float var_629_float;
				var_192_float = var_629_float;
				func_3613(var_213_bool, var_214_float, var_628_bool, var_629_float);
				if(!var_628_bool) { //@nz
					goto Label_3522;
				}
				var_208_bool = true;

			}
		Label_3512:
			goto Label_3521;
			}
			Label_3521:
			}
		}
	Label_3522:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_207_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_5367(bool var_23_bool, object var_24_object, string var_25_string)
{
	if(var_25_string == "unholster") {
		bool var_28_bool; object var_29_object;
		var_24_object = var_29_object;
		func_5732(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x1515";
	}
	if(var_25_string == "player_shot") {
		bool var_32_bool; object var_33_object;
		var_24_object = var_33_object;
		func_5737(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x1515";
	}
	if(var_25_string == "battle") {
		bool var_49_bool; object var_50_object;
		var_24_object = var_50_object;
		func_5758(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = false;
}


void func_4863(int var_138_int, string var_139_string)
{
	int var_141_int;
	@GetVariable(var_139_string, var_141_int);
	var_141_int = var_138_int;
}


void func_4354(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


void func_4868(float var_568_float)
{
	object var_570_object;
	@CreateFloatVector(var_570_object);
	var_570_object->add(var_568_float);
	@SendWorldWndMessage(15, var_570_object);
}
EMIT "Stack[-1] = 0";


void func_4359(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_4354(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3848(bool var_417_bool)
{
	bool var_418_bool = false;
	bool var_419_bool;
	func_3820(var_418_bool, var_419_bool);
	if(var_419_bool != 0) {
		bool var_436_bool;
		func_3864(var_417_bool, var_418_bool, var_436_bool);
		if(var_436_bool != 0)
			var_418_bool = true;
	}
	if(var_418_bool != 0) {
		var_417_bool = true;
		return 0;
	}
	var_417_bool = false;
}


void func_4878(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


// @pe
void func_5399(object var_53_object, string var_54_string)
{
	if(var_54_string == "unholster") {
		object var_57_object;
		var_53_object = var_57_object;
		func_5735();
	} else if(var_54_string == "player_shot") {
			object var_60_object;
			var_53_object = var_60_object;
			func_5752(var_60_object);
	}
Label_5423:
	for(;;) {

	}
	
	if(!(var_54_string == "battle")) goto Label_5423;
	object var_128_object;
	var_53_object = var_128_object;
	func_5761();
}


void func_3864(bool var_0_bool, string var_4_string, bool var_436_bool)
{
	object var_442_object; float var_444_float; cvector var_445_cvector; cvector var_446_cvector;
	@GetScene(var_442_object);
	bool var_443_bool = false;
	
	for(;;) {
		cvector var_447_cvector;
		func_4249(var_447_cvector, var_0_bool);
		var_449_int = -var_447_cvector;
		@FindDirLength(var_444_float, var_449_int, var_4_string);
		if(var_444_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_445_cvector); //@t
				@GetPFPosition(var_446_cvector);
				@WaitForAnimEnd();
				func_3952(var_446_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_443_bool = true;
				bool var_454_bool;
				func_3820(var_446_cvector, var_454_bool);
				var_455_bool = !var_454_bool; //@nz
				if(var_455_bool == 0) goto Label_3905;
		}
		for(;;) {
			var_443_bool = var_436_bool;

		}

	Label_3905:
	}
}
EMIT "Stack[-5] = 0";


void func_4887(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_4896(void)
{
	object var_474_object;
	@GetScene(var_474_object);
	object var_476_object;
	func_4788(var_476_object);
	@BroadcastMessage("battle", var_476_object, var_474_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4907(object var_26_object)
{
	var_26_object->SetReturnValue(1000);
}


void func_4395(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_4359(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_4269(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


// @pe
void func_4912(bool var_136_bool)
{
	int var_138_int;
	func_4863(var_138_int, "branch");
	if(var_138_int == 0) {
		var_136_bool = true;
		return 0;
	}
	var_136_bool = false;
}


void func_5424(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	bool var_24_bool = false;
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_5732(var_26_object);
	if(var_25_bool != 0) {
		bool var_27_bool; object var_28_object;
		func_4264(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_28_object->IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) //@nz
			var_20_bool = true;
	}
	var_20_bool = false;
}


// @pe
void func_4924(bool var_168_bool)
{
	int var_170_int;
	func_4863(var_170_int, "branch");
	if(var_170_int == 1)
		var_168_bool = true;
	var_168_bool = false;
}


// @pe
void func_2370(string var_44_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_45_string;
	var_44_string = var_45_string;
	func_4747(var_45_string);
	@PlayAnimation("all", var_44_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_44_string);
	@RemoveEnvelope();
}


void func_4419(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_3909(bool var_0_bool, bool var_367_bool)
{
	bool var_369_bool;
	var_372_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_372_bool != 0) {
		var_0_bool->IsAttacking(var_369_bool); //@t
		var_369_bool = var_367_bool;
	}
	var_367_bool = false;
}


// @pe
void func_5447(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	func_5735();
}


// @pe
void func_4936(bool var_188_bool)
{
	int var_190_int;
	func_4863(var_190_int, "branch");
	if(var_190_int == 2)
		var_188_bool = true;
	var_188_bool = false;
}


// @pe
void func_5453(object var_22_object)
{
	bool var_23_bool; object var_24_object;
	func_4264(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		object var_27_object;
		func_4788(var_27_object);
		@ReportReputationChange(var_24_object, var_27_object, -0.02);
	}
}


void func_3920(object var_2_object, bool var_5_bool)
{
	int var_483_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_482_float;
	@rand(var_482_float);
	float var_489_float;
	func_3970(var_489_float);
	if(var_482_float < var_489_float) {
		@irand(var_483_int, var_2_object);
		@Speak("attack" + (var_483_int + 1));
		int var_494_int;
		func_3968(var_494_int);
		var_5_bool = var_494_int;
	}
}


// @pe
void func_4948(bool var_144_bool, object var_145_object)
{
	object var_147_object;
	var_145_object = var_147_object;
	func_5068(var_147_object);
	bool var_146_bool;
	if(var_146_bool != 0) {
		var_144_bool = true;
		return 0;
	}
	var_144_bool = false;
}


void func_5466(bool var_20_bool, string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_5763(var_28_object);
		var_27_bool = var_20_bool;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = false;
}


// @pe
void func_4958(bool var_198_bool, object var_199_object)
{
	object var_201_object;
	var_199_object = var_201_object;
	func_5075(var_201_object);
	bool var_200_bool;
	if(var_200_bool != 0) {
		var_198_bool = true;
		return 0;
	}
	var_198_bool = false;
}


// @pe
void func_4968(bool var_209_bool, object var_210_object)
{
	object var_212_object;
	var_210_object = var_212_object;
	func_5082(var_212_object);
	bool var_211_bool;
	if(var_211_bool != 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


void func_5482(string var_31_string)
{
	object var_33_object;
	if(var_31_string == "heal") {
		@FindActor(var_33_object, "player");
		object var_37_object;
		var_33_object = var_37_object;
		func_5766();
		var_33_object = null;
	}
}


void func_4463(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_4249(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_4794(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_4525:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_4419(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_4525;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_4531(var_70_float, var_71_cvector, var_72_cvector);
}


void func_3952(bool var_0_bool)
{
	func_4887(var_0_bool);
}


void func_2417(void)
{
	bool var_38_bool;
	func_4556(var_38_bool);
	if(!var_38_bool) //@nz
		func_5731();
}


// @pe
void func_4978(bool var_218_bool, object var_219_object)
{
	object var_221_object;
	var_219_object = var_221_object;
	func_5089(var_221_object);
	bool var_220_bool;
	if(var_220_bool != 0) {
		var_218_bool = true;
		return 0;
	}
	var_218_bool = false;
}


void func_3957(int var_573_int)
{
	var_573_int = 0;
}


void func_2935(void)
{
	int var_78_int; int var_79_int; bool var_80_bool; float var_81_float; bool var_82_bool;
	@WaitForAnimEnd();
	bool var_83_bool;
	func_4556(var_83_bool);
	if(!var_83_bool) //@nz
		return 14;
	int var_85_int;
	func_5502(var_85_int);
	int var_76_int;
	var_85_int = var_76_int;
	int var_77_int = 0;
	
	for(;;) {
		bool var_98_bool = false;
		if(var_77_int < 5) {
			bool var_101_bool;
			func_4556(var_101_bool);
			if(var_101_bool != 0)
				var_98_bool = true;
		}
		if(var_98_bool != 0) {
			@irand(var_78_int, 3);
			if(var_78_int == 0) {
				if(var_76_int == 0) goto Label_2982;
				@irand(var_79_int, var_76_int);
				string var_107_string; int var_108_int;
				var_79_int = var_108_int;
				func_5495(var_107_string, var_108_int);
				@PlayAnimation("all", var_107_string);
				@WaitForAnimEnd(var_80_bool);
				if(!var_80_bool) { //@nz
				} else {
			} else {
			if(var_78_int == 1) {
				@rand(var_81_float, 4);
				@Sleep((var_81_float + 1), var_82_bool);
				if(!var_82_bool) { //@nz
					goto Label_3011;
				}
			} else if(var_77_int != 0) {
				goto Label_3011;
			}
			}
					bool var_110_bool;
					func_3014(var_110_bool);
					var_111_bool = !var_110_bool; //@nz
					if(var_111_bool == 0) goto Label_3006;
			}
		}
	Label_3011:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_3006:
		@ResetAAS();
		var_77_int += 1;
	}
	
}


void func_5495(string var_91_string, int var_92_int)
{
	string var_94_string = "idle";
	if(var_92_int != 0)
		var_94_string += var_92_int;
	var_94_string = var_91_string;
}


void func_3959(void)
{
	func_4747("attack_stay");
}


// @pe
void func_4988(bool var_227_bool, object var_228_object)
{
	object var_230_object;
	var_228_object = var_230_object;
	func_5096(var_230_object);
	bool var_229_bool;
	if(var_229_bool != 0) {
		var_227_bool = true;
		return 0;
	}
	var_227_bool = false;
}


// @pe
void func_3964(void)
{
}


void func_5502(int var_85_int)
{
	int var_88_int; bool var_89_bool;
	var_88_int = 0;
	
	for(;;) {
		string var_91_string; int var_92_int;
		var_88_int = var_92_int;
		func_5495(var_91_string, var_92_int);
		@HasAnimation(var_89_bool, "all", var_91_string);
		if(!var_89_bool) //@nz
			break;
		var_88_int += 1;
	}
	var_88_int = var_85_int;
}


void func_3966(bool var_598_bool)
{
	var_598_bool = true;
}


void func_3968(int var_494_int)
{
	var_494_int = 1;
}


void func_3970(float var_489_float)
{
	var_489_float = 0.5;
}


// @pe
void func_4998(bool var_236_bool, object var_237_object)
{
	object var_239_object;
	var_237_object = var_239_object;
	func_5103(var_239_object);
	bool var_238_bool;
	if(var_238_bool != 0) {
		var_236_bool = true;
		return 0;
	}
	var_236_bool = false;
}


void func_3979(object var_2_object, bool var_261_bool, object var_262_object, float var_263_float, float var_264_float, bool var_265_bool, bool var_266_bool)
{
	object var_274_object;
	func_4887(var_274_object);
	@SetTimer(1, 5);
	bool var_272_bool;
	@CanSee(var_272_bool, var_274_object);
	if(var_272_bool != 0) {
		var_2_object = true;
		object var_278_object;
		var_262_object = var_278_object;
		func_4718(var_278_object);
	} else {
		var_2_object = false;
	}
	bool var_279_bool; object var_280_object;
	func_4264(var_279_bool, var_280_object);
	if(var_279_bool != 0) {
		object var_283_object;
		func_4788(var_283_object);
		@SendPlayerEnemy(var_280_object, var_283_object);
	}
	bool var_284_bool; object var_285_object; float var_286_float; float var_287_float; bool var_288_bool; bool var_289_bool;
	var_262_object = var_285_object;
	var_263_float = var_286_float;
	var_264_float = var_287_float;
	var_265_bool = var_288_bool;
	var_266_bool = var_289_bool;
	bool var_273_bool;
	func_4084(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool);
	var_284_bool = var_273_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_273_bool = var_261_bool;
	
}


// @pe
void func_399(object var_2_object, string var_122_string)
{
	bool var_123_bool;
	func_5776(var_123_bool);
	if(!var_123_bool) //@nz
		return 0;
	if(var_122_string == var_2_object)
		return 0;
	string var_126_string; bool var_127_bool;
	var_122_string = var_126_string;
	if(var_122_string == "")
		var_127_bool = false;
	else
		var_127_bool = true;
	func_4712(var_126_string, var_127_bool);
	var_2_object = var_122_string;
	
}


// @pe
void func_5008(bool var_245_bool, object var_246_object)
{
	object var_248_object;
	var_246_object = var_248_object;
	func_5110(var_248_object);
	bool var_247_bool;
	if(var_247_bool != 0) {
		var_245_bool = true;
		return 0;
	}
	var_245_bool = false;
}


// @pe
void func_5519(int var_62_int)
{
	bool var_64_bool;
	func_5825(var_64_bool);
	if(var_64_bool != 0)
		var_62_int = 2;
	else
		var_62_int = 0;
	
}


// @pe
void func_5528(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(6);
	func_3021(var_63_object, var_62_object);
	TaskReturn();
}


// @pe
void func_5018(bool var_254_bool, object var_255_object)
{
	object var_257_object;
	var_255_object = var_257_object;
	func_5117(var_257_object);
	bool var_256_bool;
	if(var_256_bool != 0) {
		var_254_bool = true;
		return 0;
	}
	var_254_bool = false;
}


// @pe
void func_5536(int var_89_int, object var_90_object)
{
	object var_92_object;
	var_90_object = var_92_object;
	bool var_91_bool;
	func_4395(var_91_bool, var_92_object);
	if(var_91_bool != 0)
		var_89_int = 2;
	else
		var_89_int = 0;
	
}


// @pe
void func_5028(bool var_263_bool, object var_264_object)
{
	object var_266_object;
	var_264_object = var_266_object;
	func_5124(var_266_object);
	bool var_265_bool;
	if(var_265_bool != 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


// @pe
void func_5546(object var_182_object)
{
	object var_183_object;
	var_182_object = var_183_object;
	TaskCall(7);
	func_3296(var_183_object);
	TaskReturn();
}


// @pe
void func_5038(bool var_272_bool, object var_273_object)
{
	object var_275_object;
	var_273_object = var_275_object;
	func_5131(var_275_object);
	bool var_274_bool;
	if(var_274_bool != 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


void func_5554(bool var_35_bool, object var_36_object, bool var_37_bool)
{
	bool var_42_bool; object var_43_object;
	func_4269(var_42_bool, var_43_object, "class");
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 4;
	}
	string var_40_string;
	@GetProperty("class", var_40_string);
	string var_41_string;
	var_43_object->GetProperty("class", var_41_string);
	bool var_54_bool = false;
	if(!var_37_bool) { //@nz
		if(var_40_string == var_41_string)
			var_54_bool = true;
	}
	if(var_54_bool != 0) {
		var_35_bool = true;
		return 4;
	}
	if(var_41_string == "rat") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "rat_big") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "dog") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "grabitel") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "bomber") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "sanitar") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "hunter") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x15fb";
	}
	if(var_41_string == "soldier") {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}


void func_4531(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_4419(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5048(bool var_281_bool, object var_282_object)
{
	object var_284_object;
	var_282_object = var_284_object;
	func_5138(var_284_object);
	bool var_283_bool;
	if(var_283_bool != 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


void func_4545(object var_95_object)
{
	cvector var_99_cvector;
	var_95_object->GetPosition(var_99_cvector);
	cvector var_100_cvector;
	@GetPosition(var_100_cvector);
	cvector var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = GetByIndex(var_101_cvector, 0);
	var_103_float = GetByIndex(var_101_cvector, 2);
	@RotateAsync(var_102_float, var_103_float);
}


// @pe
void func_5058(bool var_290_bool, object var_291_object)
{
	object var_293_object;
	var_291_object = var_293_object;
	func_5145(var_293_object);
	bool var_292_bool;
	if(var_292_bool != 0) {
		var_290_bool = true;
		return 0;
	}
	var_290_bool = false;
}


void func_3014(bool var_110_bool)
{
	var_110_bool = true;
}


void func_3016(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4042(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_4208(var_19_object);
}


void func_4556(bool var_38_bool)
{
	bool var_40_bool;
	@IsLoaded(var_40_bool);
	var_40_bool = var_38_bool;
}


// @pe
void func_5068(bool var_146_bool)
{
	int var_148_int;
	func_4878(var_148_int);
	var_146_bool = var_148_int <= 6;
}


void func_3021(bool var_0_bool, object var_62_object)
{
	var_0_bool = var_62_object;
	bool var_69_bool;
	func_3072(var_69_bool);
	cvector var_67_cvector;
	@GetDirection(var_67_cvector);
	cvector var_77_cvector;
	func_4249(var_77_cvector, var_0_bool);
	cvector var_68_cvector;
	var_77_cvector = var_68_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_4846(var_83_float, var_84_cvector, var_85_cvector);
	if(var_83_float < 0) {
		func_4545(var_0_bool);
		var_69_bool = true;
	} else {
		@Sleep(1.5, var_69_bool);
	}
	if(var_69_bool != 0) {
		func_4545(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_4561(bool var_55_bool, object var_56_object, float var_57_float)
{
	cvector var_68_cvector; bool var_75_bool;
	var_56_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_56_object->GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_80_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_80_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_4794(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * var_57_float) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector);
	var_95_float = GetByIndex(var_72_cvector, 0);
	var_96_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	bool var_97_bool;
	func_5776(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		@HasAnimationTrack(var_75_bool, "head");
		if(var_75_bool == 0) goto Label_4623;
		@LookAsyncCamera("head");
	}
Label_4623:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
	
}


void func_3539(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_218_bool; bool var_219_bool; cvector var_220_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_218_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_218_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_219_bool, ("attack" + (var_2_object + 1)));
			if(!var_219_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_220_cvector, "all", "bjump");
		var_234_float = GetByIndex(var_220_cvector, 2);
		var_4_string = -var_234_float;

	}
}


// @pe
void func_5075(bool var_200_bool)
{
	int var_202_int;
	func_4878(var_202_int);
	var_200_bool = var_202_int == 1;
}


// @pe
void func_5082(bool var_211_bool)
{
	int var_213_int;
	func_4878(var_213_int);
	var_211_bool = var_213_int == 2;
}


// @pe
void func_5089(bool var_220_bool)
{
	int var_222_int;
	func_4878(var_222_int);
	var_220_bool = var_222_int == 3;
}


// @pe
void func_5096(bool var_229_bool)
{
	int var_231_int;
	func_4878(var_231_int);
	var_229_bool = var_231_int == 4;
}


// @pe
void func_5103(bool var_238_bool)
{
	int var_240_int;
	func_4878(var_240_int);
	var_238_bool = var_240_int == 5;
}


void func_4084(bool var_0_bool, object var_1_object, bool var_284_bool, object var_285_object, float var_286_float, float var_287_float, bool var_288_bool, bool var_289_bool)
{
	bool var_298_bool; object var_300_object; cvector var_301_cvector; cvector var_302_cvector; float var_304_float; object var_305_object;
	var_0_bool = false;
	var_1_object = var_285_object;
	bool var_299_bool;
	var_289_bool = var_299_bool;
	
	for(;;) {
		bool var_306_bool; object var_307_object;
		var_285_object = var_307_object;
		func_4224(var_306_bool, var_307_object);
		if(!var_306_bool) { //@nz
			var_284_bool = false;
			return 16;
		}
		var_285_object->GetPosition(var_301_cvector);
		@GetPosition(var_302_cvector);
		var_304_float = (var_301_cvector - var_302_cvector) | (var_301_cvector - var_302_cvector);
		bool var_311_bool = false;
		if(var_287_float > 0) {
			if(var_304_float > (var_287_float * var_287_float))
				var_311_bool = true;
		}
		if(var_311_bool != 0) {
			@Stop();
			var_284_bool = false;
			return 16;
		}
		if(var_304_float > (var_286_float * var_286_float)) {
			var_285_object->GetPFPosition(var_301_cvector);
			@FindPathTo(var_305_object, var_301_cvector);
			if(var_305_object != null) {
				var_305_object = var_300_object;
				var_305_object = null;
			}
			if(var_300_object != null) {
				if(var_299_bool == 0) goto Label_4137;
				var_299_bool = false;
				@RotatePath(var_300_object, var_298_bool);
				if(!var_298_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_324_string;
						func_4231(var_324_string);
						string var_325_string;
						func_4233(var_325_string);
						@FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string);
						if(!var_298_bool) { //@nz
							if(var_0_bool == 0) goto Label_4156;
							var_300_object = null;
						}
					EMIT "GOTO 0x103d";

					Label_4156:
						} else {
					var_300_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_298_bool);
					if(!var_298_bool) { //@nz
						if(var_0_bool != 0) {
							var_300_object = null;
							goto Label_4184;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_4184;
		}
			var_305_object = null;
			goto Label_4182;

		Label_4182:
			var_300_object = null;

		}
	Label_4184:
		for(;;) {
			var_284_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_3574(bool var_0_bool, float var_498_float, int var_499_int)
{
	object var_503_object; float var_504_float; float var_505_float;
	@GetVictim((var_498_float * 0.9), var_503_object);
	@ReportAttack(var_0_bool);
	if(var_503_object == var_0_bool) {
		float var_509_float; object var_510_object; int var_511_int;
		var_503_object = var_510_object;
		var_499_int = var_511_int;
		func_3304(var_511_int);
		var_509_float = var_504_float;
		float var_512_float; object var_513_object; float var_514_float; int var_515_int;
		var_503_object = var_513_object;
		int var_516_int; object var_517_object; int var_518_int;
		var_503_object = var_517_object;
		var_499_int = var_518_int;
		func_3307(var_518_int);
		var_516_int = var_515_int;
		func_4281(var_512_float, var_513_object, var_514_float, var_515_int);
		var_512_float = var_505_float;
		int var_573_int;
		func_3957(var_573_int);
		@ReportHit(var_0_bool, var_573_int, var_505_float, var_514_float);
		object var_574_object; float var_575_float;
		var_503_object = var_574_object;
		var_505_float = var_575_float;
		func_3964();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_5110(bool var_247_bool)
{
	int var_249_int;
	func_4878(var_249_int);
	var_247_bool = var_249_int == 6;
}


// @pe
void func_5629(int var_86_int, object var_87_object)
{
	object var_90_object;
	var_87_object = var_90_object;
	int var_89_int;
	func_5536(var_89_int, var_90_object);
	var_89_int = var_86_int;
}


