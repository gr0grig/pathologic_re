GlobalVarCount = 1
	G_VAR_0 object 

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
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	pt_map_uprava_admin
	ShowMap
	ood11Nude1
	d11q01
	d11q01NudeGotoRastrel
	pt_d11q01_msoldier
	AddMark
	d11q01NudeGotoBlock
	quest_d11_01
	init_soldiers
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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1e2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc1 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1da Vars = (object)
		EVENT_26 Op = 0x1e6 Vars = (string)
		EVENT_6 Op = 0x202 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x214

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x385

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x383

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x387

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x389

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x372

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x259

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x2f2

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x2fe

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x2c7

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call2 0xab

0x66: Pop(1)
0x67: Push((int) 514421)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: Push((int) 514422)
0x6d: Push((int) 15648)
0x6e: Push((int) 15647)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 514443)
0x72: Push((int) 15650)
0x73: Push((int) 15670)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0x8d

0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral"
0x79: Call2 0xab

0x7a: Pop(1)
0x7b: Push((int) 514502)
0x7c: @@ SetMessage(Stack[-1])
0x7d: Pop(1)
0x7e: @@ ClearReplies()
0x7f: Pop(0)
0x80: Push((int) 514503)
0x81: Push((int) -1)
0x82: Push((int) 15740)
0x83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84: Pop(3)
0x85: Push((int) 534053)
0x86: Push((int) -1)
0x87: Push((int) 35635)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x4e

0x8d: PushEmpty(bool)
0x8e: Call2 0x38b

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call2 0x26b

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call2 0x38b

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string, bool)
0xb6: Stack[-2] = Stack[-3]
0xb7: Push("")
0xb8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-1] = (bool) 0
0xbb: GOTO 0xbd

0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x27b

0xbe: Pop(2)
0xbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: Push((int) 1)
0xc3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0xc4: PushEmpty()
0xc5: Call2 0x28a

0xc6: Pop(0)
0xc7: Push((int) 15659)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x2cd

0xce: Pop(2)
0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x2b7

0xd3: Pop(2)
0xd4: Push((int) 15660)
0xd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0x2cd

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x2b7

0xe0: Pop(2)
0xe1: Push((int) 15646)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 0
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0x2f2

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0x2fe

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 1
0xf1: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x2c7

0xf6: Pop(2)
0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0xab

0xfa: Pop(1)
0xfb: Push((int) 514421)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 514422)
0x101: Push((int) 15648)
0x102: Push((int) 15647)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 514443)
0x106: Push((int) 15650)
0x107: Push((int) 15670)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0xab

0x10e: Pop(1)
0x10f: Push((int) 514502)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 514503)
0x115: Push((int) -1)
0x116: Push((int) 15740)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 534053)
0x11a: Push((int) -1)
0x11b: Push((int) 35635)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 15648)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0xab

0x125: Pop(1)
0x126: Push((int) 514423)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 514424)
0x12c: Push((int) 15650)
0x12d: Push((int) 15649)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 514440)
0x131: Push((int) 15667)
0x132: Push((int) 15666)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 15667)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xab

0x13c: Pop(1)
0x13d: Push((int) 514441)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 514442)
0x143: Push((int) 15650)
0x144: Push((int) 15668)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 15650)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xab

0x14e: Pop(1)
0x14f: Push((int) 514425)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 514426)
0x155: Push((int) 15652)
0x156: Push((int) 15651)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 514436)
0x15a: Push((int) 15662)
0x15b: Push((int) 15661)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 15662)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call2 0xab

0x165: Pop(1)
0x166: Push((int) 514437)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 514438)
0x16c: Push((int) 15652)
0x16d: Push((int) 15663)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 514439)
0x171: Push((int) 15652)
0x172: Push((int) 15665)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 15652)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Neutral"
0x17b: Call2 0xab

0x17c: Pop(1)
0x17d: Push((int) 514427)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 514428)
0x183: Push((int) 15654)
0x184: Push((int) 15653)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 534052)
0x188: Push((int) 15658)
0x189: Push((int) 35633)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 15654)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0xab

0x193: Pop(1)
0x194: Push((int) 514429)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 514430)
0x19a: Push((int) 15656)
0x19b: Push((int) 15655)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 540067)
0x19f: Push((int) 15658)
0x1a0: Push((int) 42030)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 15656)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call2 0xab

0x1aa: Pop(1)
0x1ab: Push((int) 514431)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 514432)
0x1b1: Push((int) 15658)
0x1b2: Push((int) 15657)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 15658)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral"
0x1bb: Call2 0xab

0x1bc: Pop(1)
0x1bd: Push((int) 514433)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 514434)
0x1c3: Push((int) -1)
0x1c4: Push((int) 15659)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Push((int) 514435)
0x1c8: Push((int) -1)
0x1c9: Push((int) 15660)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ce: PushEmpty(bool)
0x1cf: Call2 0x38b

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d2: @ lshStopAnimation()
0x1d3: Pop(0)
0x1d4: GOTO 0x1d7

0x1d5: @ StopAnimation()
0x1d6: Pop(0)
0x1d7: Return(); Pop(0)

0x1d8: GOTO 0xc2

0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: PushEmpty(int, object)
0x1dc: Stack[-1] = Stack[-3]
0x1dd: Push(-2, 1); TaskCall(0)
0x1de: Call2 0x0

0x1df: Pop(-2, 1); TaskReturn
0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: @ Hold()
0x1e3: Pop(0)
0x1e4: GOTO 0x1e2

0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(bool, bool)
0x1e7: Push("cleanup")
0x1e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1ea: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1eb: @ IsLoaded(Stack[-1])
0x1ec: Pop(0)
0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 0
0x1ef: Pop(0); Push((bool) Stack[-2] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: PushEmpty(bool)
0x1f2: Call2 0x212

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 1
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: PushEmpty(object)
0x1f8: Call2 0x291

0x1f9: Pop(0)
0x1fa: @ RemoveActor(Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x201

0x1fd: Push("restore")
0x1fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x201: Return(); Pop(2)

0x202: PushEmpty(bool)
0x203: Stack[-1] = (bool) 0
0x204: Push( Stack[0 + Tasks[-1].StackPointer] )
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x212

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: PushEmpty(object)
0x20d: Call2 0x291

0x20e: Pop(0)
0x20f: @ RemoveActor(Stack[-1])
0x210: Pop(1)
0x211: Return(); Pop(0)

0x212: Stack[-1] = (bool) 1
0x213: Return(); Pop(0)

0x214: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x215: @@ GetPosition(Stack[-8])
0x216: Pop(0)
0x217: @@ GetEyesHeight(Stack[-9])
0x218: Pop(0)
0x219: Push(CvectorIndex(Stack[-8], 1))
0x21a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x21c: @ GetPosition(Stack[-7])
0x21d: Pop(0)
0x21e: @ GetEyesHeight(Stack[-9])
0x21f: Pop(0)
0x220: Push(CvectorIndex(Stack[-7], 1))
0x221: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x222: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x223: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x224: Push(CvectorIndex(Stack[-6], 1))
0x225: Stack[-1] = (int) 0
0x226: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x227: Pop(0); Push(Stack[-6] | Stack[-6]);
0x228: Pop(1); Push(Sqrt(Stack[-1]))
0x229: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x22a: Stack[-5] = -Stack[-6]; Pop(0);
0x22b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x22c: PushEmpty(cvector, cvector)
0x22d: Push(CVector(0.0, 1.0, 0.0))
0x22e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22f: Call2 0x297

0x230: Pop(1)
0x231: Push((int) 25)
0x232: Pop(2); Push(Stack[-2] * Stack[-1]);
0x233: Pop(2); Push(Stack[-2] + Stack[-1]);
0x234: Push(CVector(0.0, 10.0, 0.0))
0x235: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x236: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x237: @ IsOverrideActive(Stack[-2])
0x238: Pop(0)
0x239: Push(Stack[-2])
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-21] = (bool) 0
0x23c: Return(); Pop(18)

0x23d: @ StopWorld()
0x23e: Pop(0)
0x23f: Push((bool) 1)
0x240: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x241: Pop(1)
0x242: Push(CvectorIndex(Stack[-4], 0))
0x243: Push(CvectorIndex(Stack[-5], 2))
0x244: @ Rotate(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: PushEmpty(bool)
0x247: Call2 0x38b

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x253

0x24b: Push("head")
0x24c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24d: Pop(1)
0x24e: Push(Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x250: Push("head")
0x251: @ LookAsyncCamera(Stack[-1])
0x252: Pop(1)
0x253: @ CameraWaitForPlayFinish()
0x254: Pop(0)
0x255: @ ResumeWorld()
0x256: Pop(0)
0x257: Stack[-21] = (bool) 1
0x258: Return(); Pop(18)

0x259: PushEmpty(bool, bool)
0x25a: Push((bool) 1)
0x25b: @ CameraSwitchToNormal(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty(bool)
0x25e: Call2 0x38b

0x25f: Pop(0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x26a

0x262: Push("head")
0x263: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x264: Pop(1)
0x265: Push(Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x267: Push("head")
0x268: @ UnlookAsync(Stack[-1])
0x269: Pop(1)
0x26a: Return(); Pop(2)

0x26b: PushEmpty(bool, float, float, bool, float, float)
0x26c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x26d: Pop(0)
0x26e: Push(Stack[-3])
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x271: Pop(0)
0x272: Push((bool) 0)
0x273: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(1)
0x275: GOTO 0x27a

0x276: Push("Can't find lsh animation : ")
0x277: Pop(1); Push(Stack[-1] + Stack[-8]);
0x278: @ Trace(Stack[-1])
0x279: Pop(1)
0x27a: Return(); Pop(6)

0x27b: PushEmpty(bool, float, float, bool, float, float)
0x27c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x27d: Pop(0)
0x27e: Push(Stack[-3])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x281: Pop(0)
0x282: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x283: Pop(0)
0x284: GOTO 0x289

0x285: Push("Can't find lsh animation : ")
0x286: Pop(1); Push(Stack[-1] + Stack[-9]);
0x287: @ Trace(Stack[-1])
0x288: Pop(1)
0x289: Return(); Pop(6)

0x28a: PushEmpty(bool)
0x28b: Call2 0x38b

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: @ lshStopSpeech()
0x28f: Pop(0)
0x290: Return(); Pop(0)

0x291: PushEmpty(object, object)
0x292: @ self(Stack[-1])
0x293: Pop(0)
0x294: Stack[-3] = Stack[-1]
0x295: Return(); Pop(2)

0x296: Stack[-1] = 0
0x297: PushEmpty(float, float)
0x298: Pop(0); Push(Stack[-3] | Stack[-3]);
0x299: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x29a: Push((float)0.0)
0x29b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x29e: Return(); Pop(2)

0x29f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2a0: Return(); Pop(2)

0x2a1: PushEmpty(int, int)
0x2a2: @ GetVariable(Stack[-3], Stack[-1])
0x2a3: Pop(0)
0x2a4: Stack[-4] = Stack[-1]
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(object, object)
0x2a7: @ FindActor(Stack[-1], Stack[-4])
0x2a8: Pop(0)
0x2a9: Pop(0); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[-5] = (bool) 0
0x2ac: Return(); Pop(2)

0x2ad: @ Trigger(Stack[-1], Stack[-3])
0x2ae: Pop(0)
0x2af: Stack[-5] = (bool) 1
0x2b0: Return(); Pop(2)

0x2b1: Stack[-1] = 0
0x2b2: PushEmpty(float, float)
0x2b3: @ GetGameTime(Stack[-1])
0x2b4: Pop(0)
0x2b5: Stack[-3] = Stack[-1]
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty()
0x2b8: PushEmpty(object, string, float)
0x2b9: PushEmpty(object)
0x2ba: Call2 0x340

0x2bb: Stack[-4] = Stack[-1]
0x2bc: Pop(1)
0x2bd: Stack[-2] = "pt_map_uprava_admin"
0x2be: Stack[-1] = (int) 2
0x2bf: Call2 0x351

0x2c0: Pop(3)
0x2c1: PushEmpty(object)
0x2c2: Call2 0x340

0x2c3: Pop(0)
0x2c4: @@ ShowMap(Stack[-1])
0x2c5: Pop(1)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: Push("ood11Nude1")
0x2c9: Push((int) 1)
0x2ca: @ SetVariable(Stack[-2], Stack[-1])
0x2cb: Pop(2)
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty(object, object)
0x2ce: Push("d11q01")
0x2cf: Push((int) 2)
0x2d0: @ SetVariable(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: PushEmpty(object)
0x2d3: Call2 0x340

0x2d4: Stack[-2] = Stack[-1]
0x2d5: Pop(1)
0x2d6: Push("d11q01NudeGotoRastrel")
0x2d7: Push("pt_d11q01_msoldier")
0x2d8: Push((int) 1)
0x2d9: Push((int) 515482)
0x2da: PushEmpty(float)
0x2db: Call2 0x2b2

0x2dc: Pop(0)
0x2dd: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2de: Pop(5)
0x2df: Push("d11q01NudeGotoBlock")
0x2e0: Push("pt_map_uprava_admin")
0x2e1: Push((int) 1)
0x2e2: Push((int) 515305)
0x2e3: PushEmpty(float)
0x2e4: Call2 0x2b2

0x2e5: Pop(0)
0x2e6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(5)
0x2e8: PushEmpty()
0x2e9: Call2 0x30a

0x2ea: Pop(0)
0x2eb: PushEmpty(bool, string, string)
0x2ec: Stack[-2] = "quest_d11_01"
0x2ed: Stack[-1] = "init_soldiers"
0x2ee: Call2 0x2a6

0x2ef: Pop(3)
0x2f0: Return(); Pop(2)

0x2f1: Stack[-1] = 0
0x2f2: PushEmpty()
0x2f3: PushEmpty(int, string)
0x2f4: Stack[-1] = "d11q01"
0x2f5: Call2 0x2a1

0x2f6: Pop(1)
0x2f7: Push((int) 1)
0x2f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-2] = (bool) 1
0x2fb: Return(); Pop(0)

0x2fc: Stack[-2] = (bool) 0
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: PushEmpty(int, string)
0x300: Stack[-1] = "ood11Nude1"
0x301: Call2 0x2a1

0x302: Pop(1)
0x303: Push((int) 0)
0x304: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: Stack[-2] = (bool) 1
0x307: Return(); Pop(0)

0x308: Stack[-2] = (bool) 0
0x309: Return(); Pop(0)

0x30a: PushEmpty(object, object)
0x30b: Push((int) 194)
0x30c: Push((int) 1)
0x30d: Push((int) 515479)
0x30e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: PushEmpty(bool, object, int)
0x311: Stack[-2] = Stack[-4]
0x312: Stack[-1] = (int) 192
0x313: Call2 0x324

0x314: Pop(3)
0x315: Return(); Pop(2)

0x316: Stack[-1] = 0
0x317: PushEmpty(object, object)
0x318: @ GetDiaryRoot(Stack[-1])
0x319: Pop(0)
0x31a: Pop(0); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: Push("Can't retrieve diary root")
0x31d: @ Trace(Stack[-1])
0x31e: Pop(1)
0x31f: Stack[-3] = (bool) 0
0x320: Return(); Pop(2)

0x321: Stack[-3] = Stack[-1]
0x322: Return(); Pop(2)

0x323: Stack[-1] = 0
0x324: PushEmpty(object, object, int, object, object, int)
0x325: PushEmpty(object)
0x326: Call2 0x317

0x327: Stack[-4] = Stack[-1]
0x328: Pop(1)
0x329: @@ Find(Stack[-7], Stack[-2])
0x32a: Pop(0)
0x32b: Pop(0); Push((bool) Stack[-2] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: Push("Can't find diary parent with id: ")
0x32e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x32f: @ Trace(Stack[-1])
0x330: Pop(1)
0x331: Stack[-9] = (bool) 0
0x332: Return(); Pop(6)

0x333: @@ AddChild(Stack[-8])
0x334: Pop(0)
0x335: Push((int) 7)
0x336: @ SendWorldWndMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ GetCategory(Stack[-1])
0x339: Pop(0)
0x33a: @ SetDiarySection(Stack[-1])
0x33b: Pop(0)
0x33c: Stack[-9] = (bool) 0
0x33d: Return(); Pop(6)

0x33e: Stack[-2] = 0
0x33f: Stack[-3] = 0
0x340: PushEmpty(object, object, object, object)
0x341: @ GetMainOutdoorScene(Stack[-2])
0x342: Pop(0)
0x343: Pop(0); Push((bool) Stack[-2] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: Push("Can't find main outdoor scene")
0x346: @ Trace(Stack[-1])
0x347: Pop(1)
0x348: Stack[-1] = 0
0x349: Stack[-5] = Stack[-1]
0x34a: Return(); Pop(4)

0x34b: @@ GetMap(Stack[-1])
0x34c: Pop(0)
0x34d: Stack[-5] = Stack[-1]
0x34e: Return(); Pop(4)

0x34f: Stack[-1] = 0
0x350: Stack[-2] = 0
0x351: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x352: @ GetMainOutdoorScene(Stack[-2])
0x353: Pop(0)
0x354: Pop(0); Push((bool) Stack[-2] == 0)
0x355: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x356: Push("Can't find main outdoor scene")
0x357: @ Trace(Stack[-1])
0x358: Pop(1)
0x359: Return(); Pop(8)

0x35a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x35b: Pop(0)
0x35c: Pop(0); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35e: Push("Warning: outdoor scene locator ")
0x35f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x360: Push(" doesnt exist")
0x361: Pop(2); Push(Stack[-2] + Stack[-1]);
0x362: @ Trace(Stack[-1])
0x363: Pop(1)
0x364: @@ GetMap(Stack[-11])
0x365: Pop(0)
0x366: Pop(0); Push((bool) Stack[-11] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: Push("Can't find map")
0x369: @ Trace(Stack[-1])
0x36a: Pop(1)
0x36b: Return(); Pop(8)

0x36c: Push(CvectorIndex(Stack[-4], 0))
0x36d: Push(CvectorIndex(Stack[-5], 2))
0x36e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x36f: Pop(2)
0x370: Return(); Pop(8)

0x371: Stack[-2] = 0
0x372: PushEmpty(int, int)
0x373: Push("branch")
0x374: @ GetVariable(Stack[-1], Stack[-2])
0x375: Pop(1)
0x376: Push((int) 0)
0x377: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x379: Stack[-3] = (int) 1
0x37a: Return(); Pop(2)

0x37b: GOTO 0x381

0x37c: Push((int) 1)
0x37d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-3] = (int) 2
0x380: Return(); Pop(2)

0x381: Stack[-3] = (int) 3
0x382: Return(); Pop(2)

0x383: Stack[-1] = (int) 515596
0x384: Return(); Pop(0)

0x385: Stack[-1] = (int) 514839
0x386: Return(); Pop(0)

0x387: Stack[-1] = "ui/NPC_Citizen3.png"
0x388: Return(); Pop(0)

0x389: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x38a: Return(); Pop(0)

0x38b: Stack[-1] = (bool) 0
0x38c: Return(); Pop(0)

