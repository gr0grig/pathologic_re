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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x21d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x215 Vars = (object)
		EVENT_26 Op = 0x221 Vars = (string)
		EVENT_6 Op = 0x23d Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x24f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x41c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x41a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x41e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x420

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x409

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
0x31: Call2 0x365

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2a6

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
0x48: Call2 0x294

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3b6

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Doubt"
0x5e: Call2 0x95

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
0x6a: Push((int) 510560)
0x6b: Push((int) 16756)
0x6c: Push((int) 11649)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 510566)
0x70: Push((int) 11634)
0x71: Push((int) 11655)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x422

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x330

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x422

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x340

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x35e

0xb0: Pop(0)
0xb1: Push((int) 13708)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x3b0

0xb8: Pop(2)
0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x394

0xbd: Pop(2)
0xbe: Push((int) 11632)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x3b6

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Doubt"
0xc8: Call2 0x95

0xc9: Pop(1)
0xca: Push((int) 510543)
0xcb: @@ SetMessage(Stack[-1])
0xcc: Pop(1)
0xcd: @@ ClearReplies()
0xce: Pop(0)
0xcf: Push((int) 510544)
0xd0: Push((int) 11634)
0xd1: Push((int) 11633)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 510560)
0xd5: Push((int) 16756)
0xd6: Push((int) 11649)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 510566)
0xda: Push((int) 11634)
0xdb: Push((int) 11655)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 16756)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Agression"
0xe4: Call2 0x95

0xe5: Pop(1)
0xe6: Push((int) 515702)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 515703)
0xec: Push((int) 11650)
0xed: Push((int) 16757)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 11650)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Agression"
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 510561)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 510562)
0xfe: Push((int) 11652)
0xff: Push((int) 11651)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 11652)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Sorrow"
0x108: Call2 0x95

0x109: Pop(1)
0x10a: Push((int) 510563)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 510564)
0x110: Push((int) 16749)
0x111: Push((int) 11653)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 510565)
0x115: Push((int) -1)
0x116: Push((int) 11654)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 11634)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Smile"
0x11f: Call2 0x95

0x120: Pop(1)
0x121: Push((int) 510545)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 510546)
0x127: Push((int) 11636)
0x128: Push((int) 11635)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 510553)
0x12c: Push((int) 11643)
0x12d: Push((int) 11642)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 510557)
0x131: Push((int) 11647)
0x132: Push((int) 11646)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 11647)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Agression"
0x13b: Call2 0x95

0x13c: Pop(1)
0x13d: Push((int) 510558)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 510559)
0x143: Push((int) 16743)
0x144: Push((int) 11648)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 11643)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Doubt"
0x14d: Call2 0x95

0x14e: Pop(1)
0x14f: Push((int) 510554)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 510555)
0x155: Push((int) 16743)
0x156: Push((int) 11644)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 510556)
0x15a: Push((int) -1)
0x15b: Push((int) 11645)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 11636)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Sorrow"
0x164: Call2 0x95

0x165: Pop(1)
0x166: Push((int) 510547)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 510548)
0x16c: Push((int) 16743)
0x16d: Push((int) 11637)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Push((int) 510549)
0x171: Push((int) 11639)
0x172: Push((int) 11638)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: Push((int) 11639)
0x177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Sorrow"
0x17b: Call2 0x95

0x17c: Pop(1)
0x17d: Push((int) 510550)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: Push((int) 510551)
0x183: Push((int) 16743)
0x184: Push((int) 11640)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 510552)
0x188: Push((int) 16743)
0x189: Push((int) 11641)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 16743)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0x95

0x193: Pop(1)
0x194: Push((int) 515695)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 515696)
0x19a: Push((int) 16749)
0x19b: Push((int) 16748)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 515701)
0x19f: Push((int) 16752)
0x1a0: Push((int) 16754)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 16749)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call2 0x95

0x1aa: Pop(1)
0x1ab: Push((int) 515697)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 515698)
0x1b1: Push((int) 16752)
0x1b2: Push((int) 16750)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 515699)
0x1b6: Push((int) 16752)
0x1b7: Push((int) 16751)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 16752)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0x95

0x1c1: Pop(1)
0x1c2: Push((int) 515700)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 515704)
0x1c8: Push((int) 16760)
0x1c9: Push((int) 16759)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 16760)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral"
0x1d2: Call2 0x95

0x1d3: Pop(1)
0x1d4: Push((int) 515705)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 515706)
0x1da: Push((int) 16762)
0x1db: Push((int) 16761)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Push((int) 515708)
0x1df: Push((int) 16764)
0x1e0: Push((int) 16763)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 16764)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Neutral"
0x1e9: Call2 0x95

0x1ea: Pop(1)
0x1eb: Push((int) 515709)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 515710)
0x1f1: Push((int) 16762)
0x1f2: Push((int) 16765)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 16762)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral"
0x1fb: Call2 0x95

0x1fc: Pop(1)
0x1fd: Push((int) 515707)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 512539)
0x203: Push((int) -1)
0x204: Push((int) 13708)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x209: PushEmpty(bool)
0x20a: Call2 0x422

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: @ lshStopAnimation()
0x20e: Pop(0)
0x20f: GOTO 0x212

0x210: @ StopAnimation()
0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: GOTO 0xac

0x214: Return(); Pop(0)

0x215: PushEmpty()
0x216: PushEmpty(int, object)
0x217: Stack[-1] = Stack[-3]
0x218: Push(-2, 1); TaskCall(0)
0x219: Call2 0x0

0x21a: Pop(-2, 1); TaskReturn
0x21b: Pop(2)
0x21c: Return(); Pop(0)

0x21d: @ Hold()
0x21e: Pop(0)
0x21f: GOTO 0x21d

0x220: Return(); Pop(0)

0x221: PushEmpty(bool, bool)
0x222: Push("cleanup")
0x223: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x225: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x226: @ IsLoaded(Stack[-1])
0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: Pop(0); Push((bool) Stack[-2] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: PushEmpty(bool)
0x22d: Call2 0x24d

0x22e: Pop(0)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-1] = (bool) 1
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: PushEmpty(object)
0x233: Call2 0x365

0x234: Pop(0)
0x235: @ RemoveActor(Stack[-1])
0x236: Pop(1)
0x237: GOTO 0x23c

0x238: Push("restore")
0x239: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x23c: Return(); Pop(2)

0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: PushEmpty(bool)
0x242: Call2 0x24d

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(object)
0x248: Call2 0x365

0x249: Pop(0)
0x24a: @ RemoveActor(Stack[-1])
0x24b: Pop(1)
0x24c: Return(); Pop(0)

0x24d: Stack[-1] = (bool) 1
0x24e: Return(); Pop(0)

0x24f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x250: @@ GetPosition(Stack[-8])
0x251: Pop(0)
0x252: @@ GetEyesHeight(Stack[-9])
0x253: Pop(0)
0x254: Push(CvectorIndex(Stack[-8], 1))
0x255: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x256: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x257: @ GetPosition(Stack[-7])
0x258: Pop(0)
0x259: @ GetEyesHeight(Stack[-9])
0x25a: Pop(0)
0x25b: Push(CvectorIndex(Stack[-7], 1))
0x25c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x25e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x25f: Push(CvectorIndex(Stack[-6], 1))
0x260: Stack[-1] = (int) 0
0x261: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x262: Pop(0); Push(Stack[-6] | Stack[-6]);
0x263: Pop(1); Push(Sqrt(Stack[-1]))
0x264: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x265: Stack[-5] = -Stack[-6]; Pop(0);
0x266: Pop(0); Push(Stack[-6] * Stack[-19]);
0x267: PushEmpty(cvector, cvector)
0x268: Push(CVector(0.0, 1.0, 0.0))
0x269: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26a: Call2 0x36b

0x26b: Pop(1)
0x26c: Push((int) 25)
0x26d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26f: Push(CVector(0.0, 10.0, 0.0))
0x270: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x271: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x272: @ IsOverrideActive(Stack[-2])
0x273: Pop(0)
0x274: Push(Stack[-2])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-21] = (bool) 0
0x277: Return(); Pop(18)

0x278: @ StopWorld()
0x279: Pop(0)
0x27a: Push((bool) 1)
0x27b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x27c: Pop(1)
0x27d: Push(CvectorIndex(Stack[-4], 0))
0x27e: Push(CvectorIndex(Stack[-5], 2))
0x27f: @ Rotate(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: PushEmpty(bool)
0x282: Call2 0x422

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: GOTO 0x28e

0x286: Push("head")
0x287: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x288: Pop(1)
0x289: Push(Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28b: Push("head")
0x28c: @ LookAsyncCamera(Stack[-1])
0x28d: Pop(1)
0x28e: @ CameraWaitForPlayFinish()
0x28f: Pop(0)
0x290: @ ResumeWorld()
0x291: Pop(0)
0x292: Stack[-21] = (bool) 1
0x293: Return(); Pop(18)

0x294: PushEmpty(bool, bool)
0x295: Push((bool) 1)
0x296: @ CameraSwitchToNormal(Stack[-1])
0x297: Pop(1)
0x298: PushEmpty(bool)
0x299: Call2 0x422

0x29a: Pop(0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a5

0x29d: Push("head")
0x29e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x29f: Pop(1)
0x2a0: Push(Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a2: Push("head")
0x2a3: @ UnlookAsync(Stack[-1])
0x2a4: Pop(1)
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(int, int, int, int)
0x2a7: Push("voice_common")
0x2a8: @ GetVariable(Stack[-1], Stack[-3])
0x2a9: Pop(1)
0x2aa: Push(Stack[-2])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-7]
0x2ae: Call2 0x2e0

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[-7]
0x2b4: Call2 0x305

0x2b5: Pop(1)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-6] = (bool) 0
0x2b9: Return(); Pop(4)

0x2ba: Push((int) 2)
0x2bb: @ irand(Stack[-2], Stack[-1])
0x2bc: Pop(1)
0x2bd: Push(Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2bf: Push("voice_common")
0x2c0: Push((int) 1)
0x2c1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2c2: Push((int) 3)
0x2c3: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2c4: @ SetVariable(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: GOTO 0x2cb

0x2c7: Push("voice_common")
0x2c8: Push((int) 0)
0x2c9: @ SetVariable(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: GOTO 0x2de

0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[-7]
0x2ce: Call2 0x305

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[-7]
0x2d4: Call2 0x2e0

0x2d5: Pop(1)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-6] = (bool) 0
0x2d9: Return(); Pop(4)

0x2da: Push("voice_common")
0x2db: Push((int) 1)
0x2dc: @ SetVariable(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: Stack[-6] = (bool) 1
0x2df: Return(); Pop(4)

0x2e0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2e1: Stack[-5] = "c"
0x2e2: Stack[-4] = (int) 0
0x2e3: Push((int) 1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e5: Push((int) 1)
0x2e6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e8: @@ HasProperty(Stack[-1], Stack[-4])
0x2e9: Pop(1)
0x2ea: Pop(0); Push((bool) Stack[-3] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f0

0x2ed: Push((int) 1)
0x2ee: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ef: GOTO 0x2e3

0x2f0: Pop(0); Push((bool) Stack[-4] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-12] = (bool) 0
0x2f3: Return(); Pop(10)

0x2f4: Stack[-2] = (int) 0
0x2f5: Push((int) 1)
0x2f6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: @ irand(Stack[-2], Stack[-4])
0x2f9: Pop(0)
0x2fa: Push((int) 1)
0x2fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2fd: @@ GetProperty(Stack[-1], Stack[-2])
0x2fe: Pop(1)
0x2ff: PushEmpty(bool, string)
0x300: Stack[-1] = Stack[-3]
0x301: Call2 0x34f

0x302: Stack[-14] = Stack[-2]
0x303: Pop(2)
0x304: Return(); Pop(10)

0x305: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x306: Push("d")
0x307: PushEmpty(int)
0x308: Call2 0x38b

0x309: Pop(0)
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: Push("m")
0x30c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x30d: Stack[-4] = (int) 0
0x30e: Push((int) 1)
0x30f: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x310: Push((int) 1)
0x311: Pop(1); Push(Stack[-5] + Stack[-1]);
0x312: Pop(1); Push(Stack[-6] + Stack[-1]);
0x313: @@ HasProperty(Stack[-1], Stack[-4])
0x314: Pop(1)
0x315: Pop(0); Push((bool) Stack[-3] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: GOTO 0x31b

0x318: Push((int) 1)
0x319: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x31a: GOTO 0x30e

0x31b: Pop(0); Push((bool) Stack[-4] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-12] = (bool) 0
0x31e: Return(); Pop(10)

0x31f: Stack[-2] = (int) 0
0x320: Push((int) 1)
0x321: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: @ irand(Stack[-2], Stack[-4])
0x324: Pop(0)
0x325: Push((int) 1)
0x326: Pop(1); Push(Stack[-3] + Stack[-1]);
0x327: Pop(1); Push(Stack[-6] + Stack[-1]);
0x328: @@ GetProperty(Stack[-1], Stack[-2])
0x329: Pop(1)
0x32a: PushEmpty(bool, string)
0x32b: Stack[-1] = Stack[-3]
0x32c: Call2 0x34f

0x32d: Stack[-14] = Stack[-2]
0x32e: Pop(2)
0x32f: Return(); Pop(10)

0x330: PushEmpty(bool, float, float, bool, float, float)
0x331: @ lshHasAnimation(Stack[-3], Stack[-7])
0x332: Pop(0)
0x333: Push(Stack[-3])
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x336: Pop(0)
0x337: Push((bool) 0)
0x338: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(1)
0x33a: GOTO 0x33f

0x33b: Push("Can't find lsh animation : ")
0x33c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x33d: @ Trace(Stack[-1])
0x33e: Pop(1)
0x33f: Return(); Pop(6)

0x340: PushEmpty(bool, float, float, bool, float, float)
0x341: @ lshHasAnimation(Stack[-3], Stack[-8])
0x342: Pop(0)
0x343: Push(Stack[-3])
0x344: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x345: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x346: Pop(0)
0x347: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x348: Pop(0)
0x349: GOTO 0x34e

0x34a: Push("Can't find lsh animation : ")
0x34b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x34c: @ Trace(Stack[-1])
0x34d: Pop(1)
0x34e: Return(); Pop(6)

0x34f: PushEmpty(bool, bool)
0x350: PushEmpty(bool)
0x351: Call2 0x422

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x354: @ lshHasSpeech(Stack[-1], Stack[-3])
0x355: Pop(0)
0x356: Push(Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x358: @ lshPlaySpeech(Stack[-3])
0x359: Pop(0)
0x35a: Stack[-4] = (bool) 1
0x35b: Return(); Pop(2)

0x35c: Stack[-4] = (bool) 0
0x35d: Return(); Pop(2)

0x35e: PushEmpty(bool)
0x35f: Call2 0x422

0x360: Pop(0)
0x361: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x362: @ lshStopSpeech()
0x363: Pop(0)
0x364: Return(); Pop(0)

0x365: PushEmpty(object, object)
0x366: @ self(Stack[-1])
0x367: Pop(0)
0x368: Stack[-3] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: Stack[-1] = 0
0x36b: PushEmpty(float, float)
0x36c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x36d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x36e: Push((float)0.0)
0x36f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x372: Return(); Pop(2)

0x373: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x374: Return(); Pop(2)

0x375: PushEmpty(int, int)
0x376: @ GetVariable(Stack[-3], Stack[-1])
0x377: Pop(0)
0x378: Stack[-4] = Stack[-1]
0x379: Return(); Pop(2)

0x37a: PushEmpty(object, object)
0x37b: @ FindActor(Stack[-1], Stack[-4])
0x37c: Pop(0)
0x37d: Pop(0); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-5] = (bool) 0
0x380: Return(); Pop(2)

0x381: @ Trigger(Stack[-1], Stack[-3])
0x382: Pop(0)
0x383: Stack[-5] = (bool) 1
0x384: Return(); Pop(2)

0x385: Stack[-1] = 0
0x386: PushEmpty(float, float)
0x387: @ GetGameTime(Stack[-1])
0x388: Pop(0)
0x389: Stack[-3] = Stack[-1]
0x38a: Return(); Pop(2)

0x38b: PushEmpty(float, float)
0x38c: @ GetGameTime(Stack[-1])
0x38d: Pop(0)
0x38e: Push((int) 1)
0x38f: PushEmpty(int)
0x390: Push((int) 24)
0x391: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x392: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x393: Return(); Pop(2)

0x394: PushEmpty(object, object)
0x395: Push("d5q01")
0x396: Push((int) 7)
0x397: @ SetVariable(Stack[-2], Stack[-1])
0x398: Pop(2)
0x399: PushEmpty(object)
0x39a: Call2 0x3f8

0x39b: Stack[-2] = Stack[-1]
0x39c: Pop(1)
0x39d: Push("d5q01BurahMeeting")
0x39e: Push("pt_d5q01_girl_corpse1")
0x39f: Push((int) 1)
0x3a0: Push((int) 515351)
0x3a1: PushEmpty(float)
0x3a2: Call2 0x386

0x3a3: Pop(0)
0x3a4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(5)
0x3a6: PushEmpty()
0x3a7: Call2 0x3c2

0x3a8: Pop(0)
0x3a9: PushEmpty(bool, string, string)
0x3aa: Stack[-2] = "quest_d5_01"
0x3ab: Stack[-1] = "burah_free"
0x3ac: Call2 0x37a

0x3ad: Pop(3)
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = 0
0x3b0: PushEmpty()
0x3b1: Push("ood5Burah1")
0x3b2: Push((int) 1)
0x3b3: @ SetVariable(Stack[-2], Stack[-1])
0x3b4: Pop(2)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty()
0x3b7: PushEmpty(int, string)
0x3b8: Stack[-1] = "ood5Burah1"
0x3b9: Call2 0x375

0x3ba: Pop(1)
0x3bb: Push((int) 0)
0x3bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-2] = (bool) 1
0x3bf: Return(); Pop(0)

0x3c0: Stack[-2] = (bool) 0
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty(object, object)
0x3c3: Push((int) 146)
0x3c4: Push((int) 1)
0x3c5: Push((int) 515346)
0x3c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: PushEmpty(bool, object, int)
0x3c9: Stack[-2] = Stack[-4]
0x3ca: Stack[-1] = (int) 139
0x3cb: Call2 0x3dc

0x3cc: Pop(3)
0x3cd: Return(); Pop(2)

0x3ce: Stack[-1] = 0
0x3cf: PushEmpty(object, object)
0x3d0: @ GetDiaryRoot(Stack[-1])
0x3d1: Pop(0)
0x3d2: Pop(0); Push((bool) Stack[-1] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: Push("Can't retrieve diary root")
0x3d5: @ Trace(Stack[-1])
0x3d6: Pop(1)
0x3d7: Stack[-3] = (bool) 0
0x3d8: Return(); Pop(2)

0x3d9: Stack[-3] = Stack[-1]
0x3da: Return(); Pop(2)

0x3db: Stack[-1] = 0
0x3dc: PushEmpty(object, object, int, object, object, int)
0x3dd: PushEmpty(object)
0x3de: Call2 0x3cf

0x3df: Stack[-4] = Stack[-1]
0x3e0: Pop(1)
0x3e1: @@ Find(Stack[-7], Stack[-2])
0x3e2: Pop(0)
0x3e3: Pop(0); Push((bool) Stack[-2] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e5: Push("Can't find diary parent with id: ")
0x3e6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3e7: @ Trace(Stack[-1])
0x3e8: Pop(1)
0x3e9: Stack[-9] = (bool) 0
0x3ea: Return(); Pop(6)

0x3eb: @@ AddChild(Stack[-8])
0x3ec: Pop(0)
0x3ed: Push((int) 7)
0x3ee: @ SendWorldWndMessage(Stack[-1])
0x3ef: Pop(1)
0x3f0: @@ GetCategory(Stack[-1])
0x3f1: Pop(0)
0x3f2: @ SetDiarySection(Stack[-1])
0x3f3: Pop(0)
0x3f4: Stack[-9] = (bool) 0
0x3f5: Return(); Pop(6)

0x3f6: Stack[-2] = 0
0x3f7: Stack[-3] = 0
0x3f8: PushEmpty(object, object, object, object)
0x3f9: @ GetMainOutdoorScene(Stack[-2])
0x3fa: Pop(0)
0x3fb: Pop(0); Push((bool) Stack[-2] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fd: Push("Can't find main outdoor scene")
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Stack[-1] = 0
0x401: Stack[-5] = Stack[-1]
0x402: Return(); Pop(4)

0x403: @@ GetMap(Stack[-1])
0x404: Pop(0)
0x405: Stack[-5] = Stack[-1]
0x406: Return(); Pop(4)

0x407: Stack[-1] = 0
0x408: Stack[-2] = 0
0x409: PushEmpty(int, int)
0x40a: Push("branch")
0x40b: @ GetVariable(Stack[-1], Stack[-2])
0x40c: Pop(1)
0x40d: Push((int) 0)
0x40e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x410: Stack[-3] = (int) 1
0x411: Return(); Pop(2)

0x412: GOTO 0x418

0x413: Push((int) 1)
0x414: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-3] = (int) 2
0x417: Return(); Pop(2)

0x418: Stack[-3] = (int) 3
0x419: Return(); Pop(2)

0x41a: Stack[-1] = (int) 515592
0x41b: Return(); Pop(0)

0x41c: Stack[-1] = (int) 511961
0x41d: Return(); Pop(0)

0x41e: Stack[-1] = "ui/NPC_Burah.png"
0x41f: Return(); Pop(0)

0x420: Stack[-1] = "ui/NPC_Burah_b.png"
0x421: Return(); Pop(0)

0x422: Stack[-1] = (bool) 1
0x423: Return(); Pop(0)

