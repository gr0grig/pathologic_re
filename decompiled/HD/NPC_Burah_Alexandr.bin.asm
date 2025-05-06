GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Strict
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Alexandr.png
	ui/NPC_Alexandr_b.png
	b2q01
	b2q01AlexandrGotoOspina
	pt_map_ospina
	AddMark
	oob2Alexandr1
	oob2Alexandr2
	key is given
	b2q01_key
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x507
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x30f Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3df Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4dd Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x553 Vars = (int)
		EVENT_6 Op = 0x579 Vars = ()
		EVENT_5 Op = 0x588 Vars = ()
		EVENT_45 Op = 0x595 Vars = (bool)
		EVENT_0 Op = 0x5a1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x62a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x7af

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7ad

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7b1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7b3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x881

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x740

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x681

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x66f

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x7f5

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xb3

0x5f: Pop(1)
0x60: Push((int) 518239)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 518240)
0x66: Push((int) 20533)
0x67: Push((int) 19349)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 519398)
0x6b: Push((int) 20561)
0x6c: Push((int) 20560)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x95

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xb3

0x73: Pop(1)
0x74: Push((int) 518241)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x801

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 519376)
0x7f: Push((int) 20538)
0x80: Push((int) 20537)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x80d

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: Push((int) 519382)
0x89: Push((int) 20544)
0x8a: Push((int) 20543)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: Push((int) 518242)
0x8e: Push((int) -1)
0x8f: Push((int) 19351)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: GOTO 0x95

0x93: Return(); Pop(0)

0x94: GOTO 0x55

0x95: PushEmpty(bool)
0x96: Call2 0x7b5

0x97: Pop(0)
0x98: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x99: @ lshWaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: PushEmpty(string)
0x9f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa0: Call2 0x70b

0xa1: Pop(1)
0xa2: GOTO 0x99

0xa3: GOTO 0xb2

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ WaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: Push("all")
0xae: Push("idle")
0xaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: GOTO 0xa8

0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: PushEmpty(bool)
0xb5: Call2 0x7b5

0xb6: Pop(0)
0xb7: Pop(1); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = Stack[-3]
0xbf: Push("")
0xc0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-1] = (bool) 0
0xc3: GOTO 0xc5

0xc4: Stack[-1] = (bool) 1
0xc5: Call2 0x71b

0xc6: Pop(2)
0xc7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Push((int) 1)
0xcb: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0xcc: PushEmpty()
0xcd: Call2 0x739

0xce: Pop(0)
0xcf: Push((int) 20555)
0xd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0x7b7

0xd6: Pop(2)
0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0x7e5

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x7da

0xe0: Pop(2)
0xe1: Push((int) 20574)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x7b7

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x7e5

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x7da

0xf2: Pop(2)
0xf3: Push((int) 20537)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x7ce

0xfa: Pop(2)
0xfb: Push((int) 20543)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x7d4

0x102: Pop(2)
0x103: Push((int) 19348)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call2 0x7f5

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0xb3

0x10e: Pop(1)
0x10f: Push((int) 518239)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 518240)
0x115: Push((int) 20533)
0x116: Push((int) 19349)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 519398)
0x11a: Push((int) 20561)
0x11b: Push((int) 20560)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0xb3

0x122: Pop(1)
0x123: Push((int) 518241)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Call2 0x801

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12d: Push((int) 519376)
0x12e: Push((int) 20538)
0x12f: Push((int) 20537)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x80d

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: Push((int) 519382)
0x138: Push((int) 20544)
0x139: Push((int) 20543)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 518242)
0x13d: Push((int) -1)
0x13e: Push((int) 19351)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 20544)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0xb3

0x148: Pop(1)
0x149: Push((int) 519383)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 519384)
0x14f: Push((int) 20546)
0x150: Push((int) 20545)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 20546)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xb3

0x15a: Pop(1)
0x15b: Push((int) 519385)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 519387)
0x161: Push((int) 20549)
0x162: Push((int) 20548)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 519386)
0x166: Push((int) -1)
0x167: Push((int) 20547)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 20549)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0xb3

0x171: Pop(1)
0x172: Push((int) 519388)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 519389)
0x178: Push((int) -1)
0x179: Push((int) 20550)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 519390)
0x17d: Push((int) -1)
0x17e: Push((int) 20551)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 20538)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0xb3

0x188: Pop(1)
0x189: Push((int) 519377)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: Push((int) 519378)
0x18f: Push((int) 20540)
0x190: Push((int) 20539)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 20540)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xb3

0x19a: Pop(1)
0x19b: Push((int) 519379)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 519380)
0x1a1: Push((int) -1)
0x1a2: Push((int) 20541)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Push((int) 519381)
0x1a6: Push((int) -1)
0x1a7: Push((int) 20542)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 20561)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0xb3

0x1b1: Pop(1)
0x1b2: Push((int) 519399)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 519400)
0x1b8: Push((int) 20563)
0x1b9: Push((int) 20562)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 20563)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0xb3

0x1c3: Pop(1)
0x1c4: Push((int) 519401)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 519402)
0x1ca: Push((int) 20565)
0x1cb: Push((int) 20564)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 20565)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral"
0x1d4: Call2 0xb3

0x1d5: Pop(1)
0x1d6: Push((int) 519403)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 519404)
0x1dc: Push((int) 20533)
0x1dd: Push((int) 20566)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 20533)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call2 0xb3

0x1e7: Pop(1)
0x1e8: Push((int) 519372)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 519373)
0x1ee: Push((int) 20535)
0x1ef: Push((int) 20534)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 519395)
0x1f3: Push((int) 20557)
0x1f4: Push((int) 20556)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 20557)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "Neutral"
0x1fd: Call2 0xb3

0x1fe: Pop(1)
0x1ff: Push((int) 519396)
0x200: @@ SetMessage(Stack[-1])
0x201: Pop(1)
0x202: @@ ClearReplies()
0x203: Pop(0)
0x204: Push((int) 519397)
0x205: Push((int) 20552)
0x206: Push((int) 20558)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Push((int) 20535)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0xb3

0x210: Pop(1)
0x211: Push((int) 519374)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 519375)
0x217: Push((int) 20552)
0x218: Push((int) 20536)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 519406)
0x21c: Push((int) 20571)
0x21d: Push((int) 20570)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 20571)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral"
0x226: Call2 0xb3

0x227: Pop(1)
0x228: Push((int) 519407)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 519408)
0x22e: Push((int) 20557)
0x22f: Push((int) 20572)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 20552)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call2 0xb3

0x239: Pop(1)
0x23a: Push((int) 519391)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 519392)
0x240: Push((int) 20554)
0x241: Push((int) 20553)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 519405)
0x245: Push((int) 20554)
0x246: Push((int) 20568)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 20554)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Strict"
0x24f: Call2 0xb3

0x250: Pop(1)
0x251: Push((int) 519393)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 519394)
0x257: Push((int) -1)
0x258: Push((int) 20555)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 519409)
0x25c: Push((int) -1)
0x25d: Push((int) 20574)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x262: PushEmpty(bool)
0x263: Call2 0x7b5

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x266: @ lshStopAnimation()
0x267: Pop(0)
0x268: GOTO 0x26b

0x269: @ StopAnimation()
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: GOTO 0xca

0x26d: Return(); Pop(0)

0x26e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x26f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x270: PushEmpty(bool, object, float)
0x271: Stack[-2] = Stack[-12]
0x272: Stack[-1] = (float) 70.0
0x273: Call2 0x62a

0x274: Pop(2)
0x275: Pop(1); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: Stack[-10] = (int) -2
0x278: Return(); Pop(8)

0x279: @ CreateDialog(Stack[-4])
0x27a: Pop(0)
0x27b: PushEmpty(int)
0x27c: Call2 0x7af

0x27d: Pop(0)
0x27e: @@ SetNPCName(Stack[-1])
0x27f: Pop(1)
0x280: PushEmpty(int)
0x281: Call2 0x7ad

0x282: Pop(0)
0x283: @@ SetNPCDescription(Stack[-1])
0x284: Pop(1)
0x285: PushEmpty(string)
0x286: Call2 0x7b1

0x287: Pop(0)
0x288: @@ SetPhoto(Stack[-1])
0x289: Pop(1)
0x28a: PushEmpty(string)
0x28b: Call2 0x7b3

0x28c: Pop(0)
0x28d: @@ SetPhoto2(Stack[-1])
0x28e: Pop(1)
0x28f: PushEmpty(int)
0x290: Call2 0x881

0x291: Pop(0)
0x292: @@ SetPlayerName(Stack[-1])
0x293: Pop(1)
0x294: Stack[-2] = (int) -1
0x295: @ IsOverrideActive(Stack[-3])
0x296: Pop(0)
0x297: Push(Stack[-3])
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-10] = (int) -2
0x29a: Return(); Pop(8)

0x29b: @ DoDialog(Stack[-4])
0x29c: Pop(0)
0x29d: PushEmpty(bool, object)
0x29e: PushEmpty(object)
0x29f: Call2 0x740

0x2a0: Stack[-2] = Stack[-1]
0x2a1: Pop(1)
0x2a2: Call2 0x681

0x2a3: Pop(2)
0x2a4: PushEmpty(object, object)
0x2a5: Stack[-2] = Stack[-11]
0x2a6: Stack[-1] = Stack[-6]
0x2a7: Push(-2, 4); TaskCall(3)
0x2a8: Call2 0x2bf

0x2a9: Pop(-2, 4); TaskReturn
0x2aa: Pop(2)
0x2ab: @@ IsDialogEnd(Stack[-1])
0x2ac: Pop(0)
0x2ad: Pop(0); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: @ sync()
0x2b0: Pop(0)
0x2b1: @@ IsDialogEnd(Stack[-1])
0x2b2: Pop(0)
0x2b3: GOTO 0x2ad

0x2b4: PushEmpty(object)
0x2b5: Stack[-1] = Stack[-10]
0x2b6: Call2 0x66f

0x2b7: Pop(1)
0x2b8: @ StopDialog(Stack[-4])
0x2b9: Pop(0)
0x2ba: @@ GetReturnValue(Stack[-2])
0x2bb: Pop(0)
0x2bc: Stack[-10] = Stack[-2]
0x2bd: Return(); Pop(8)

0x2be: Stack[-4] = 0
0x2bf: PushEmpty()
0x2c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2c1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2c2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c3: Push((int) 1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c5: PushEmpty(string)
0x2c6: Stack[-1] = "Strict"
0x2c7: Call2 0x2f9

0x2c8: Pop(1)
0x2c9: Push((int) 520670)
0x2ca: @@ SetMessage(Stack[-1])
0x2cb: Pop(1)
0x2cc: @@ ClearReplies()
0x2cd: Pop(0)
0x2ce: Push((int) 520671)
0x2cf: Push((int) -1)
0x2d0: Push((int) 21878)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Push((int) 527796)
0x2d4: Push((int) -1)
0x2d5: Push((int) 29129)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: GOTO 0x2db

0x2d9: Return(); Pop(0)

0x2da: GOTO 0x2c3

0x2db: PushEmpty(bool)
0x2dc: Call2 0x7b5

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2df: @ lshWaitForAnimEnd()
0x2e0: Pop(0)
0x2e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2e9

0x2e4: PushEmpty(string)
0x2e5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2e6: Call2 0x70b

0x2e7: Pop(1)
0x2e8: GOTO 0x2df

0x2e9: GOTO 0x2f8

0x2ea: Push("all")
0x2eb: Push("idle")
0x2ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: @ WaitForAnimEnd()
0x2ef: Pop(0)
0x2f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: GOTO 0x2f8

0x2f3: Push("all")
0x2f4: Push("idle")
0x2f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: GOTO 0x2ee

0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: PushEmpty(bool)
0x2fb: Call2 0x7b5

0x2fc: Pop(0)
0x2fd: Pop(1); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: Return(); Pop(0)

0x300: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: Return(); Pop(0)

0x303: PushEmpty(string, bool)
0x304: Stack[-2] = Stack[-3]
0x305: Push("")
0x306: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: Stack[-1] = (bool) 0
0x309: GOTO 0x30b

0x30a: Stack[-1] = (bool) 1
0x30b: Call2 0x71b

0x30c: Pop(2)
0x30d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Push((int) 1)
0x311: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x312: PushEmpty()
0x313: Call2 0x739

0x314: Pop(0)
0x315: Push((int) 21877)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Strict"
0x31a: Call2 0x2f9

0x31b: Pop(1)
0x31c: Push((int) 520670)
0x31d: @@ SetMessage(Stack[-1])
0x31e: Pop(1)
0x31f: @@ ClearReplies()
0x320: Pop(0)
0x321: Push((int) 520671)
0x322: Push((int) -1)
0x323: Push((int) 21878)
0x324: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x325: Pop(3)
0x326: Push((int) 527796)
0x327: Push((int) -1)
0x328: Push((int) 29129)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: Return(); Pop(0)

0x32c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x32d: PushEmpty(bool)
0x32e: Call2 0x7b5

0x32f: Pop(0)
0x330: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x331: @ lshStopAnimation()
0x332: Pop(0)
0x333: GOTO 0x336

0x334: @ StopAnimation()
0x335: Pop(0)
0x336: Return(); Pop(0)

0x337: GOTO 0x310

0x338: Return(); Pop(0)

0x339: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x33a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33b: PushEmpty(bool, object, float)
0x33c: Stack[-2] = Stack[-12]
0x33d: Stack[-1] = (float) 70.0
0x33e: Call2 0x62a

0x33f: Pop(2)
0x340: Pop(1); Push((bool) Stack[-1] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-10] = (int) -2
0x343: Return(); Pop(8)

0x344: @ CreateDialog(Stack[-4])
0x345: Pop(0)
0x346: PushEmpty(int)
0x347: Call2 0x7af

0x348: Pop(0)
0x349: @@ SetNPCName(Stack[-1])
0x34a: Pop(1)
0x34b: PushEmpty(int)
0x34c: Call2 0x7ad

0x34d: Pop(0)
0x34e: @@ SetNPCDescription(Stack[-1])
0x34f: Pop(1)
0x350: PushEmpty(string)
0x351: Call2 0x7b1

0x352: Pop(0)
0x353: @@ SetPhoto(Stack[-1])
0x354: Pop(1)
0x355: PushEmpty(string)
0x356: Call2 0x7b3

0x357: Pop(0)
0x358: @@ SetPhoto2(Stack[-1])
0x359: Pop(1)
0x35a: PushEmpty(int)
0x35b: Call2 0x881

0x35c: Pop(0)
0x35d: @@ SetPlayerName(Stack[-1])
0x35e: Pop(1)
0x35f: Stack[-2] = (int) -1
0x360: @ IsOverrideActive(Stack[-3])
0x361: Pop(0)
0x362: Push(Stack[-3])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-10] = (int) -2
0x365: Return(); Pop(8)

0x366: @ DoDialog(Stack[-4])
0x367: Pop(0)
0x368: PushEmpty(bool, object)
0x369: PushEmpty(object)
0x36a: Call2 0x740

0x36b: Stack[-2] = Stack[-1]
0x36c: Pop(1)
0x36d: Call2 0x681

0x36e: Pop(2)
0x36f: PushEmpty(object, object)
0x370: Stack[-2] = Stack[-11]
0x371: Stack[-1] = Stack[-6]
0x372: Push(-2, 4); TaskCall(5)
0x373: Call2 0x38a

0x374: Pop(-2, 4); TaskReturn
0x375: Pop(2)
0x376: @@ IsDialogEnd(Stack[-1])
0x377: Pop(0)
0x378: Pop(0); Push((bool) Stack[-1] == 0)
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: @ sync()
0x37b: Pop(0)
0x37c: @@ IsDialogEnd(Stack[-1])
0x37d: Pop(0)
0x37e: GOTO 0x378

0x37f: PushEmpty(object)
0x380: Stack[-1] = Stack[-10]
0x381: Call2 0x66f

0x382: Pop(1)
0x383: @ StopDialog(Stack[-4])
0x384: Pop(0)
0x385: @@ GetReturnValue(Stack[-2])
0x386: Pop(0)
0x387: Stack[-10] = Stack[-2]
0x388: Return(); Pop(8)

0x389: Stack[-4] = 0
0x38a: PushEmpty()
0x38b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x38c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x38d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x38e: Push((int) 1)
0x38f: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x390: PushEmpty(string)
0x391: Stack[-1] = "Neutral"
0x392: Call2 0x3c9

0x393: Pop(1)
0x394: Push((int) 535294)
0x395: @@ SetMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ ClearReplies()
0x398: Pop(0)
0x399: Push((int) 535295)
0x39a: Push((int) 36973)
0x39b: Push((int) 36972)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Push((int) 535302)
0x39f: Push((int) -1)
0x3a0: Push((int) 36980)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Push((int) 535303)
0x3a4: Push((int) -1)
0x3a5: Push((int) 36981)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: GOTO 0x3ab

0x3a9: Return(); Pop(0)

0x3aa: GOTO 0x38e

0x3ab: PushEmpty(bool)
0x3ac: Call2 0x7b5

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3af: @ lshWaitForAnimEnd()
0x3b0: Pop(0)
0x3b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: GOTO 0x3b9

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b6: Call2 0x70b

0x3b7: Pop(1)
0x3b8: GOTO 0x3af

0x3b9: GOTO 0x3c8

0x3ba: Push("all")
0x3bb: Push("idle")
0x3bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: @ WaitForAnimEnd()
0x3bf: Pop(0)
0x3c0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: GOTO 0x3c8

0x3c3: Push("all")
0x3c4: Push("idle")
0x3c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: GOTO 0x3be

0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: PushEmpty(bool)
0x3cb: Call2 0x7b5

0x3cc: Pop(0)
0x3cd: Pop(1); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Return(); Pop(0)

0x3d0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Return(); Pop(0)

0x3d3: PushEmpty(string, bool)
0x3d4: Stack[-2] = Stack[-3]
0x3d5: Push("")
0x3d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-1] = (bool) 0
0x3d9: GOTO 0x3db

0x3da: Stack[-1] = (bool) 1
0x3db: Call2 0x71b

0x3dc: Pop(2)
0x3dd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: Push((int) 1)
0x3e1: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x3e2: PushEmpty()
0x3e3: Call2 0x739

0x3e4: Pop(0)
0x3e5: Push((int) 36971)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Neutral"
0x3ea: Call2 0x3c9

0x3eb: Pop(1)
0x3ec: Push((int) 535294)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 535295)
0x3f2: Push((int) 36973)
0x3f3: Push((int) 36972)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Push((int) 535302)
0x3f7: Push((int) -1)
0x3f8: Push((int) 36980)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Push((int) 535303)
0x3fc: Push((int) -1)
0x3fd: Push((int) 36981)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Push((int) 36973)
0x402: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x404: PushEmpty(string)
0x405: Stack[-1] = "Neutral"
0x406: Call2 0x3c9

0x407: Pop(1)
0x408: Push((int) 535296)
0x409: @@ SetMessage(Stack[-1])
0x40a: Pop(1)
0x40b: @@ ClearReplies()
0x40c: Pop(0)
0x40d: Push((int) 535297)
0x40e: Push((int) 36975)
0x40f: Push((int) 36974)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Push((int) 535301)
0x413: Push((int) 36975)
0x414: Push((int) 36978)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Return(); Pop(0)

0x418: Push((int) 36975)
0x419: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x41b: PushEmpty(string)
0x41c: Stack[-1] = "Neutral"
0x41d: Call2 0x3c9

0x41e: Pop(1)
0x41f: Push((int) 535298)
0x420: @@ SetMessage(Stack[-1])
0x421: Pop(1)
0x422: @@ ClearReplies()
0x423: Pop(0)
0x424: Push((int) 535299)
0x425: Push((int) -1)
0x426: Push((int) 36976)
0x427: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: Push((int) 535300)
0x42a: Push((int) -1)
0x42b: Push((int) 36977)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Return(); Pop(0)

0x42f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x430: PushEmpty(bool)
0x431: Call2 0x7b5

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x434: @ lshStopAnimation()
0x435: Pop(0)
0x436: GOTO 0x439

0x437: @ StopAnimation()
0x438: Pop(0)
0x439: Return(); Pop(0)

0x43a: GOTO 0x3e0

0x43b: Return(); Pop(0)

0x43c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x43d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x43e: PushEmpty(bool, object, float)
0x43f: Stack[-2] = Stack[-12]
0x440: Stack[-1] = (float) 70.0
0x441: Call2 0x62a

0x442: Pop(2)
0x443: Pop(1); Push((bool) Stack[-1] == 0)
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-10] = (int) -2
0x446: Return(); Pop(8)

0x447: @ CreateDialog(Stack[-4])
0x448: Pop(0)
0x449: PushEmpty(int)
0x44a: Call2 0x7af

0x44b: Pop(0)
0x44c: @@ SetNPCName(Stack[-1])
0x44d: Pop(1)
0x44e: PushEmpty(int)
0x44f: Call2 0x7ad

0x450: Pop(0)
0x451: @@ SetNPCDescription(Stack[-1])
0x452: Pop(1)
0x453: PushEmpty(string)
0x454: Call2 0x7b1

0x455: Pop(0)
0x456: @@ SetPhoto(Stack[-1])
0x457: Pop(1)
0x458: PushEmpty(string)
0x459: Call2 0x7b3

0x45a: Pop(0)
0x45b: @@ SetPhoto2(Stack[-1])
0x45c: Pop(1)
0x45d: PushEmpty(int)
0x45e: Call2 0x881

0x45f: Pop(0)
0x460: @@ SetPlayerName(Stack[-1])
0x461: Pop(1)
0x462: Stack[-2] = (int) -1
0x463: @ IsOverrideActive(Stack[-3])
0x464: Pop(0)
0x465: Push(Stack[-3])
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-10] = (int) -2
0x468: Return(); Pop(8)

0x469: @ DoDialog(Stack[-4])
0x46a: Pop(0)
0x46b: PushEmpty(bool, object)
0x46c: PushEmpty(object)
0x46d: Call2 0x740

0x46e: Stack[-2] = Stack[-1]
0x46f: Pop(1)
0x470: Call2 0x681

0x471: Pop(2)
0x472: PushEmpty(object, object)
0x473: Stack[-2] = Stack[-11]
0x474: Stack[-1] = Stack[-6]
0x475: Push(-2, 4); TaskCall(7)
0x476: Call2 0x48d

0x477: Pop(-2, 4); TaskReturn
0x478: Pop(2)
0x479: @@ IsDialogEnd(Stack[-1])
0x47a: Pop(0)
0x47b: Pop(0); Push((bool) Stack[-1] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x47d: @ sync()
0x47e: Pop(0)
0x47f: @@ IsDialogEnd(Stack[-1])
0x480: Pop(0)
0x481: GOTO 0x47b

0x482: PushEmpty(object)
0x483: Stack[-1] = Stack[-10]
0x484: Call2 0x66f

0x485: Pop(1)
0x486: @ StopDialog(Stack[-4])
0x487: Pop(0)
0x488: @@ GetReturnValue(Stack[-2])
0x489: Pop(0)
0x48a: Stack[-10] = Stack[-2]
0x48b: Return(); Pop(8)

0x48c: Stack[-4] = 0
0x48d: PushEmpty()
0x48e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x48f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x490: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x491: Push((int) 1)
0x492: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Neutral"
0x495: Call2 0x4c7

0x496: Pop(1)
0x497: Push((int) 540554)
0x498: @@ SetMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ ClearReplies()
0x49b: Pop(0)
0x49c: Push((int) 540555)
0x49d: Push((int) -1)
0x49e: Push((int) 42564)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Push((int) 540794)
0x4a2: Push((int) -1)
0x4a3: Push((int) 42843)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: GOTO 0x4a9

0x4a7: Return(); Pop(0)

0x4a8: GOTO 0x491

0x4a9: PushEmpty(bool)
0x4aa: Call2 0x7b5

0x4ab: Pop(0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4ad: @ lshWaitForAnimEnd()
0x4ae: Pop(0)
0x4af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: GOTO 0x4b7

0x4b2: PushEmpty(string)
0x4b3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4b4: Call2 0x70b

0x4b5: Pop(1)
0x4b6: GOTO 0x4ad

0x4b7: GOTO 0x4c6

0x4b8: Push("all")
0x4b9: Push("idle")
0x4ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bb: Pop(2)
0x4bc: @ WaitForAnimEnd()
0x4bd: Pop(0)
0x4be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4c0: GOTO 0x4c6

0x4c1: Push("all")
0x4c2: Push("idle")
0x4c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c4: Pop(2)
0x4c5: GOTO 0x4bc

0x4c6: Return(); Pop(0)

0x4c7: PushEmpty()
0x4c8: PushEmpty(bool)
0x4c9: Call2 0x7b5

0x4ca: Pop(0)
0x4cb: Pop(1); Push((bool) Stack[-1] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Return(); Pop(0)

0x4ce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: Return(); Pop(0)

0x4d1: PushEmpty(string, bool)
0x4d2: Stack[-2] = Stack[-3]
0x4d3: Push("")
0x4d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-1] = (bool) 0
0x4d7: GOTO 0x4d9

0x4d8: Stack[-1] = (bool) 1
0x4d9: Call2 0x71b

0x4da: Pop(2)
0x4db: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Push((int) 1)
0x4df: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4e0: PushEmpty()
0x4e1: Call2 0x739

0x4e2: Pop(0)
0x4e3: Push((int) 42563)
0x4e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4e6: PushEmpty(string)
0x4e7: Stack[-1] = "Neutral"
0x4e8: Call2 0x4c7

0x4e9: Pop(1)
0x4ea: Push((int) 540554)
0x4eb: @@ SetMessage(Stack[-1])
0x4ec: Pop(1)
0x4ed: @@ ClearReplies()
0x4ee: Pop(0)
0x4ef: Push((int) 540555)
0x4f0: Push((int) -1)
0x4f1: Push((int) 42564)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Push((int) 540794)
0x4f5: Push((int) -1)
0x4f6: Push((int) 42843)
0x4f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f8: Pop(3)
0x4f9: Return(); Pop(0)

0x4fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4fb: PushEmpty(bool)
0x4fc: Call2 0x7b5

0x4fd: Pop(0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ff: @ lshStopAnimation()
0x500: Pop(0)
0x501: GOTO 0x504

0x502: @ StopAnimation()
0x503: Pop(0)
0x504: Return(); Pop(0)

0x505: GOTO 0x4de

0x506: Return(); Pop(0)

0x507: Push(GlobalVars[1])
0x508: Stack[-1] = (bool) 0
0x509: GlobalVars[1] = Stack[-1]; Pop(1)
0x50a: PushEmpty()
0x50b: Call2 0x50e

0x50c: Pop(0)
0x50d: Return(); Pop(0)

0x50e: PushEmpty(bool)
0x50f: Call2 0x625

0x510: Pop(0)
0x511: Pop(1); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: @ Hold()
0x514: Pop(0)
0x515: @ GetDirection(Stack[-0])
0x516: Pop(0)
0x517: PushEmpty()
0x518: Call2 0x5be

0x519: Pop(0)
0x51a: GOTO 0x517

0x51b: Return(); Pop(0)

0x51c: PushEmpty(object, object)
0x51d: Push("player")
0x51e: @ FindActor(Stack[-2], Stack[-1])
0x51f: Pop(1)
0x520: Pop(0); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-3] = (bool) 0
0x523: Return(); Pop(2)

0x524: PushEmpty(bool, object)
0x525: Stack[-1] = Stack[-3]
0x526: Call2 0x61c

0x527: Stack[-5] = Stack[-2]
0x528: Pop(2)
0x529: Return(); Pop(2)

0x52a: Stack[-1] = 0
0x52b: Push(CvectorIndex(Stack[-0], 0))
0x52c: Push(CvectorIndex(Stack[-0], 2))
0x52d: @ RotateAsync(Stack[-2], Stack[-1])
0x52e: Pop(2)
0x52f: Return(); Pop(0)

0x530: PushEmpty(object, bool, object, bool)
0x531: Push("player")
0x532: @ FindActor(Stack[-3], Stack[-1])
0x533: Pop(1)
0x534: Pop(0); Push((bool) Stack[-2] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-5] = (bool) 0
0x537: Return(); Pop(4)

0x538: PushEmpty(float, object)
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x60a

0x53b: Pop(1)
0x53c: Push((float)90000.0)
0x53d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53f: Stack[-5] = (bool) 0
0x540: Return(); Pop(4)

0x541: @ CanSee(Stack[-1], Stack[-2])
0x542: Pop(0)
0x543: Stack[-5] = Stack[-1]
0x544: Return(); Pop(4)

0x545: Stack[-2] = 0
0x546: PushEmpty(float, float)
0x547: Push((int) 8)
0x548: Push((int) 16)
0x549: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(2)
0x54b: Push((int) 10)
0x54c: @ SetTimer(Stack[-1], Stack[-2])
0x54d: Pop(1)
0x54e: Return(); Pop(2)

0x54f: Push((int) 10)
0x550: @ KillTimer(Stack[-1])
0x551: Pop(1)
0x552: Return(); Pop(0)

0x553: PushEmpty()
0x554: Push((int) 10)
0x555: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x557: PushEmpty()
0x558: Call2 0x54f

0x559: Pop(0)
0x55a: PushEmpty(bool)
0x55b: Stack[-1] = (bool) 0
0x55c: PushEmpty(bool)
0x55d: Call2 0x625

0x55e: Pop(0)
0x55f: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x560: PushEmpty(bool)
0x561: Call2 0x530

0x562: Pop(0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: Stack[-1] = (bool) 1
0x565: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x566: PushEmpty(bool)
0x567: Call2 0x51c

0x568: Pop(0)
0x569: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56a: PushEmpty(bool, object)
0x56b: PushEmpty(object)
0x56c: Call2 0x740

0x56d: Stack[-2] = Stack[-1]
0x56e: Pop(1)
0x56f: Call2 0x6bb

0x570: Pop(2)
0x571: GOTO 0x578

0x572: PushEmpty()
0x573: Call2 0x52b

0x574: Pop(0)
0x575: PushEmpty()
0x576: Call2 0x546

0x577: Pop(0)
0x578: Return(); Pop(0)

0x579: PushEmpty()
0x57a: Call2 0x605

0x57b: Pop(0)
0x57c: PushEmpty()
0x57d: Call2 0x54f

0x57e: Pop(0)
0x57f: @ lshStopSpeech()
0x580: Pop(0)
0x581: @ lshStopAnimation()
0x582: Pop(0)
0x583: @ StopAsync()
0x584: Pop(0)
0x585: @ Hold()
0x586: Pop(0)
0x587: Return(); Pop(0)

0x588: @ StopGroup0()
0x589: Pop(0)
0x58a: PushEmpty()
0x58b: Call2 0x54f

0x58c: Pop(0)
0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral"
0x58f: Call2 0x70b

0x590: Pop(1)
0x591: PushEmpty()
0x592: Call2 0x546

0x593: Pop(0)
0x594: Return(); Pop(0)

0x595: PushEmpty()
0x596: Push(Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x598: PushEmpty()
0x599: Call2 0x546

0x59a: Pop(0)
0x59b: GOTO 0x5a0

0x59c: PushEmpty(string)
0x59d: Stack[-1] = "Neutral"
0x59e: Call2 0x70b

0x59f: Pop(1)
0x5a0: Return(); Pop(0)

0x5a1: PushEmpty(bool, bool)
0x5a2: @ IsOverrideActive(Stack[-1])
0x5a3: Pop(0)
0x5a4: Pop(0); Push((bool) Stack[-1] == 0)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5a6: EventDisable(0)
0x5a7: PushEmpty()
0x5a8: Call2 0x605

0x5a9: Pop(0)
0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[-5]
0x5ac: Call2 0x61c

0x5ad: Pop(2)
0x5ae: EventEnable(0)
0x5af: PushEmpty(object)
0x5b0: Stack[-1] = Stack[-4]
0x5b1: Call2 0x892

0x5b2: Pop(1)
0x5b3: PushEmpty(string)
0x5b4: Stack[-1] = "Neutral"
0x5b5: Call2 0x70b

0x5b6: Pop(1)
0x5b7: PushEmpty()
0x5b8: Call2 0x54f

0x5b9: Pop(0)
0x5ba: PushEmpty()
0x5bb: Call2 0x546

0x5bc: Pop(0)
0x5bd: Return(); Pop(2)

0x5be: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5bf: @ WaitForAnimEnd()
0x5c0: Pop(0)
0x5c1: PushEmpty(bool)
0x5c2: Call2 0x625

0x5c3: Pop(0)
0x5c4: Pop(1); Push((bool) Stack[-1] == 0)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c6: Return(); Pop(12)

0x5c7: PushEmpty(int)
0x5c8: Call2 0x79c

0x5c9: Stack[-7] = Stack[-1]
0x5ca: Pop(1)
0x5cb: Stack[-5] = (int) 0
0x5cc: PushEmpty(bool)
0x5cd: Stack[-1] = (bool) 0
0x5ce: Push((int) 5)
0x5cf: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d1: PushEmpty(bool)
0x5d2: Call2 0x625

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d5: Stack[-1] = (bool) 1
0x5d6: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5d7: Pop(0); Push((bool) Stack[-6] == 0)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5d9: Push((int) 3)
0x5da: @ Sleep(Stack[-1], Stack[-5])
0x5db: Pop(1)
0x5dc: Pop(0); Push((bool) Stack[-4] == 0)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: GOTO 0x600

0x5df: GOTO 0x5f5

0x5e0: @ irand(Stack[-3], Stack[-6])
0x5e1: Pop(0)
0x5e2: Push((int) 5)
0x5e3: @ irand(Stack[-3], Stack[-1])
0x5e4: Pop(1)
0x5e5: Push((int) 0)
0x5e6: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Stack[-3] = (int) 0
0x5e9: Push("all")
0x5ea: PushEmpty(string, int)
0x5eb: Stack[-1] = Stack[-6]
0x5ec: Call2 0x795

0x5ed: Pop(1)
0x5ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: @ WaitForAnimEnd(Stack[-1])
0x5f1: Pop(0)
0x5f2: Pop(0); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: GOTO 0x600

0x5f5: PushEmpty(bool)
0x5f6: Call2 0x603

0x5f7: Pop(0)
0x5f8: Pop(1); Push((bool) Stack[-1] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5fa: GOTO 0x600

0x5fb: @ ResetAAS()
0x5fc: Pop(0)
0x5fd: Push((int) 1)
0x5fe: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5ff: GOTO 0x5cc

0x600: @ ResetAAS()
0x601: Pop(0)
0x602: Return(); Pop(12)

0x603: Stack[-1] = (bool) 1
0x604: Return(); Pop(0)

0x605: @ StopAnimation()
0x606: Pop(0)
0x607: @ StopGroup0()
0x608: Pop(0)
0x609: Return(); Pop(0)

0x60a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x60b: @ GetPosition(Stack[-3])
0x60c: Pop(0)
0x60d: @@ GetPosition(Stack[-2])
0x60e: Pop(0)
0x60f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x610: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x611: Return(); Pop(6)

0x612: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x613: @ GetPosition(Stack[-3])
0x614: Pop(0)
0x615: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x616: Push(CvectorIndex(Stack[-2], 0))
0x617: Push(CvectorIndex(Stack[-3], 2))
0x618: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x619: Pop(2)
0x61a: Stack[-8] = Stack[-1]
0x61b: Return(); Pop(6)

0x61c: PushEmpty(cvector, cvector)
0x61d: @@ GetPosition(Stack[-1])
0x61e: Pop(0)
0x61f: PushEmpty(bool, cvector)
0x620: Stack[-1] = Stack[-3]
0x621: Call2 0x612

0x622: Stack[-6] = Stack[-2]
0x623: Pop(2)
0x624: Return(); Pop(2)

0x625: PushEmpty(bool, bool)
0x626: @ IsLoaded(Stack[-1])
0x627: Pop(0)
0x628: Stack[-3] = Stack[-1]
0x629: Return(); Pop(2)

0x62a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x62b: @@ GetPosition(Stack[-8])
0x62c: Pop(0)
0x62d: @@ GetEyesHeight(Stack[-9])
0x62e: Pop(0)
0x62f: Push(CvectorIndex(Stack[-8], 1))
0x630: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x631: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x632: @ GetPosition(Stack[-7])
0x633: Pop(0)
0x634: @ GetEyesHeight(Stack[-9])
0x635: Pop(0)
0x636: Push(CvectorIndex(Stack[-7], 1))
0x637: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x638: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x639: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x63a: Push(CvectorIndex(Stack[-6], 1))
0x63b: Stack[-1] = (int) 0
0x63c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x63d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x63e: Pop(1); Push(Sqrt(Stack[-1]))
0x63f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x640: Stack[-5] = -Stack[-6]; Pop(0);
0x641: Pop(0); Push(Stack[-6] * Stack[-19]);
0x642: PushEmpty(cvector, cvector)
0x643: Push(CVector(0.0, 1.0, 0.0))
0x644: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x645: Call2 0x746

0x646: Pop(1)
0x647: Push((int) 25)
0x648: Pop(2); Push(Stack[-2] * Stack[-1]);
0x649: Pop(2); Push(Stack[-2] + Stack[-1]);
0x64a: Push(CVector(0.0, 10.0, 0.0))
0x64b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x64c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x64d: @ IsOverrideActive(Stack[-2])
0x64e: Pop(0)
0x64f: Push(Stack[-2])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-21] = (bool) 0
0x652: Return(); Pop(18)

0x653: @ StopWorld()
0x654: Pop(0)
0x655: Push((bool) 1)
0x656: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x657: Pop(1)
0x658: Push(CvectorIndex(Stack[-4], 0))
0x659: Push(CvectorIndex(Stack[-5], 2))
0x65a: @ Rotate(Stack[-2], Stack[-1])
0x65b: Pop(2)
0x65c: PushEmpty(bool)
0x65d: Call2 0x7b5

0x65e: Pop(0)
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: GOTO 0x669

0x661: Push("head")
0x662: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x663: Pop(1)
0x664: Push(Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x666: Push("head")
0x667: @ LookAsyncCamera(Stack[-1])
0x668: Pop(1)
0x669: @ CameraWaitForPlayFinish()
0x66a: Pop(0)
0x66b: @ ResumeWorld()
0x66c: Pop(0)
0x66d: Stack[-21] = (bool) 1
0x66e: Return(); Pop(18)

0x66f: PushEmpty(bool, bool)
0x670: Push((bool) 1)
0x671: @ CameraSwitchToNormal(Stack[-1])
0x672: Pop(1)
0x673: PushEmpty(bool)
0x674: Call2 0x7b5

0x675: Pop(0)
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: GOTO 0x680

0x678: Push("head")
0x679: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x67a: Pop(1)
0x67b: Push(Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67d: Push("head")
0x67e: @ UnlookAsync(Stack[-1])
0x67f: Pop(1)
0x680: Return(); Pop(2)

0x681: PushEmpty(int, int, int, int)
0x682: Push("voice_common")
0x683: @ GetVariable(Stack[-1], Stack[-3])
0x684: Pop(1)
0x685: Push(Stack[-2])
0x686: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x687: PushEmpty(bool, object)
0x688: Stack[-1] = Stack[-7]
0x689: Call2 0x6bb

0x68a: Pop(1)
0x68b: Pop(1); Push((bool) Stack[-1] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x68d: PushEmpty(bool, object)
0x68e: Stack[-1] = Stack[-7]
0x68f: Call2 0x6e0

0x690: Pop(1)
0x691: Pop(1); Push((bool) Stack[-1] == 0)
0x692: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x693: Stack[-6] = (bool) 0
0x694: Return(); Pop(4)

0x695: Push((int) 2)
0x696: @ irand(Stack[-2], Stack[-1])
0x697: Pop(1)
0x698: Push(Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69a: Push("voice_common")
0x69b: Push((int) 1)
0x69c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x69d: Push((int) 3)
0x69e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x69f: @ SetVariable(Stack[-2], Stack[-1])
0x6a0: Pop(2)
0x6a1: GOTO 0x6a6

0x6a2: Push("voice_common")
0x6a3: Push((int) 0)
0x6a4: @ SetVariable(Stack[-2], Stack[-1])
0x6a5: Pop(2)
0x6a6: GOTO 0x6b9

0x6a7: PushEmpty(bool, object)
0x6a8: Stack[-1] = Stack[-7]
0x6a9: Call2 0x6e0

0x6aa: Pop(1)
0x6ab: Pop(1); Push((bool) Stack[-1] == 0)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6ad: PushEmpty(bool, object)
0x6ae: Stack[-1] = Stack[-7]
0x6af: Call2 0x6bb

0x6b0: Pop(1)
0x6b1: Pop(1); Push((bool) Stack[-1] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-6] = (bool) 0
0x6b4: Return(); Pop(4)

0x6b5: Push("voice_common")
0x6b6: Push((int) 1)
0x6b7: @ SetVariable(Stack[-2], Stack[-1])
0x6b8: Pop(2)
0x6b9: Stack[-6] = (bool) 1
0x6ba: Return(); Pop(4)

0x6bb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6bc: Stack[-5] = "c"
0x6bd: Stack[-4] = (int) 0
0x6be: Push((int) 1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c0: Push((int) 1)
0x6c1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6c2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c3: @@ HasProperty(Stack[-1], Stack[-4])
0x6c4: Pop(1)
0x6c5: Pop(0); Push((bool) Stack[-3] == 0)
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c7: GOTO 0x6cb

0x6c8: Push((int) 1)
0x6c9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6ca: GOTO 0x6be

0x6cb: Pop(0); Push((bool) Stack[-4] == 0)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-12] = (bool) 0
0x6ce: Return(); Pop(10)

0x6cf: Stack[-2] = (int) 0
0x6d0: Push((int) 1)
0x6d1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: @ irand(Stack[-2], Stack[-4])
0x6d4: Pop(0)
0x6d5: Push((int) 1)
0x6d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6d8: @@ GetProperty(Stack[-1], Stack[-2])
0x6d9: Pop(1)
0x6da: PushEmpty(bool, string)
0x6db: Stack[-1] = Stack[-3]
0x6dc: Call2 0x72a

0x6dd: Stack[-14] = Stack[-2]
0x6de: Pop(2)
0x6df: Return(); Pop(10)

0x6e0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6e1: Push("d")
0x6e2: PushEmpty(int)
0x6e3: Call2 0x786

0x6e4: Pop(0)
0x6e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e6: Push("m")
0x6e7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6e8: Stack[-4] = (int) 0
0x6e9: Push((int) 1)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6eb: Push((int) 1)
0x6ec: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6ed: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ee: @@ HasProperty(Stack[-1], Stack[-4])
0x6ef: Pop(1)
0x6f0: Pop(0); Push((bool) Stack[-3] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: GOTO 0x6f6

0x6f3: Push((int) 1)
0x6f4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6f5: GOTO 0x6e9

0x6f6: Pop(0); Push((bool) Stack[-4] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-12] = (bool) 0
0x6f9: Return(); Pop(10)

0x6fa: Stack[-2] = (int) 0
0x6fb: Push((int) 1)
0x6fc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fe: @ irand(Stack[-2], Stack[-4])
0x6ff: Pop(0)
0x700: Push((int) 1)
0x701: Pop(1); Push(Stack[-3] + Stack[-1]);
0x702: Pop(1); Push(Stack[-6] + Stack[-1]);
0x703: @@ GetProperty(Stack[-1], Stack[-2])
0x704: Pop(1)
0x705: PushEmpty(bool, string)
0x706: Stack[-1] = Stack[-3]
0x707: Call2 0x72a

0x708: Stack[-14] = Stack[-2]
0x709: Pop(2)
0x70a: Return(); Pop(10)

0x70b: PushEmpty(bool, float, float, bool, float, float)
0x70c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x70d: Pop(0)
0x70e: Push(Stack[-3])
0x70f: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x710: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x711: Pop(0)
0x712: Push((bool) 0)
0x713: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(1)
0x715: GOTO 0x71a

0x716: Push("Can't find lsh animation : ")
0x717: Pop(1); Push(Stack[-1] + Stack[-8]);
0x718: @ Trace(Stack[-1])
0x719: Pop(1)
0x71a: Return(); Pop(6)

0x71b: PushEmpty(bool, float, float, bool, float, float)
0x71c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x71d: Pop(0)
0x71e: Push(Stack[-3])
0x71f: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x720: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x721: Pop(0)
0x722: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x723: Pop(0)
0x724: GOTO 0x729

0x725: Push("Can't find lsh animation : ")
0x726: Pop(1); Push(Stack[-1] + Stack[-9]);
0x727: @ Trace(Stack[-1])
0x728: Pop(1)
0x729: Return(); Pop(6)

0x72a: PushEmpty(bool, bool)
0x72b: PushEmpty(bool)
0x72c: Call2 0x7b5

0x72d: Pop(0)
0x72e: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x72f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x730: Pop(0)
0x731: Push(Stack[-1])
0x732: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x733: @ lshPlaySpeech(Stack[-3])
0x734: Pop(0)
0x735: Stack[-4] = (bool) 1
0x736: Return(); Pop(2)

0x737: Stack[-4] = (bool) 0
0x738: Return(); Pop(2)

0x739: PushEmpty(bool)
0x73a: Call2 0x7b5

0x73b: Pop(0)
0x73c: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73d: @ lshStopSpeech()
0x73e: Pop(0)
0x73f: Return(); Pop(0)

0x740: PushEmpty(object, object)
0x741: @ self(Stack[-1])
0x742: Pop(0)
0x743: Stack[-3] = Stack[-1]
0x744: Return(); Pop(2)

0x745: Stack[-1] = 0
0x746: PushEmpty(float, float)
0x747: Pop(0); Push(Stack[-3] | Stack[-3]);
0x748: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x749: Push((float)0.0)
0x74a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x74d: Return(); Pop(2)

0x74e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x74f: Return(); Pop(2)

0x750: PushEmpty(int, int)
0x751: @ GetVariable(Stack[-3], Stack[-1])
0x752: Pop(0)
0x753: Stack[-4] = Stack[-1]
0x754: Return(); Pop(2)

0x755: PushEmpty(object, object)
0x756: @ CreateIntVector(Stack[-1])
0x757: Pop(0)
0x758: @@ add(Stack[-4])
0x759: Pop(0)
0x75a: @@ add(Stack[-3])
0x75b: Pop(0)
0x75c: Push((int) 3)
0x75d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x75e: Pop(1)
0x75f: Return(); Pop(2)

0x760: Stack[-1] = 0
0x761: PushEmpty(int, int, bool, int, int, bool)
0x762: @@ GetItemID(Stack[-3])
0x763: Pop(0)
0x764: Push("Category")
0x765: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x766: Pop(1)
0x767: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x768: Pop(0)
0x769: Pop(0); Push((bool) Stack[-1] == 0)
0x76a: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76b: @@ DropItems(Stack[-8], Stack[-7])
0x76c: Pop(0)
0x76d: GOTO 0x773

0x76e: PushEmpty(int, int)
0x76f: Stack[-2] = Stack[-5]
0x770: Stack[-1] = Stack[-9]
0x771: Call2 0x755

0x772: Pop(2)
0x773: Return(); Pop(6)

0x774: PushEmpty(object, object)
0x775: @ CreateInvItem(Stack[-1])
0x776: Pop(0)
0x777: @@ SetItemName(Stack[-4])
0x778: Pop(0)
0x779: PushEmpty(object, object, int)
0x77a: Stack[-3] = Stack[-8]
0x77b: Stack[-2] = Stack[-4]
0x77c: Stack[-1] = Stack[-6]
0x77d: Call2 0x761

0x77e: Pop(3)
0x77f: Return(); Pop(2)

0x780: Stack[-1] = 0
0x781: PushEmpty(float, float)
0x782: @ GetGameTime(Stack[-1])
0x783: Pop(0)
0x784: Stack[-3] = Stack[-1]
0x785: Return(); Pop(2)

0x786: PushEmpty(float, float)
0x787: @ GetGameTime(Stack[-1])
0x788: Pop(0)
0x789: Push((int) 1)
0x78a: PushEmpty(int)
0x78b: Push((int) 24)
0x78c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x78d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x78e: Return(); Pop(2)

0x78f: PushEmpty()
0x790: PushEmpty(int)
0x791: Call2 0x786

0x792: Pop(0)
0x793: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x794: Return(); Pop(0)

0x795: PushEmpty(string, string)
0x796: Stack[-1] = "idle"
0x797: Push(Stack[-3])
0x798: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x799: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x79a: Stack[-4] = Stack[-1]
0x79b: Return(); Pop(2)

0x79c: PushEmpty(int, bool, int, bool)
0x79d: Stack[-2] = (int) 0
0x79e: Push("all")
0x79f: PushEmpty(string, int)
0x7a0: Stack[-1] = Stack[-5]
0x7a1: Call2 0x795

0x7a2: Pop(1)
0x7a3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a4: Pop(2)
0x7a5: Pop(0); Push((bool) Stack[-1] == 0)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: GOTO 0x7ab

0x7a8: Push((int) 1)
0x7a9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7aa: GOTO 0x79e

0x7ab: Stack[-5] = Stack[-2]
0x7ac: Return(); Pop(4)

0x7ad: Stack[-1] = (int) 515528
0x7ae: Return(); Pop(0)

0x7af: Stack[-1] = (int) 502854
0x7b0: Return(); Pop(0)

0x7b1: Stack[-1] = "ui/NPC_Alexandr.png"
0x7b2: Return(); Pop(0)

0x7b3: Stack[-1] = "ui/NPC_Alexandr_b.png"
0x7b4: Return(); Pop(0)

0x7b5: Stack[-1] = (bool) 1
0x7b6: Return(); Pop(0)

0x7b7: PushEmpty(object, object)
0x7b8: Push("b2q01")
0x7b9: Push((int) 2)
0x7ba: @ SetVariable(Stack[-2], Stack[-1])
0x7bb: Pop(2)
0x7bc: PushEmpty(object)
0x7bd: Call2 0x84f

0x7be: Stack[-2] = Stack[-1]
0x7bf: Pop(1)
0x7c0: Push("b2q01AlexandrGotoOspina")
0x7c1: Push("pt_map_ospina")
0x7c2: Push((int) 1)
0x7c3: Push((int) 520459)
0x7c4: PushEmpty(float)
0x7c5: Call2 0x781

0x7c6: Pop(0)
0x7c7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7c8: Pop(5)
0x7c9: PushEmpty()
0x7ca: Call2 0x819

0x7cb: Pop(0)
0x7cc: Return(); Pop(2)

0x7cd: Stack[-1] = 0
0x7ce: PushEmpty()
0x7cf: Push("oob2Alexandr1")
0x7d0: Push((int) 1)
0x7d1: @ SetVariable(Stack[-2], Stack[-1])
0x7d2: Pop(2)
0x7d3: Return(); Pop(0)

0x7d4: PushEmpty()
0x7d5: Push("oob2Alexandr2")
0x7d6: Push((int) 1)
0x7d7: @ SetVariable(Stack[-2], Stack[-1])
0x7d8: Pop(2)
0x7d9: Return(); Pop(0)

0x7da: PushEmpty()
0x7db: Push("key is given")
0x7dc: @ Trace(Stack[-1])
0x7dd: Pop(1)
0x7de: PushEmpty(object, string, int)
0x7df: Stack[-3] = Stack[-5]
0x7e0: Stack[-2] = "b2q01_key"
0x7e1: Stack[-1] = (int) 1
0x7e2: Call2 0x774

0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: PushEmpty()
0x7e6: PushEmpty(object, string, float)
0x7e7: PushEmpty(object)
0x7e8: Call2 0x84f

0x7e9: Stack[-4] = Stack[-1]
0x7ea: Pop(1)
0x7eb: Stack[-2] = "pt_map_ospina"
0x7ec: Stack[-1] = (int) 2
0x7ed: Call2 0x860

0x7ee: Pop(3)
0x7ef: PushEmpty(object)
0x7f0: Call2 0x84f

0x7f1: Pop(0)
0x7f2: @@ ShowMap(Stack[-1])
0x7f3: Pop(1)
0x7f4: Return(); Pop(0)

0x7f5: PushEmpty()
0x7f6: PushEmpty(int, string)
0x7f7: Stack[-1] = "b2q01"
0x7f8: Call2 0x750

0x7f9: Pop(1)
0x7fa: Push((int) 1)
0x7fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7fc: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fd: Stack[-2] = (bool) 1
0x7fe: Return(); Pop(0)

0x7ff: Stack[-2] = (bool) 0
0x800: Return(); Pop(0)

0x801: PushEmpty()
0x802: PushEmpty(int, string)
0x803: Stack[-1] = "oob2Alexandr1"
0x804: Call2 0x750

0x805: Pop(1)
0x806: Push((int) 0)
0x807: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-2] = (bool) 1
0x80a: Return(); Pop(0)

0x80b: Stack[-2] = (bool) 0
0x80c: Return(); Pop(0)

0x80d: PushEmpty()
0x80e: PushEmpty(int, string)
0x80f: Stack[-1] = "oob2Alexandr2"
0x810: Call2 0x750

0x811: Pop(1)
0x812: Push((int) 0)
0x813: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: Stack[-2] = (bool) 1
0x816: Return(); Pop(0)

0x817: Stack[-2] = (bool) 0
0x818: Return(); Pop(0)

0x819: PushEmpty(object, object)
0x81a: Push((int) 247)
0x81b: Push((int) 1)
0x81c: Push((int) 520468)
0x81d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: PushEmpty(bool, object, int)
0x820: Stack[-2] = Stack[-4]
0x821: Stack[-1] = (int) 245
0x822: Call2 0x833

0x823: Pop(3)
0x824: Return(); Pop(2)

0x825: Stack[-1] = 0
0x826: PushEmpty(object, object)
0x827: @ GetDiaryRoot(Stack[-1])
0x828: Pop(0)
0x829: Pop(0); Push((bool) Stack[-1] == 0)
0x82a: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82b: Push("Can't retrieve diary root")
0x82c: @ Trace(Stack[-1])
0x82d: Pop(1)
0x82e: Stack[-3] = (bool) 0
0x82f: Return(); Pop(2)

0x830: Stack[-3] = Stack[-1]
0x831: Return(); Pop(2)

0x832: Stack[-1] = 0
0x833: PushEmpty(object, object, int, object, object, int)
0x834: PushEmpty(object)
0x835: Call2 0x826

0x836: Stack[-4] = Stack[-1]
0x837: Pop(1)
0x838: @@ Find(Stack[-7], Stack[-2])
0x839: Pop(0)
0x83a: Pop(0); Push((bool) Stack[-2] == 0)
0x83b: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x83c: Push("Can't find diary parent with id: ")
0x83d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x83e: @ Trace(Stack[-1])
0x83f: Pop(1)
0x840: Stack[-9] = (bool) 0
0x841: Return(); Pop(6)

0x842: @@ AddChild(Stack[-8])
0x843: Pop(0)
0x844: Push((int) 7)
0x845: @ SendWorldWndMessage(Stack[-1])
0x846: Pop(1)
0x847: @@ GetCategory(Stack[-1])
0x848: Pop(0)
0x849: @ SetDiarySection(Stack[-1])
0x84a: Pop(0)
0x84b: Stack[-9] = (bool) 0
0x84c: Return(); Pop(6)

0x84d: Stack[-2] = 0
0x84e: Stack[-3] = 0
0x84f: PushEmpty(object, object, object, object)
0x850: @ GetMainOutdoorScene(Stack[-2])
0x851: Pop(0)
0x852: Pop(0); Push((bool) Stack[-2] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x854: Push("Can't find main outdoor scene")
0x855: @ Trace(Stack[-1])
0x856: Pop(1)
0x857: Stack[-1] = 0
0x858: Stack[-5] = Stack[-1]
0x859: Return(); Pop(4)

0x85a: @@ GetMap(Stack[-1])
0x85b: Pop(0)
0x85c: Stack[-5] = Stack[-1]
0x85d: Return(); Pop(4)

0x85e: Stack[-1] = 0
0x85f: Stack[-2] = 0
0x860: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x861: @ GetMainOutdoorScene(Stack[-2])
0x862: Pop(0)
0x863: Pop(0); Push((bool) Stack[-2] == 0)
0x864: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x865: Push("Can't find main outdoor scene")
0x866: @ Trace(Stack[-1])
0x867: Pop(1)
0x868: Return(); Pop(8)

0x869: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x86a: Pop(0)
0x86b: Pop(0); Push((bool) Stack[-1] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x86d: Push("Warning: outdoor scene locator ")
0x86e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x86f: Push(" doesnt exist")
0x870: Pop(2); Push(Stack[-2] + Stack[-1]);
0x871: @ Trace(Stack[-1])
0x872: Pop(1)
0x873: @@ GetMap(Stack[-11])
0x874: Pop(0)
0x875: Pop(0); Push((bool) Stack[-11] == 0)
0x876: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x877: Push("Can't find map")
0x878: @ Trace(Stack[-1])
0x879: Pop(1)
0x87a: Return(); Pop(8)

0x87b: Push(CvectorIndex(Stack[-4], 0))
0x87c: Push(CvectorIndex(Stack[-5], 2))
0x87d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x87e: Pop(2)
0x87f: Return(); Pop(8)

0x880: Stack[-2] = 0
0x881: PushEmpty(int, int)
0x882: Push("branch")
0x883: @ GetVariable(Stack[-1], Stack[-2])
0x884: Pop(1)
0x885: Push((int) 0)
0x886: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x888: Stack[-3] = (int) 1
0x889: Return(); Pop(2)

0x88a: GOTO 0x890

0x88b: Push((int) 1)
0x88c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88d: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88e: Stack[-3] = (int) 2
0x88f: Return(); Pop(2)

0x890: Stack[-3] = (int) 3
0x891: Return(); Pop(2)

0x892: PushEmpty()
0x893: Push(GlobalVars[1])
0x894: Pop(1); Push((bool) Stack[-1] == 0)
0x895: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x896: PushEmpty(int, object)
0x897: Stack[-1] = Stack[-3]
0x898: Push(-2, 1); TaskCall(2)
0x899: Call2 0x26e

0x89a: Pop(-2, 1); TaskReturn
0x89b: Pop(2)
0x89c: Push(GlobalVars[1])
0x89d: Stack[-1] = (bool) 1
0x89e: GlobalVars[1] = Stack[-1]; Pop(1)
0x89f: PushEmpty(bool, int)
0x8a0: Stack[-1] = (int) 2
0x8a1: Call2 0x78f

0x8a2: Pop(1)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a4: PushEmpty(int, object)
0x8a5: Stack[-1] = Stack[-3]
0x8a6: Push(-2, 1); TaskCall(0)
0x8a7: Call2 0x0

0x8a8: Pop(-2, 1); TaskReturn
0x8a9: Pop(2)
0x8aa: Return(); Pop(0)

0x8ab: PushEmpty(bool)
0x8ac: Stack[-1] = (bool) 0
0x8ad: PushEmpty(bool, int)
0x8ae: Stack[-1] = (int) 12
0x8af: Call2 0x78f

0x8b0: Pop(1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b2: Push(GlobalVars[2])
0x8b3: Pop(1); Push((bool) Stack[-1] == 0)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b5: Stack[-1] = (bool) 1
0x8b6: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8b7: PushEmpty(int, object)
0x8b8: Stack[-1] = Stack[-3]
0x8b9: Push(-2, 1); TaskCall(4)
0x8ba: Call2 0x339

0x8bb: Pop(-2, 1); TaskReturn
0x8bc: Pop(2)
0x8bd: Push(GlobalVars[2])
0x8be: Stack[-1] = (bool) 1
0x8bf: GlobalVars[2] = Stack[-1]; Pop(1)
0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(int, object)
0x8c2: Stack[-1] = Stack[-3]
0x8c3: Push(-2, 1); TaskCall(6)
0x8c4: Call2 0x43c

0x8c5: Pop(-2, 1); TaskReturn
0x8c6: Pop(2)
0x8c7: Return(); Pop(0)

