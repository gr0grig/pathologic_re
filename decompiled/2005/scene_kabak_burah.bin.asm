GlobalVarCount = 0

Strings:
	pt_andrei
	NPC_Andrei
	NPC_Burah_Andrei.xml
	add
	pt_dance
	pers_nudegirl_dance
	nudegirl_dance.xml
	pt_salesman
	pers_dohodyaga
	salesman_kabak.xml
	ps_kabak_alkash1
	cs_play_cycle.bin
	ps_kabak_alkash2
	ps_kabak_unosha1
	ps_kabak_woman1
	ps_kabak_worker1
	noandrei
	quest_b2_03
	kabak_unload
	clear
	pt_fireplace
	scripted
	fireplace.xml
	GetItemCount
	GetItem
	GetItemAmount
	IsItemSelected
	RemoveAllItems
	size
	get
	AddItem
	SelectItem
	GetLocator
	Locator 
	 doesn't exist

Import:
	CreateIntVector (1 args)
	CreateObjectVector (1 args)
	Hold (0 args)
	GetLocator (3 args)
	AddActorByType (6 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	FindActor (2 args)
	Trigger (2 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x80 Vars = (string)
		EVENT_6 Op = 0x8b Vars = ()
		EVENT_5 Op = 0xe9 Vars = ()


0x0: @ CreateIntVector(Stack[-5])
0x1: Pop(0)
0x2: @ CreateIntVector(Stack[-9])
0x3: Pop(0)
0x4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5: PushEmpty()
0x6: Call2 0xb6

0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0xc: PushEmpty(object, object, string, string, string)
0xd: PushEmpty(object)
0xe: Call2 0x144

0xf: Stack[-5] = Stack[-1]
0x10: Pop(1)
0x11: Stack[-3] = "pt_andrei"
0x12: Stack[-2] = "NPC_Andrei"
0x13: Stack[-1] = "NPC_Burah_Andrei.xml"
0x14: Call2 0x150

0x15: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x16: Pop(5)
0x17: Push( Stack[8 + Tasks[-1].StackPointer] )
0x18: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x19: PushEmpty(object, int, object, object, object)
0x1a: Stack[-5] = Stack[7 + Tasks[-1].StackPointer]
0x1b: Stack[-4] = (int) 0
0x1c: Stack[-3] = Stack[8 + Tasks[-1].StackPointer]
0x1d: Stack[-2] = Stack[9 + Tasks[-1].StackPointer]
0x1e: Stack[-1] = Stack[10 + Tasks[-1].StackPointer]
0x1f: Call2 0x124

0x20: Pop(5)
0x21: @@ add(Stack[-7])
0x22: Pop(0)
0x23: GOTO 0x25

0x24: Stack[7 + Tasks[-1].StackPointer] = 0
0x25: PushEmpty(object, object, string, string, string)
0x26: PushEmpty(object)
0x27: Call2 0x144

0x28: Stack[-5] = Stack[-1]
0x29: Pop(1)
0x2a: Stack[-3] = "pt_dance"
0x2b: Stack[-2] = "pers_nudegirl_dance"
0x2c: Stack[-1] = "nudegirl_dance.xml"
0x2d: Call2 0x150

0x2e: Pop(4)
0x2f: @@ add(Stack[-1])
0x30: Pop(1)
0x31: PushEmpty(object, object, string, string, string)
0x32: PushEmpty(object)
0x33: Call2 0x144

0x34: Stack[-5] = Stack[-1]
0x35: Pop(1)
0x36: Stack[-3] = "pt_salesman"
0x37: Stack[-2] = "pers_dohodyaga"
0x38: Stack[-1] = "salesman_kabak.xml"
0x39: Call2 0x150

0x3a: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x3b: Pop(5)
0x3c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3d: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x3e: PushEmpty(object, int, object, object, object)
0x3f: Stack[-5] = Stack[3 + Tasks[-1].StackPointer]
0x40: Stack[-4] = (int) 0
0x41: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x42: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x43: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x44: Call2 0x124

0x45: Pop(5)
0x46: @@ add(Stack[-3])
0x47: Pop(0)
0x48: PushEmpty(object, object, string, string)
0x49: PushEmpty(object)
0x4a: Call2 0x144

0x4b: Stack[-4] = Stack[-1]
0x4c: Pop(1)
0x4d: Stack[-2] = "ps_kabak_alkash1"
0x4e: Stack[-1] = "cs_play_cycle.bin"
0x4f: Call2 0x162

0x50: Pop(3)
0x51: @@ add(Stack[-1])
0x52: Pop(1)
0x53: PushEmpty(object, object, string, string)
0x54: PushEmpty(object)
0x55: Call2 0x144

0x56: Stack[-4] = Stack[-1]
0x57: Pop(1)
0x58: Stack[-2] = "ps_kabak_alkash2"
0x59: Stack[-1] = "cs_play_cycle.bin"
0x5a: Call2 0x162

0x5b: Pop(3)
0x5c: @@ add(Stack[-1])
0x5d: Pop(1)
0x5e: PushEmpty(object, object, string, string)
0x5f: PushEmpty(object)
0x60: Call2 0x144

0x61: Stack[-4] = Stack[-1]
0x62: Pop(1)
0x63: Stack[-2] = "ps_kabak_unosha1"
0x64: Stack[-1] = "cs_play_cycle.bin"
0x65: Call2 0x162

0x66: Pop(3)
0x67: @@ add(Stack[-1])
0x68: Pop(1)
0x69: PushEmpty(object, object, string, string)
0x6a: PushEmpty(object)
0x6b: Call2 0x144

0x6c: Stack[-4] = Stack[-1]
0x6d: Pop(1)
0x6e: Stack[-2] = "ps_kabak_woman1"
0x6f: Stack[-1] = "cs_play_cycle.bin"
0x70: Call2 0x162

0x71: Pop(3)
0x72: @@ add(Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(object, object, string, string)
0x75: PushEmpty(object)
0x76: Call2 0x144

0x77: Stack[-4] = Stack[-1]
0x78: Pop(1)
0x79: Stack[-2] = "ps_kabak_worker1"
0x7a: Stack[-1] = "cs_play_cycle.bin"
0x7b: Call2 0x162

0x7c: Pop(3)
0x7d: @@ add(Stack[-1])
0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: Push("noandrei")
0x82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x85: GOTO 0x8a

0x86: Push("andrei")
0x87: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8a: Return(); Pop(0)

0x8b: PushEmpty(bool, string, string)
0x8c: Stack[-2] = "quest_b2_03"
0x8d: Stack[-1] = "kabak_unload"
0x8e: Call2 0x16a

0x8f: Pop(3)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x92: @@ clear()
0x93: Pop(0)
0x94: PushEmpty(object, object, int, object)
0x95: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x96: Stack[-2] = (int) 0
0x97: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x98: Call2 0xf7

0x99: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x9a: Pop(4)
0x9b: PushEmpty(object, object, int)
0x9c: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x9d: Stack[-1] = (int) 0
0x9e: Call2 0x110

0x9f: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0xa0: Pop(3)
0xa1: Push( Stack[7 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa3: @@ clear()
0xa4: Pop(0)
0xa5: PushEmpty(object, object, int, object)
0xa6: Stack[-3] = Stack[7 + Tasks[-1].StackPointer]
0xa7: Stack[-2] = (int) 0
0xa8: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xa9: Call2 0xf7

0xaa: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xab: Pop(4)
0xac: PushEmpty(object, object, int)
0xad: Stack[-2] = Stack[7 + Tasks[-1].StackPointer]
0xae: Stack[-1] = (int) 0
0xaf: Call2 0x110

0xb0: Stack[10 + Tasks[-1].StackPointer] = Stack[-3]
0xb1: Pop(3)
0xb2: PushEmpty()
0xb3: Call2 0xf0

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: @ CreateObjectVector(Stack[-0])
0xb7: Pop(0)
0xb8: @ CreateObjectVector(Stack[-1])
0xb9: Pop(0)
0xba: @ Hold()
0xbb: Pop(0)
0xbc: GOTO 0xba

0xbd: Return(); Pop(0)

0xbe: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0xbf: Stack[-5] = (int) 1
0xc0: Push("pt_fireplace")
0xc1: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0xc2: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0xc3: Pop(0)
0xc4: Pop(0); Push((bool) Stack[-3] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xd5

0xc7: Push("scripted")
0xc8: PushEmpty(object)
0xc9: Call2 0x144

0xca: Pop(0)
0xcb: Push(CVector(0.0, 0.0, 1.0))
0xcc: Push("fireplace.xml")
0xcd: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0xce: Pop(4)
0xcf: @@ add(Stack[-1])
0xd0: Pop(0)
0xd1: Stack[-1] = 0
0xd2: Push((int) 1)
0xd3: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xd4: GOTO 0xc0

0xd5: Return(); Pop(10)

0xd6: PushEmpty(object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x9

0xd9: Pop(1)
0xda: Return(); Pop(0)

0xdb: PushEmpty(object)
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x176

0xde: Pop(1)
0xdf: @@ clear()
0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x176

0xe5: Pop(1)
0xe6: @@ clear()
0xe7: Pop(0)
0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: Call2 0xbe

0xeb: Pop(0)
0xec: PushEmpty()
0xed: Call2 0xd6

0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty()
0xf1: Call2 0xdb

0xf2: Pop(0)
0xf3: PushEmpty()
0xf4: Call2 0xe2

0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xf8: PushEmpty(object)
0xf9: Call2 0x14a

0xfa: Stack[-6] = Stack[-1]
0xfb: Pop(1)
0xfc: @@ GetItemCount(Stack[-4], Stack[-12])
0xfd: Pop(0)
0xfe: Stack[-3] = (int) 0
0xff: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x100: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x101: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0x102: Pop(0)
0x103: @@ add(Stack[-2])
0x104: Pop(0)
0x105: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0x106: Pop(0)
0x107: @@ add(Stack[-1])
0x108: Pop(0)
0x109: Stack[-2] = 0
0x10a: Push((int) 1)
0x10b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x10c: GOTO 0xff

0x10d: Stack[-14] = Stack[-5]
0x10e: Return(); Pop(10)

0x10f: Stack[-5] = 0
0x110: PushEmpty(object, int, int, bool, object, int, int, bool)
0x111: @ CreateIntVector(Stack[-4])
0x112: Pop(0)
0x113: @@ GetItemCount(Stack[-3], Stack[-9])
0x114: Pop(0)
0x115: Stack[-2] = (int) 0
0x116: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x117: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x118: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9])
0x119: Pop(0)
0x11a: Push(Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: @@ add(Stack[-2])
0x11d: Pop(0)
0x11e: Push((int) 1)
0x11f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x120: GOTO 0x116

0x121: Stack[-11] = Stack[-4]
0x122: Return(); Pop(8)

0x123: Stack[-4] = 0
0x124: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x125: @@ RemoveAllItems(Stack[-18])
0x126: Pop(0)
0x127: @@ size(Stack[-7])
0x128: Pop(0)
0x129: Stack[-6] = (int) 0
0x12a: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x12b: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12c: @@ get(Stack[-5], Stack[-6])
0x12d: Pop(0)
0x12e: @@ get(Stack[-4], Stack[-6])
0x12f: Pop(0)
0x130: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4])
0x131: Pop(0)
0x132: Stack[-5] = 0
0x133: Push((int) 1)
0x134: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x135: GOTO 0x12a

0x136: @@ size(Stack[-7])
0x137: Pop(0)
0x138: Stack[-2] = (int) 0
0x139: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x13a: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13b: @@ get(Stack[-1], Stack[-2])
0x13c: Pop(0)
0x13d: Push((bool) 1)
0x13e: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19])
0x13f: Pop(1)
0x140: Push((int) 1)
0x141: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x142: GOTO 0x139

0x143: Return(); Pop(14)

0x144: PushEmpty(object, object)
0x145: @ self(Stack[-1])
0x146: Pop(0)
0x147: Stack[-3] = Stack[-1]
0x148: Return(); Pop(2)

0x149: Stack[-1] = 0
0x14a: PushEmpty(object, object)
0x14b: @ CreateObjectVector(Stack[-1])
0x14c: Pop(0)
0x14d: Stack[-3] = Stack[-1]
0x14e: Return(); Pop(2)

0x14f: Stack[-1] = 0
0x150: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x151: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x152: Pop(0)
0x153: Pop(0); Push((bool) Stack[-4] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x155: Push("Locator ")
0x156: Pop(1); Push(Stack[-1] + Stack[-12]);
0x157: Push(" doesn't exist")
0x158: Pop(2); Push(Stack[-2] + Stack[-1]);
0x159: @ Trace(Stack[-1])
0x15a: Pop(1)
0x15b: Stack[-1] = 0
0x15c: GOTO 0x15f

0x15d: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x15e: Pop(0)
0x15f: Stack[-13] = Stack[-1]
0x160: Return(); Pop(8)

0x161: Stack[-1] = 0
0x162: PushEmpty(object, object)
0x163: Push(CVector(0.0, 0.0, 0.0))
0x164: Push(CVector(0.0, 0.0, 1.0))
0x165: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x166: Pop(2)
0x167: Stack[-6] = Stack[-1]
0x168: Return(); Pop(2)

0x169: Stack[-1] = 0
0x16a: PushEmpty(object, object)
0x16b: @ FindActor(Stack[-1], Stack[-4])
0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-5] = (bool) 0
0x170: Return(); Pop(2)

0x171: @ Trigger(Stack[-1], Stack[-3])
0x172: Pop(0)
0x173: Stack[-5] = (bool) 1
0x174: Return(); Pop(2)

0x175: Stack[-1] = 0
0x176: PushEmpty(int, int, object, int, int, object)
0x177: Push(Stack[-7])
0x178: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x179: @@ size(Stack[-3])
0x17a: Pop(0)
0x17b: Stack[-2] = (int) 0
0x17c: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x17d: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17e: @@ get(Stack[-1], Stack[-2])
0x17f: Pop(0)
0x180: Push(Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x182: @ RemoveActor(Stack[-1])
0x183: Pop(0)
0x184: Stack[-1] = 0
0x185: Push((int) 1)
0x186: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x187: GOTO 0x17c

0x188: @@ clear()
0x189: Pop(0)
0x18a: Return(); Pop(6)

