GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	ood2WomanD1
	d2q01
	d2q01WomanDGotoAlexandr
	pt_map_alexandr
	AddMark
	key is given
	d2q01_key
	quest_d2_01
	cursed_women
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_None.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x17a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa2 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x172 Vars = (object)
		EVENT_26 Op = 0x17e Vars = (string)
		EVENT_6 Op = 0x19a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1ac

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x2da

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x2dc

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x2b9

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x1e4

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x272

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0x92

0x4d: Pop(1)
0x4e: Push((int) 6748)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 6749)
0x54: Push((int) 7440)
0x55: Push((int) 7439)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 7345)
0x59: Push((int) 7440)
0x5a: Push((int) 8098)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: Push((int) 7350)
0x5e: Push((int) 7440)
0x5f: Push((int) 8104)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: GOTO 0x74

0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call 0x92

0x66: Pop(1)
0x67: Push((int) 6753)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: Push((int) 6754)
0x6d: Push((int) 8102)
0x6e: Push((int) 7444)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: GOTO 0x74

0x72: Return(); Pop(0)

0x73: GOTO 0x43

0x74: PushEmpty(bool)
0x75: Call 0x2de

0x76: Pop(0)
0x77: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x78: @ lshWaitForAnimEnd()
0x79: Pop(0)
0x7a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: GOTO 0x82

0x7d: PushEmpty(string)
0x7e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f: Call 0x1e8

0x80: Pop(1)
0x81: GOTO 0x78

0x82: GOTO 0x91

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ WaitForAnimEnd()
0x88: Pop(0)
0x89: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x91

0x8c: Push("all")
0x8d: Push("idle")
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: GOTO 0x87

0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: PushEmpty(bool)
0x94: Call 0x2de

0x95: Pop(0)
0x96: Pop(1); Push((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Return(); Pop(0)

0x99: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[-2]
0x9e: Call 0x1e8

0x9f: Pop(1)
0xa0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: Push((int) 1)
0xa4: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0xa5: PushEmpty()
0xa6: Call 0x1fa

0xa7: Pop(0)
0xa8: Push((int) 8110)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call 0x247

0xaf: Pop(2)
0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call 0x24d

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call 0x241

0xb9: Pop(2)
0xba: Push((int) 7438)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Call 0x272

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call 0x92

0xc5: Pop(1)
0xc6: Push((int) 6748)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: Push((int) 6749)
0xcc: Push((int) 7440)
0xcd: Push((int) 7439)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 7345)
0xd1: Push((int) 7440)
0xd2: Push((int) 8098)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Push((int) 7350)
0xd6: Push((int) 7440)
0xd7: Push((int) 8104)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call 0x92

0xde: Pop(1)
0xdf: Push((int) 6753)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 6754)
0xe5: Push((int) 8102)
0xe6: Push((int) 7444)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 8102)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call 0x92

0xf0: Pop(1)
0xf1: Push((int) 7348)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 7349)
0xf7: Push((int) -1)
0xf8: Push((int) 8103)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 7440)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call 0x92

0x102: Pop(1)
0x103: Push((int) 6750)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 6751)
0x109: Push((int) 8099)
0x10a: Push((int) 7441)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 7356)
0x10e: Push((int) 8106)
0x10f: Push((int) 8111)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 8099)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call 0x92

0x119: Pop(1)
0x11a: Push((int) 7346)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 7347)
0x120: Push((int) 8106)
0x121: Push((int) 8100)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 8106)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call 0x92

0x12b: Pop(1)
0x12c: Push((int) 7351)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 7352)
0x132: Push((int) 7442)
0x133: Push((int) 8107)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 7357)
0x137: Push((int) 7442)
0x138: Push((int) 8113)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 7442)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call 0x92

0x142: Pop(1)
0x143: Push((int) 6752)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 7353)
0x149: Push((int) 8109)
0x14a: Push((int) 8108)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 7358)
0x14e: Push((int) 8109)
0x14f: Push((int) 8115)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 8109)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call 0x92

0x159: Pop(1)
0x15a: Push((int) 7354)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 7355)
0x160: Push((int) -1)
0x161: Push((int) 8110)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x166: PushEmpty(bool)
0x167: Call 0x2de

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16a: @ lshStopAnimation()
0x16b: Pop(0)
0x16c: GOTO 0x16f

0x16d: @ StopAnimation()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0xa3

0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty(int, object)
0x174: Stack[-1] = Stack[-3]
0x175: Push(-2, 1); TaskCall(0)
0x176: Call 0x0

0x177: Pop(-2, 1); TaskReturn
0x178: Pop(2)
0x179: Return(); Pop(0)

0x17a: @ Hold()
0x17b: Pop(0)
0x17c: GOTO 0x17a

0x17d: Return(); Pop(0)

0x17e: PushEmpty(bool, bool)
0x17f: Push("cleanup")
0x180: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x182: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x183: @ IsLoaded(Stack[-1])
0x184: Pop(0)
0x185: PushEmpty(bool)
0x186: Stack[-1] = (bool) 0
0x187: Pop(0); Push((bool) Stack[-2] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(bool)
0x18a: Call 0x1aa

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(object)
0x190: Call 0x201

0x191: Pop(0)
0x192: @ RemoveActor(Stack[-1])
0x193: Pop(1)
0x194: GOTO 0x199

0x195: Push("restore")
0x196: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x199: Return(); Pop(2)

0x19a: PushEmpty(bool)
0x19b: Stack[-1] = (bool) 0
0x19c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(bool)
0x19f: Call 0x1aa

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(object)
0x1a5: Call 0x201

0x1a6: Pop(0)
0x1a7: @ RemoveActor(Stack[-1])
0x1a8: Pop(1)
0x1a9: Return(); Pop(0)

0x1aa: Stack[-1] = (bool) 1
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1ad: @@ GetPosition(Stack[-7])
0x1ae: Pop(0)
0x1af: @@ GetEyesHeight(Stack[-8])
0x1b0: Pop(0)
0x1b1: Push(CvectorIndex(Stack[-7], 1))
0x1b2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1b3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1b4: @ GetPosition(Stack[-6])
0x1b5: Pop(0)
0x1b6: @ GetEyesHeight(Stack[-8])
0x1b7: Pop(0)
0x1b8: Push(CvectorIndex(Stack[-6], 1))
0x1b9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ba: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1bb: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1bc: Push(CvectorIndex(Stack[-5], 1))
0x1bd: Stack[-1] = (int) 0
0x1be: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1bf: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1c0: Pop(1); Push(Sqrt(Stack[-1]))
0x1c1: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1c2: Stack[-4] = -Stack[-5]; Pop(0);
0x1c3: Push((int) 70)
0x1c4: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1c5: PushEmpty(cvector, cvector)
0x1c6: Push(CVector(0.0, 1.0, 0.0))
0x1c7: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1c8: Call 0x207

0x1c9: Pop(1)
0x1ca: Push((int) 25)
0x1cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cd: Push(CVector(0.0, 10.0, 0.0))
0x1ce: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1cf: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1d0: @ IsOverrideActive(Stack[-1])
0x1d1: Pop(0)
0x1d2: Push(Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Stack[-18] = (bool) 0
0x1d5: Return(); Pop(16)

0x1d6: @ StopWorld()
0x1d7: Pop(0)
0x1d8: @ CameraTransit(Stack[-2], Stack[-4])
0x1d9: Pop(0)
0x1da: Push(CvectorIndex(Stack[-3], 0))
0x1db: Push(CvectorIndex(Stack[-4], 2))
0x1dc: @ Rotate(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: @ CameraWaitForPlayFinish()
0x1df: Pop(0)
0x1e0: @ ResumeWorld()
0x1e1: Pop(0)
0x1e2: Stack[-18] = (bool) 1
0x1e3: Return(); Pop(16)

0x1e4: PushEmpty()
0x1e5: @ CameraSwitchToNormal()
0x1e6: Pop(0)
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(float, float, float, float)
0x1e9: Push("playing ")
0x1ea: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1eb: @ Trace(Stack[-1])
0x1ec: Pop(1)
0x1ed: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1ee: Pop(0)
0x1ef: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1f0: Pop(0)
0x1f1: Push("start: ")
0x1f2: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1f3: @ Trace(Stack[-1])
0x1f4: Pop(1)
0x1f5: Push("end: ")
0x1f6: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1f7: @ Trace(Stack[-1])
0x1f8: Pop(1)
0x1f9: Return(); Pop(4)

0x1fa: PushEmpty(bool)
0x1fb: Call 0x2de

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: @ lshStopSpeech()
0x1ff: Pop(0)
0x200: Return(); Pop(0)

0x201: PushEmpty(object, object)
0x202: @ self(Stack[-1])
0x203: Pop(0)
0x204: Stack[-3] = Stack[-1]
0x205: Return(); Pop(2)

0x206: Stack[-1] = 0
0x207: PushEmpty(float, float)
0x208: Pop(0); Push(Stack[-3] | Stack[-3]);
0x209: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20a: Push((float)0.0)
0x20b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x20e: Return(); Pop(2)

0x20f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x210: Return(); Pop(2)

0x211: PushEmpty(int, int)
0x212: @ GetVariable(Stack[-3], Stack[-1])
0x213: Pop(0)
0x214: Stack[-4] = Stack[-1]
0x215: Return(); Pop(2)

0x216: PushEmpty(int, int, bool, int, int, bool)
0x217: @@ GetItemID(Stack[-3])
0x218: Pop(0)
0x219: Push("Category")
0x21a: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x21b: Pop(1)
0x21c: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x21d: Pop(0)
0x21e: Pop(0); Push((bool) Stack[-1] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: @@ DropItems(Stack[-8], Stack[-7])
0x221: Pop(0)
0x222: Return(); Pop(6)

0x223: PushEmpty(object, object)
0x224: @ CreateInvItem(Stack[-1])
0x225: Pop(0)
0x226: @@ SetItemName(Stack[-4])
0x227: Pop(0)
0x228: PushEmpty(object, object, int)
0x229: Stack[-3] = Stack[-8]
0x22a: Stack[-2] = Stack[-4]
0x22b: Stack[-1] = Stack[-6]
0x22c: Call 0x216

0x22d: Pop(3)
0x22e: Return(); Pop(2)

0x22f: Stack[-1] = 0
0x230: PushEmpty(object, object)
0x231: @ FindActor(Stack[-1], Stack[-4])
0x232: Pop(0)
0x233: Pop(0); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-5] = (bool) 0
0x236: Return(); Pop(2)

0x237: @ Trigger(Stack[-1], Stack[-3])
0x238: Pop(0)
0x239: Stack[-5] = (bool) 1
0x23a: Return(); Pop(2)

0x23b: Stack[-1] = 0
0x23c: PushEmpty(float, float)
0x23d: @ GetGameTime(Stack[-1])
0x23e: Pop(0)
0x23f: Stack[-3] = Stack[-1]
0x240: Return(); Pop(2)

0x241: PushEmpty()
0x242: Push("playsound")
0x243: Push("giveitem")
0x244: @ TriggerWorld(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: Return(); Pop(0)

0x247: PushEmpty()
0x248: Push("ood2WomanD1")
0x249: Push((int) 1)
0x24a: @ SetVariable(Stack[-2], Stack[-1])
0x24b: Pop(2)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(object, object)
0x24e: Push("d2q01")
0x24f: Push((int) 5)
0x250: @ SetVariable(Stack[-2], Stack[-1])
0x251: Pop(2)
0x252: PushEmpty(object)
0x253: Call 0x2a8

0x254: Stack[-2] = Stack[-1]
0x255: Pop(1)
0x256: Push("d2q01WomanDGotoAlexandr")
0x257: Push("pt_map_alexandr")
0x258: Push((int) 1)
0x259: Push((int) 15271)
0x25a: PushEmpty(float)
0x25b: Call 0x23c

0x25c: Pop(0)
0x25d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(5)
0x25f: PushEmpty()
0x260: Call 0x2ca

0x261: Pop(0)
0x262: Push("key is given")
0x263: @ Trace(Stack[-1])
0x264: Pop(1)
0x265: PushEmpty(object, string, int)
0x266: Stack[-3] = Stack[-7]
0x267: Stack[-2] = "d2q01_key"
0x268: Stack[-1] = (int) 1
0x269: Call 0x223

0x26a: Pop(3)
0x26b: PushEmpty(bool, string, string)
0x26c: Stack[-2] = "quest_d2_01"
0x26d: Stack[-1] = "cursed_women"
0x26e: Call 0x230

0x26f: Pop(3)
0x270: Return(); Pop(2)

0x271: Stack[-1] = 0
0x272: PushEmpty()
0x273: PushEmpty(int, string)
0x274: Stack[-1] = "ood2WomanD1"
0x275: Call 0x211

0x276: Pop(1)
0x277: Push((int) 0)
0x278: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-2] = (bool) 1
0x27b: Return(); Pop(0)

0x27c: Stack[-2] = (bool) 0
0x27d: Return(); Pop(0)

0x27e: PushEmpty(object, object)
0x27f: @ GetDiaryRoot(Stack[-1])
0x280: Pop(0)
0x281: Pop(0); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: Push("Can't retrieve diary root")
0x284: @ Trace(Stack[-1])
0x285: Pop(1)
0x286: Stack[-3] = (bool) 0
0x287: Return(); Pop(2)

0x288: Stack[-3] = Stack[-1]
0x289: Return(); Pop(2)

0x28a: Stack[-1] = 0
0x28b: PushEmpty(object, object, int, object, object, int)
0x28c: PushEmpty(object)
0x28d: Call 0x27e

0x28e: Stack[-4] = Stack[-1]
0x28f: Pop(1)
0x290: @@ Find(Stack[-7], Stack[-2])
0x291: Pop(0)
0x292: Pop(0); Push((bool) Stack[-2] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x294: Push("Can't find diary parent with id: ")
0x295: Pop(1); Push(Stack[-1] + Stack[-8]);
0x296: @ Trace(Stack[-1])
0x297: Pop(1)
0x298: Stack[-9] = (bool) 0
0x299: Return(); Pop(6)

0x29a: @@ AddChild(Stack[-8])
0x29b: Pop(0)
0x29c: Push("player_diary")
0x29d: Push((int) 1)
0x29e: @ SetVariable(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: @@ GetCategory(Stack[-1])
0x2a1: Pop(0)
0x2a2: @ SetDiarySection(Stack[-1])
0x2a3: Pop(0)
0x2a4: Stack[-9] = (bool) 0
0x2a5: Return(); Pop(6)

0x2a6: Stack[-2] = 0
0x2a7: Stack[-3] = 0
0x2a8: PushEmpty(object, object, object, object)
0x2a9: @ GetMainOutdoorScene(Stack[-2])
0x2aa: Pop(0)
0x2ab: Pop(0); Push((bool) Stack[-2] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ad: Push("Can't find main outdoor scene")
0x2ae: @ Trace(Stack[-1])
0x2af: Pop(1)
0x2b0: Stack[-1] = 0
0x2b1: Stack[-5] = Stack[-1]
0x2b2: Return(); Pop(4)

0x2b3: @@ GetMap(Stack[-1])
0x2b4: Pop(0)
0x2b5: Stack[-5] = Stack[-1]
0x2b6: Return(); Pop(4)

0x2b7: Stack[-1] = 0
0x2b8: Stack[-2] = 0
0x2b9: PushEmpty(int, int)
0x2ba: Push("player")
0x2bb: @ GetVariable(Stack[-1], Stack[-2])
0x2bc: Pop(1)
0x2bd: Push((int) 0)
0x2be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c0: Stack[-3] = (int) 200001
0x2c1: Return(); Pop(2)

0x2c2: GOTO 0x2c8

0x2c3: Push((int) 1)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-3] = (int) 200002
0x2c7: Return(); Pop(2)

0x2c8: Stack[-3] = (int) 200003
0x2c9: Return(); Pop(2)

0x2ca: PushEmpty(object, object)
0x2cb: Push("Adding diary entry")
0x2cc: @ Trace(Stack[-1])
0x2cd: Pop(1)
0x2ce: Push((int) 54)
0x2cf: Push((int) 1)
0x2d0: Push((int) 12136)
0x2d1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: PushEmpty(bool, object, int)
0x2d4: Stack[-2] = Stack[-4]
0x2d5: Stack[-1] = (int) 10
0x2d6: Call 0x28b

0x2d7: Pop(3)
0x2d8: Return(); Pop(2)

0x2d9: Stack[-1] = 0
0x2da: Stack[-1] = (int) 3352
0x2db: Return(); Pop(0)

0x2dc: Stack[-1] = "ui/NPC_None.png"
0x2dd: Return(); Pop(0)

0x2de: Stack[-1] = (bool) 0
0x2df: Return(); Pop(0)

