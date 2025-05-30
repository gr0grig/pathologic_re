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
	ood11Nude1
	d11q01
	d11q01NudeGotoRastrel
	pt_d11q01_msoldier
	AddMark
	quest_d11_01
	init_soldiers
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x1b3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1ab Vars = (object)
		EVENT_26 Op = 0x1b7 Vars = (string)
		EVENT_6 Op = 0x1d3 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1e5

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x2f6

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x2f8

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x2d5

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
0x36: Call 0x21d

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
0x44: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x282

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x28e

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x53: PushEmpty(object, object)
0x54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56: Call 0x260

0x57: Pop(2)
0x58: PushEmpty(string)
0x59: Stack[-1] = "Neutral"
0x5a: Call 0x9b

0x5b: Pop(1)
0x5c: Push((int) 14421)
0x5d: @@ SetMessage(Stack[-1])
0x5e: Pop(1)
0x5f: @@ ClearReplies()
0x60: Pop(0)
0x61: Push((int) 14422)
0x62: Push((int) 15648)
0x63: Push((int) 15647)
0x64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65: Pop(3)
0x66: Push((int) 14443)
0x67: Push((int) 15650)
0x68: Push((int) 15670)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: GOTO 0x7d

0x6c: PushEmpty(string)
0x6d: Stack[-1] = "Neutral"
0x6e: Call 0x9b

0x6f: Pop(1)
0x70: Push((int) 14502)
0x71: @@ SetMessage(Stack[-1])
0x72: Pop(1)
0x73: @@ ClearReplies()
0x74: Pop(0)
0x75: Push((int) 14503)
0x76: Push((int) -1)
0x77: Push((int) 15740)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: GOTO 0x7d

0x7b: Return(); Pop(0)

0x7c: GOTO 0x43

0x7d: PushEmpty(bool)
0x7e: Call 0x2fa

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x81: @ lshWaitForAnimEnd()
0x82: Pop(0)
0x83: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x8b

0x86: PushEmpty(string)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call 0x221

0x89: Pop(1)
0x8a: GOTO 0x81

0x8b: GOTO 0x9a

0x8c: Push("all")
0x8d: Push("idle")
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ WaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: GOTO 0x90

0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty(bool)
0x9d: Call 0x2fa

0x9e: Pop(0)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = Stack[-2]
0xa7: Call 0x221

0xa8: Pop(1)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0xae: PushEmpty()
0xaf: Call 0x233

0xb0: Pop(0)
0xb1: Push((int) 15659)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call 0x266

0xb8: Pop(2)
0xb9: Push((int) 15660)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call 0x266

0xc0: Pop(2)
0xc1: Push((int) 15646)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xc4: PushEmpty(bool)
0xc5: Stack[-1] = (bool) 0
0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call 0x282

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call 0x28e

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[-1] = (bool) 1
0xd1: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call 0x260

0xd6: Pop(2)
0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0x9b

0xda: Pop(1)
0xdb: Push((int) 14421)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 14422)
0xe1: Push((int) 15648)
0xe2: Push((int) 15647)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 14443)
0xe6: Push((int) 15650)
0xe7: Push((int) 15670)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call 0x9b

0xee: Pop(1)
0xef: Push((int) 14502)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: Push((int) 14503)
0xf5: Push((int) -1)
0xf6: Push((int) 15740)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 15648)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral"
0xff: Call 0x9b

0x100: Pop(1)
0x101: Push((int) 14423)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 14424)
0x107: Push((int) 15650)
0x108: Push((int) 15649)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Push((int) 14440)
0x10c: Push((int) 15667)
0x10d: Push((int) 15666)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: Push((int) 15667)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Neutral"
0x116: Call 0x9b

0x117: Pop(1)
0x118: Push((int) 14441)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 14442)
0x11e: Push((int) 15650)
0x11f: Push((int) 15668)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 15650)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call 0x9b

0x129: Pop(1)
0x12a: Push((int) 14425)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 14426)
0x130: Push((int) 15652)
0x131: Push((int) 15651)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 14436)
0x135: Push((int) 15662)
0x136: Push((int) 15661)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 15662)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call 0x9b

0x140: Pop(1)
0x141: Push((int) 14437)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 14438)
0x147: Push((int) 15652)
0x148: Push((int) 15663)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 14439)
0x14c: Push((int) 15652)
0x14d: Push((int) 15665)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 15652)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call 0x9b

0x157: Pop(1)
0x158: Push((int) 14427)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 14428)
0x15e: Push((int) 15654)
0x15f: Push((int) 15653)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 15654)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call 0x9b

0x169: Pop(1)
0x16a: Push((int) 14429)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 14430)
0x170: Push((int) 15656)
0x171: Push((int) 15655)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 15656)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call 0x9b

0x17b: Pop(1)
0x17c: Push((int) 14431)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 14432)
0x182: Push((int) 15658)
0x183: Push((int) 15657)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 15658)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral"
0x18c: Call 0x9b

0x18d: Pop(1)
0x18e: Push((int) 14433)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 14434)
0x194: Push((int) -1)
0x195: Push((int) 15659)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Push((int) 14435)
0x199: Push((int) -1)
0x19a: Push((int) 15660)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19f: PushEmpty(bool)
0x1a0: Call 0x2fa

0x1a1: Pop(0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a3: @ lshStopAnimation()
0x1a4: Pop(0)
0x1a5: GOTO 0x1a8

0x1a6: @ StopAnimation()
0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: GOTO 0xac

0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(int, object)
0x1ad: Stack[-1] = Stack[-3]
0x1ae: Push(-2, 1); TaskCall(0)
0x1af: Call 0x0

0x1b0: Pop(-2, 1); TaskReturn
0x1b1: Pop(2)
0x1b2: Return(); Pop(0)

0x1b3: @ Hold()
0x1b4: Pop(0)
0x1b5: GOTO 0x1b3

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(bool, bool)
0x1b8: Push("cleanup")
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1bc: @ IsLoaded(Stack[-1])
0x1bd: Pop(0)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: Pop(0); Push((bool) Stack[-2] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty(bool)
0x1c3: Call 0x1e3

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(object)
0x1c9: Call 0x23a

0x1ca: Pop(0)
0x1cb: @ RemoveActor(Stack[-1])
0x1cc: Pop(1)
0x1cd: GOTO 0x1d2

0x1ce: Push("restore")
0x1cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 0
0x1d5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call 0x1e3

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(object)
0x1de: Call 0x23a

0x1df: Pop(0)
0x1e0: @ RemoveActor(Stack[-1])
0x1e1: Pop(1)
0x1e2: Return(); Pop(0)

0x1e3: Stack[-1] = (bool) 1
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1e6: @@ GetPosition(Stack[-7])
0x1e7: Pop(0)
0x1e8: @@ GetEyesHeight(Stack[-8])
0x1e9: Pop(0)
0x1ea: Push(CvectorIndex(Stack[-7], 1))
0x1eb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ec: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ed: @ GetPosition(Stack[-6])
0x1ee: Pop(0)
0x1ef: @ GetEyesHeight(Stack[-8])
0x1f0: Pop(0)
0x1f1: Push(CvectorIndex(Stack[-6], 1))
0x1f2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1f3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1f5: Push(CvectorIndex(Stack[-5], 1))
0x1f6: Stack[-1] = (int) 0
0x1f7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1f8: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1f9: Pop(1); Push(Sqrt(Stack[-1]))
0x1fa: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1fb: Stack[-4] = -Stack[-5]; Pop(0);
0x1fc: Push((int) 70)
0x1fd: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1fe: PushEmpty(cvector, cvector)
0x1ff: Push(CVector(0.0, 1.0, 0.0))
0x200: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x201: Call 0x240

0x202: Pop(1)
0x203: Push((int) 25)
0x204: Pop(2); Push(Stack[-2] * Stack[-1]);
0x205: Pop(2); Push(Stack[-2] + Stack[-1]);
0x206: Push(CVector(0.0, 10.0, 0.0))
0x207: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x208: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x209: @ IsOverrideActive(Stack[-1])
0x20a: Pop(0)
0x20b: Push(Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-18] = (bool) 0
0x20e: Return(); Pop(16)

0x20f: @ StopWorld()
0x210: Pop(0)
0x211: @ CameraTransit(Stack[-2], Stack[-4])
0x212: Pop(0)
0x213: Push(CvectorIndex(Stack[-3], 0))
0x214: Push(CvectorIndex(Stack[-4], 2))
0x215: @ Rotate(Stack[-2], Stack[-1])
0x216: Pop(2)
0x217: @ CameraWaitForPlayFinish()
0x218: Pop(0)
0x219: @ ResumeWorld()
0x21a: Pop(0)
0x21b: Stack[-18] = (bool) 1
0x21c: Return(); Pop(16)

0x21d: PushEmpty()
0x21e: @ CameraSwitchToNormal()
0x21f: Pop(0)
0x220: Return(); Pop(0)

0x221: PushEmpty(float, float, float, float)
0x222: Push("playing ")
0x223: Pop(1); Push(Stack[-1] + Stack[-6]);
0x224: @ Trace(Stack[-1])
0x225: Pop(1)
0x226: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x227: Pop(0)
0x228: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x229: Pop(0)
0x22a: Push("start: ")
0x22b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x22c: @ Trace(Stack[-1])
0x22d: Pop(1)
0x22e: Push("end: ")
0x22f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x230: @ Trace(Stack[-1])
0x231: Pop(1)
0x232: Return(); Pop(4)

0x233: PushEmpty(bool)
0x234: Call 0x2fa

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: @ lshStopSpeech()
0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: PushEmpty(object, object)
0x23b: @ self(Stack[-1])
0x23c: Pop(0)
0x23d: Stack[-3] = Stack[-1]
0x23e: Return(); Pop(2)

0x23f: Stack[-1] = 0
0x240: PushEmpty(float, float)
0x241: Pop(0); Push(Stack[-3] | Stack[-3]);
0x242: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x243: Push((float)0.0)
0x244: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x247: Return(); Pop(2)

0x248: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x249: Return(); Pop(2)

0x24a: PushEmpty(int, int)
0x24b: @ GetVariable(Stack[-3], Stack[-1])
0x24c: Pop(0)
0x24d: Stack[-4] = Stack[-1]
0x24e: Return(); Pop(2)

0x24f: PushEmpty(object, object)
0x250: @ FindActor(Stack[-1], Stack[-4])
0x251: Pop(0)
0x252: Pop(0); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: Stack[-5] = (bool) 0
0x255: Return(); Pop(2)

0x256: @ Trigger(Stack[-1], Stack[-3])
0x257: Pop(0)
0x258: Stack[-5] = (bool) 1
0x259: Return(); Pop(2)

0x25a: Stack[-1] = 0
0x25b: PushEmpty(float, float)
0x25c: @ GetGameTime(Stack[-1])
0x25d: Pop(0)
0x25e: Stack[-3] = Stack[-1]
0x25f: Return(); Pop(2)

0x260: PushEmpty()
0x261: Push("ood11Nude1")
0x262: Push((int) 1)
0x263: @ SetVariable(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: Return(); Pop(0)

0x266: PushEmpty(object, object)
0x267: Push("d11q01")
0x268: Push((int) 2)
0x269: @ SetVariable(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: PushEmpty(object)
0x26c: Call 0x2c4

0x26d: Stack[-2] = Stack[-1]
0x26e: Pop(1)
0x26f: Push("d11q01NudeGotoRastrel")
0x270: Push("pt_d11q01_msoldier")
0x271: Push((int) 1)
0x272: Push((int) 15482)
0x273: PushEmpty(float)
0x274: Call 0x25b

0x275: Pop(0)
0x276: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(5)
0x278: PushEmpty()
0x279: Call 0x2e6

0x27a: Pop(0)
0x27b: PushEmpty(bool, string, string)
0x27c: Stack[-2] = "quest_d11_01"
0x27d: Stack[-1] = "init_soldiers"
0x27e: Call 0x24f

0x27f: Pop(3)
0x280: Return(); Pop(2)

0x281: Stack[-1] = 0
0x282: PushEmpty()
0x283: PushEmpty(int, string)
0x284: Stack[-1] = "d11q01"
0x285: Call 0x24a

0x286: Pop(1)
0x287: Push((int) 1)
0x288: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-2] = (bool) 1
0x28b: Return(); Pop(0)

0x28c: Stack[-2] = (bool) 0
0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: PushEmpty(int, string)
0x290: Stack[-1] = "ood11Nude1"
0x291: Call 0x24a

0x292: Pop(1)
0x293: Push((int) 0)
0x294: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-2] = (bool) 1
0x297: Return(); Pop(0)

0x298: Stack[-2] = (bool) 0
0x299: Return(); Pop(0)

0x29a: PushEmpty(object, object)
0x29b: @ GetDiaryRoot(Stack[-1])
0x29c: Pop(0)
0x29d: Pop(0); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: Push("Can't retrieve diary root")
0x2a0: @ Trace(Stack[-1])
0x2a1: Pop(1)
0x2a2: Stack[-3] = (bool) 0
0x2a3: Return(); Pop(2)

0x2a4: Stack[-3] = Stack[-1]
0x2a5: Return(); Pop(2)

0x2a6: Stack[-1] = 0
0x2a7: PushEmpty(object, object, int, object, object, int)
0x2a8: PushEmpty(object)
0x2a9: Call 0x29a

0x2aa: Stack[-4] = Stack[-1]
0x2ab: Pop(1)
0x2ac: @@ Find(Stack[-7], Stack[-2])
0x2ad: Pop(0)
0x2ae: Pop(0); Push((bool) Stack[-2] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b0: Push("Can't find diary parent with id: ")
0x2b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b2: @ Trace(Stack[-1])
0x2b3: Pop(1)
0x2b4: Stack[-9] = (bool) 0
0x2b5: Return(); Pop(6)

0x2b6: @@ AddChild(Stack[-8])
0x2b7: Pop(0)
0x2b8: Push("player_diary")
0x2b9: Push((int) 1)
0x2ba: @ SetVariable(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: @@ GetCategory(Stack[-1])
0x2bd: Pop(0)
0x2be: @ SetDiarySection(Stack[-1])
0x2bf: Pop(0)
0x2c0: Stack[-9] = (bool) 0
0x2c1: Return(); Pop(6)

0x2c2: Stack[-2] = 0
0x2c3: Stack[-3] = 0
0x2c4: PushEmpty(object, object, object, object)
0x2c5: @ GetMainOutdoorScene(Stack[-2])
0x2c6: Pop(0)
0x2c7: Pop(0); Push((bool) Stack[-2] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c9: Push("Can't find main outdoor scene")
0x2ca: @ Trace(Stack[-1])
0x2cb: Pop(1)
0x2cc: Stack[-1] = 0
0x2cd: Stack[-5] = Stack[-1]
0x2ce: Return(); Pop(4)

0x2cf: @@ GetMap(Stack[-1])
0x2d0: Pop(0)
0x2d1: Stack[-5] = Stack[-1]
0x2d2: Return(); Pop(4)

0x2d3: Stack[-1] = 0
0x2d4: Stack[-2] = 0
0x2d5: PushEmpty(int, int)
0x2d6: Push("player")
0x2d7: @ GetVariable(Stack[-1], Stack[-2])
0x2d8: Pop(1)
0x2d9: Push((int) 0)
0x2da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dc: Stack[-3] = (int) 200001
0x2dd: Return(); Pop(2)

0x2de: GOTO 0x2e4

0x2df: Push((int) 1)
0x2e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-3] = (int) 200002
0x2e3: Return(); Pop(2)

0x2e4: Stack[-3] = (int) 200003
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(object, object)
0x2e7: Push("Adding diary entry")
0x2e8: @ Trace(Stack[-1])
0x2e9: Pop(1)
0x2ea: Push((int) 194)
0x2eb: Push((int) 1)
0x2ec: Push((int) 15479)
0x2ed: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: PushEmpty(bool, object, int)
0x2f0: Stack[-2] = Stack[-4]
0x2f1: Stack[-1] = (int) 192
0x2f2: Call 0x2a7

0x2f3: Pop(3)
0x2f4: Return(); Pop(2)

0x2f5: Stack[-1] = 0
0x2f6: Stack[-1] = (int) 14839
0x2f7: Return(); Pop(0)

0x2f8: Stack[-1] = "ui/NPC_None.png"
0x2f9: Return(); Pop(0)

0x2fa: Stack[-1] = (bool) 0
0x2fb: Return(); Pop(0)

