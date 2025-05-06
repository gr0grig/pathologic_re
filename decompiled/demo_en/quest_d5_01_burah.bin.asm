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
	Doubt
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Agression
	Sorrow
	Smile
	Neutral
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	d5q01
	d5q01BurahMeeting
	pt_d5q01_girl_corpse1
	AddMark
	quest_d5_01
	burah_free
	ood5Burah1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x204
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1fc Vars = (object)
		EVENT_26 Op = 0x208 Vars = (string)
		EVENT_6 Op = 0x224 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x236

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x401

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ff

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x403

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x405

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ee

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
0x31: Call2 0x34a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x28b

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
0x48: Call2 0x27a

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x39b

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Doubt"
0x5e: Call2 0x90

0x5f: Pop(1)
0x60: Push((int) 510543)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 510544)
0x66: Push((int) 11634)
0x67: Push((int) 11633)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 510566)
0x6b: Push((int) 11634)
0x6c: Push((int) 11655)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x407

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x315

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x407

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x325

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x343

0xab: Pop(0)
0xac: Push((int) 13708)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x395

0xb3: Pop(2)
0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x379

0xb8: Pop(2)
0xb9: Push((int) 11632)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(bool, object)
0xbd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Call2 0x39b

0xbf: Pop(1)
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Doubt"
0xc3: Call2 0x90

0xc4: Pop(1)
0xc5: Push((int) 510543)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 510544)
0xcb: Push((int) 11634)
0xcc: Push((int) 11633)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 510566)
0xd0: Push((int) 11634)
0xd1: Push((int) 11655)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 16756)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd8: Push((int) 11650)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Agression"
0xdd: Call2 0x90

0xde: Pop(1)
0xdf: Push((int) 510561)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 510562)
0xe5: Push((int) 11652)
0xe6: Push((int) 11651)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 11652)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Sorrow"
0xef: Call2 0x90

0xf0: Pop(1)
0xf1: Push((int) 510563)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 510564)
0xf7: Push((int) 16749)
0xf8: Push((int) 11653)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 510565)
0xfc: Push((int) -1)
0xfd: Push((int) 11654)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 11634)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Smile"
0x106: Call2 0x90

0x107: Pop(1)
0x108: Push((int) 510545)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 510546)
0x10e: Push((int) 11636)
0x10f: Push((int) 11635)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 510553)
0x113: Push((int) 11643)
0x114: Push((int) 11642)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 510557)
0x118: Push((int) 11647)
0x119: Push((int) 11646)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 11647)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Agression"
0x122: Call2 0x90

0x123: Pop(1)
0x124: Push((int) 510558)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 510559)
0x12a: Push((int) 16743)
0x12b: Push((int) 11648)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 11643)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Doubt"
0x134: Call2 0x90

0x135: Pop(1)
0x136: Push((int) 510554)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 510555)
0x13c: Push((int) 16743)
0x13d: Push((int) 11644)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 510556)
0x141: Push((int) -1)
0x142: Push((int) 11645)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 11636)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Sorrow"
0x14b: Call2 0x90

0x14c: Pop(1)
0x14d: Push((int) 510547)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 510548)
0x153: Push((int) 16743)
0x154: Push((int) 11637)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 510549)
0x158: Push((int) 11639)
0x159: Push((int) 11638)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 11639)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Sorrow"
0x162: Call2 0x90

0x163: Pop(1)
0x164: Push((int) 510550)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 510551)
0x16a: Push((int) 16743)
0x16b: Push((int) 11640)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 510552)
0x16f: Push((int) 16743)
0x170: Push((int) 11641)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 16743)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x90

0x17a: Pop(1)
0x17b: Push((int) 515695)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 515696)
0x181: Push((int) 16749)
0x182: Push((int) 16748)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 515701)
0x186: Push((int) 16752)
0x187: Push((int) 16754)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Push((int) 16749)
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x18e: PushEmpty(string)
0x18f: Stack[-1] = "Neutral"
0x190: Call2 0x90

0x191: Pop(1)
0x192: Push((int) 515697)
0x193: @@ SetMessage(Stack[-1])
0x194: Pop(1)
0x195: @@ ClearReplies()
0x196: Pop(0)
0x197: Push((int) 515698)
0x198: Push((int) 16752)
0x199: Push((int) 16750)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Push((int) 515699)
0x19d: Push((int) 16752)
0x19e: Push((int) 16751)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Return(); Pop(0)

0x1a2: Push((int) 16752)
0x1a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = "Neutral"
0x1a7: Call2 0x90

0x1a8: Pop(1)
0x1a9: Push((int) 515700)
0x1aa: @@ SetMessage(Stack[-1])
0x1ab: Pop(1)
0x1ac: @@ ClearReplies()
0x1ad: Pop(0)
0x1ae: Push((int) 515704)
0x1af: Push((int) 16760)
0x1b0: Push((int) 16759)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: Push((int) 16760)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call2 0x90

0x1ba: Pop(1)
0x1bb: Push((int) 515705)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 515706)
0x1c1: Push((int) 16762)
0x1c2: Push((int) 16761)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 515708)
0x1c6: Push((int) 16764)
0x1c7: Push((int) 16763)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 16764)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0x90

0x1d1: Pop(1)
0x1d2: Push((int) 515709)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 515710)
0x1d8: Push((int) 16762)
0x1d9: Push((int) 16765)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 16762)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral"
0x1e2: Call2 0x90

0x1e3: Pop(1)
0x1e4: Push((int) 515707)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 512539)
0x1ea: Push((int) -1)
0x1eb: Push((int) 13708)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f0: PushEmpty(bool)
0x1f1: Call2 0x407

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f4: @ lshStopAnimation()
0x1f5: Pop(0)
0x1f6: GOTO 0x1f9

0x1f7: @ StopAnimation()
0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: GOTO 0xa7

0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: PushEmpty(int, object)
0x1fe: Stack[-1] = Stack[-3]
0x1ff: Push(-2, 1); TaskCall(0)
0x200: Call2 0x0

0x201: Pop(-2, 1); TaskReturn
0x202: Pop(2)
0x203: Return(); Pop(0)

0x204: @ Hold()
0x205: Pop(0)
0x206: GOTO 0x204

0x207: Return(); Pop(0)

0x208: PushEmpty(bool, bool)
0x209: Push("cleanup")
0x20a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x20d: @ IsLoaded(Stack[-1])
0x20e: Pop(0)
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 0
0x211: Pop(0); Push((bool) Stack[-2] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(bool)
0x214: Call2 0x234

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 1
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: PushEmpty(object)
0x21a: Call2 0x34a

0x21b: Pop(0)
0x21c: @ RemoveActor(Stack[-1])
0x21d: Pop(1)
0x21e: GOTO 0x223

0x21f: Push("restore")
0x220: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x223: Return(); Pop(2)

0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: Push( Stack[0 + Tasks[-1].StackPointer] )
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x234

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(object)
0x22f: Call2 0x34a

0x230: Pop(0)
0x231: @ RemoveActor(Stack[-1])
0x232: Pop(1)
0x233: Return(); Pop(0)

0x234: Stack[-1] = (bool) 1
0x235: Return(); Pop(0)

0x236: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x237: @@ GetPosition(Stack[-8])
0x238: Pop(0)
0x239: @@ GetEyesHeight(Stack[-9])
0x23a: Pop(0)
0x23b: Push(CvectorIndex(Stack[-8], 1))
0x23c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x23d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x23e: @ GetPosition(Stack[-7])
0x23f: Pop(0)
0x240: @ GetEyesHeight(Stack[-9])
0x241: Pop(0)
0x242: Push(CvectorIndex(Stack[-7], 1))
0x243: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x244: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x245: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x246: Push(CvectorIndex(Stack[-6], 1))
0x247: Stack[-1] = (int) 0
0x248: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x249: Pop(0); Push(Stack[-6] | Stack[-6]);
0x24a: Pop(1); Push(Sqrt(Stack[-1]))
0x24b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24c: Stack[-5] = -Stack[-6]; Pop(0);
0x24d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x24e: PushEmpty(cvector, cvector)
0x24f: Push(CVector(0.0, 1.0, 0.0))
0x250: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x251: Call2 0x350

0x252: Pop(1)
0x253: Push((int) 25)
0x254: Pop(2); Push(Stack[-2] * Stack[-1]);
0x255: Pop(2); Push(Stack[-2] + Stack[-1]);
0x256: Push(CVector(0.0, 10.0, 0.0))
0x257: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x258: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x259: @ IsOverrideActive(Stack[-2])
0x25a: Pop(0)
0x25b: Push(Stack[-2])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-21] = (bool) 0
0x25e: Return(); Pop(18)

0x25f: @ StopWorld()
0x260: Pop(0)
0x261: @ CameraTransit(Stack[-3], Stack[-5])
0x262: Pop(0)
0x263: Push(CvectorIndex(Stack[-4], 0))
0x264: Push(CvectorIndex(Stack[-5], 2))
0x265: @ Rotate(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: PushEmpty(bool)
0x268: Call2 0x407

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x274

0x26c: Push("head")
0x26d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26e: Pop(1)
0x26f: Push(Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: Push("head")
0x272: @ LookAsyncCamera(Stack[-1])
0x273: Pop(1)
0x274: @ CameraWaitForPlayFinish()
0x275: Pop(0)
0x276: @ ResumeWorld()
0x277: Pop(0)
0x278: Stack[-21] = (bool) 1
0x279: Return(); Pop(18)

0x27a: PushEmpty(bool, bool)
0x27b: @ CameraSwitchToNormal()
0x27c: Pop(0)
0x27d: PushEmpty(bool)
0x27e: Call2 0x407

0x27f: Pop(0)
0x280: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x281: GOTO 0x28a

0x282: Push("head")
0x283: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x284: Pop(1)
0x285: Push(Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x287: Push("head")
0x288: @ UnlookAsync(Stack[-1])
0x289: Pop(1)
0x28a: Return(); Pop(2)

0x28b: PushEmpty(int, int, int, int)
0x28c: Push("voice_common")
0x28d: @ GetVariable(Stack[-1], Stack[-3])
0x28e: Pop(1)
0x28f: Push(Stack[-2])
0x290: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x291: PushEmpty(bool, object)
0x292: Stack[-1] = Stack[-7]
0x293: Call2 0x2c5

0x294: Pop(1)
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[-7]
0x299: Call2 0x2ea

0x29a: Pop(1)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-6] = (bool) 0
0x29e: Return(); Pop(4)

0x29f: Push((int) 2)
0x2a0: @ irand(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a4: Push("voice_common")
0x2a5: Push((int) 1)
0x2a6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2a7: Push((int) 3)
0x2a8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2a9: @ SetVariable(Stack[-2], Stack[-1])
0x2aa: Pop(2)
0x2ab: GOTO 0x2b0

0x2ac: Push("voice_common")
0x2ad: Push((int) 0)
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2c3

0x2b1: PushEmpty(bool, object)
0x2b2: Stack[-1] = Stack[-7]
0x2b3: Call2 0x2ea

0x2b4: Pop(1)
0x2b5: Pop(1); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-1] = Stack[-7]
0x2b9: Call2 0x2c5

0x2ba: Pop(1)
0x2bb: Pop(1); Push((bool) Stack[-1] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: Stack[-6] = (bool) 0
0x2be: Return(); Pop(4)

0x2bf: Push("voice_common")
0x2c0: Push((int) 1)
0x2c1: @ SetVariable(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: Stack[-6] = (bool) 1
0x2c4: Return(); Pop(4)

0x2c5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c6: Stack[-5] = "c"
0x2c7: Stack[-4] = (int) 0
0x2c8: Push((int) 1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2ca: Push((int) 1)
0x2cb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2cd: @@ HasProperty(Stack[-1], Stack[-4])
0x2ce: Pop(1)
0x2cf: Pop(0); Push((bool) Stack[-3] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2d5

0x2d2: Push((int) 1)
0x2d3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d4: GOTO 0x2c8

0x2d5: Pop(0); Push((bool) Stack[-4] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-12] = (bool) 0
0x2d8: Return(); Pop(10)

0x2d9: Stack[-2] = (int) 0
0x2da: Push((int) 1)
0x2db: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: @ irand(Stack[-2], Stack[-4])
0x2de: Pop(0)
0x2df: Push((int) 1)
0x2e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e2: @@ GetProperty(Stack[-1], Stack[-2])
0x2e3: Pop(1)
0x2e4: PushEmpty(bool, string)
0x2e5: Stack[-1] = Stack[-3]
0x2e6: Call2 0x334

0x2e7: Stack[-14] = Stack[-2]
0x2e8: Pop(2)
0x2e9: Return(); Pop(10)

0x2ea: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2eb: Push("d")
0x2ec: PushEmpty(int)
0x2ed: Call2 0x370

0x2ee: Pop(0)
0x2ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f0: Push("m")
0x2f1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2f2: Stack[-4] = (int) 0
0x2f3: Push((int) 1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f5: Push((int) 1)
0x2f6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f8: @@ HasProperty(Stack[-1], Stack[-4])
0x2f9: Pop(1)
0x2fa: Pop(0); Push((bool) Stack[-3] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x300

0x2fd: Push((int) 1)
0x2fe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ff: GOTO 0x2f3

0x300: Pop(0); Push((bool) Stack[-4] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-12] = (bool) 0
0x303: Return(); Pop(10)

0x304: Stack[-2] = (int) 0
0x305: Push((int) 1)
0x306: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: @ irand(Stack[-2], Stack[-4])
0x309: Pop(0)
0x30a: Push((int) 1)
0x30b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x30c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30d: @@ GetProperty(Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: PushEmpty(bool, string)
0x310: Stack[-1] = Stack[-3]
0x311: Call2 0x334

0x312: Stack[-14] = Stack[-2]
0x313: Pop(2)
0x314: Return(); Pop(10)

0x315: PushEmpty(bool, float, float, bool, float, float)
0x316: @ lshHasAnimation(Stack[-3], Stack[-7])
0x317: Pop(0)
0x318: Push(Stack[-3])
0x319: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x31b: Pop(0)
0x31c: Push((bool) 0)
0x31d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(1)
0x31f: GOTO 0x324

0x320: Push("Can't find lsh animation : ")
0x321: Pop(1); Push(Stack[-1] + Stack[-8]);
0x322: @ Trace(Stack[-1])
0x323: Pop(1)
0x324: Return(); Pop(6)

0x325: PushEmpty(bool, float, float, bool, float, float)
0x326: @ lshHasAnimation(Stack[-3], Stack[-8])
0x327: Pop(0)
0x328: Push(Stack[-3])
0x329: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x32b: Pop(0)
0x32c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x32d: Pop(0)
0x32e: GOTO 0x333

0x32f: Push("Can't find lsh animation : ")
0x330: Pop(1); Push(Stack[-1] + Stack[-9]);
0x331: @ Trace(Stack[-1])
0x332: Pop(1)
0x333: Return(); Pop(6)

0x334: PushEmpty(bool, bool)
0x335: PushEmpty(bool)
0x336: Call2 0x407

0x337: Pop(0)
0x338: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x339: @ lshHasSpeech(Stack[-1], Stack[-3])
0x33a: Pop(0)
0x33b: Push(Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33d: @ lshPlaySpeech(Stack[-3])
0x33e: Pop(0)
0x33f: Stack[-4] = (bool) 1
0x340: Return(); Pop(2)

0x341: Stack[-4] = (bool) 0
0x342: Return(); Pop(2)

0x343: PushEmpty(bool)
0x344: Call2 0x407

0x345: Pop(0)
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: @ lshStopSpeech()
0x348: Pop(0)
0x349: Return(); Pop(0)

0x34a: PushEmpty(object, object)
0x34b: @ self(Stack[-1])
0x34c: Pop(0)
0x34d: Stack[-3] = Stack[-1]
0x34e: Return(); Pop(2)

0x34f: Stack[-1] = 0
0x350: PushEmpty(float, float)
0x351: Pop(0); Push(Stack[-3] | Stack[-3]);
0x352: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x353: Push((float)0.0)
0x354: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x356: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x357: Return(); Pop(2)

0x358: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x359: Return(); Pop(2)

0x35a: PushEmpty(int, int)
0x35b: @ GetVariable(Stack[-3], Stack[-1])
0x35c: Pop(0)
0x35d: Stack[-4] = Stack[-1]
0x35e: Return(); Pop(2)

0x35f: PushEmpty(object, object)
0x360: @ FindActor(Stack[-1], Stack[-4])
0x361: Pop(0)
0x362: Pop(0); Push((bool) Stack[-1] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-5] = (bool) 0
0x365: Return(); Pop(2)

0x366: @ Trigger(Stack[-1], Stack[-3])
0x367: Pop(0)
0x368: Stack[-5] = (bool) 1
0x369: Return(); Pop(2)

0x36a: Stack[-1] = 0
0x36b: PushEmpty(float, float)
0x36c: @ GetGameTime(Stack[-1])
0x36d: Pop(0)
0x36e: Stack[-3] = Stack[-1]
0x36f: Return(); Pop(2)

0x370: PushEmpty(float, float)
0x371: @ GetGameTime(Stack[-1])
0x372: Pop(0)
0x373: Push((int) 1)
0x374: PushEmpty(int)
0x375: Push((int) 24)
0x376: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x377: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x378: Return(); Pop(2)

0x379: PushEmpty(object, object)
0x37a: Push("d5q01")
0x37b: Push((int) 7)
0x37c: @ SetVariable(Stack[-2], Stack[-1])
0x37d: Pop(2)
0x37e: PushEmpty(object)
0x37f: Call2 0x3dd

0x380: Stack[-2] = Stack[-1]
0x381: Pop(1)
0x382: Push("d5q01BurahMeeting")
0x383: Push("pt_d5q01_girl_corpse1")
0x384: Push((int) 1)
0x385: Push((int) 515351)
0x386: PushEmpty(float)
0x387: Call2 0x36b

0x388: Pop(0)
0x389: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(5)
0x38b: PushEmpty()
0x38c: Call2 0x3a7

0x38d: Pop(0)
0x38e: PushEmpty(bool, string, string)
0x38f: Stack[-2] = "quest_d5_01"
0x390: Stack[-1] = "burah_free"
0x391: Call2 0x35f

0x392: Pop(3)
0x393: Return(); Pop(2)

0x394: Stack[-1] = 0
0x395: PushEmpty()
0x396: Push("ood5Burah1")
0x397: Push((int) 1)
0x398: @ SetVariable(Stack[-2], Stack[-1])
0x399: Pop(2)
0x39a: Return(); Pop(0)

0x39b: PushEmpty()
0x39c: PushEmpty(int, string)
0x39d: Stack[-1] = "ood5Burah1"
0x39e: Call2 0x35a

0x39f: Pop(1)
0x3a0: Push((int) 0)
0x3a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-2] = (bool) 1
0x3a4: Return(); Pop(0)

0x3a5: Stack[-2] = (bool) 0
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty(object, object)
0x3a8: Push((int) 146)
0x3a9: Push((int) 1)
0x3aa: Push((int) 515346)
0x3ab: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: PushEmpty(bool, object, int)
0x3ae: Stack[-2] = Stack[-4]
0x3af: Stack[-1] = (int) 139
0x3b0: Call2 0x3c1

0x3b1: Pop(3)
0x3b2: Return(); Pop(2)

0x3b3: Stack[-1] = 0
0x3b4: PushEmpty(object, object)
0x3b5: @ GetDiaryRoot(Stack[-1])
0x3b6: Pop(0)
0x3b7: Pop(0); Push((bool) Stack[-1] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b9: Push("Can't retrieve diary root")
0x3ba: @ Trace(Stack[-1])
0x3bb: Pop(1)
0x3bc: Stack[-3] = (bool) 0
0x3bd: Return(); Pop(2)

0x3be: Stack[-3] = Stack[-1]
0x3bf: Return(); Pop(2)

0x3c0: Stack[-1] = 0
0x3c1: PushEmpty(object, object, int, object, object, int)
0x3c2: PushEmpty(object)
0x3c3: Call2 0x3b4

0x3c4: Stack[-4] = Stack[-1]
0x3c5: Pop(1)
0x3c6: @@ Find(Stack[-7], Stack[-2])
0x3c7: Pop(0)
0x3c8: Pop(0); Push((bool) Stack[-2] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: Push("Can't find diary parent with id: ")
0x3cb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3cc: @ Trace(Stack[-1])
0x3cd: Pop(1)
0x3ce: Stack[-9] = (bool) 0
0x3cf: Return(); Pop(6)

0x3d0: @@ AddChild(Stack[-8])
0x3d1: Pop(0)
0x3d2: Push((int) 7)
0x3d3: @ SendWorldWndMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ GetCategory(Stack[-1])
0x3d6: Pop(0)
0x3d7: @ SetDiarySection(Stack[-1])
0x3d8: Pop(0)
0x3d9: Stack[-9] = (bool) 0
0x3da: Return(); Pop(6)

0x3db: Stack[-2] = 0
0x3dc: Stack[-3] = 0
0x3dd: PushEmpty(object, object, object, object)
0x3de: @ GetMainOutdoorScene(Stack[-2])
0x3df: Pop(0)
0x3e0: Pop(0); Push((bool) Stack[-2] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e2: Push("Can't find main outdoor scene")
0x3e3: @ Trace(Stack[-1])
0x3e4: Pop(1)
0x3e5: Stack[-1] = 0
0x3e6: Stack[-5] = Stack[-1]
0x3e7: Return(); Pop(4)

0x3e8: @@ GetMap(Stack[-1])
0x3e9: Pop(0)
0x3ea: Stack[-5] = Stack[-1]
0x3eb: Return(); Pop(4)

0x3ec: Stack[-1] = 0
0x3ed: Stack[-2] = 0
0x3ee: PushEmpty(int, int)
0x3ef: Push("branch")
0x3f0: @ GetVariable(Stack[-1], Stack[-2])
0x3f1: Pop(1)
0x3f2: Push((int) 0)
0x3f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f5: Stack[-3] = (int) 1
0x3f6: Return(); Pop(2)

0x3f7: GOTO 0x3fd

0x3f8: Push((int) 1)
0x3f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-3] = (int) 2
0x3fc: Return(); Pop(2)

0x3fd: Stack[-3] = (int) 3
0x3fe: Return(); Pop(2)

0x3ff: Stack[-1] = (int) 515592
0x400: Return(); Pop(0)

0x401: Stack[-1] = (int) 511961
0x402: Return(); Pop(0)

0x403: Stack[-1] = "ui/NPC_Burah.png"
0x404: Return(); Pop(0)

0x405: Stack[-1] = "ui/NPC_Burah_b.png"
0x406: Return(); Pop(0)

0x407: Stack[-1] = (bool) 1
0x408: Return(); Pop(0)

