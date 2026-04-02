GlobalVarCount = 0

Strings:
	W:pt_spawn
	W:Not enough spawn points
	A:add
	A:get
	A:remove
	W:pers_littleboy
	W:littleboy_mnogogrannik.xml
	W:pers_littlegirl
	W:littlegirl_mnogogrannik.xml
	W:pers_doberman
	W:pers_girl
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:size
	A:clear
// @pool_raw:700074005f0073007000610077006e0000004e006f007400200065006e006f00750067006800200073007000610077006e00200070006f0069006e00740073000000616464006765740072656d6f76650070006500720073005f006c006900740074006c00650062006f00790000006c006900740074006c00650062006f0079005f006d006e006f0067006f006700720061006e006e0069006b002e0078006d006c00000070006500720073005f006c006900740074006c0065006700690072006c0000006c006900740074006c0065006700690072006c005f006d006e006f0067006f006700720061006e006e0069006b002e0078006d006c00000070006500720073005f0064006f006200650072006d0061006e00000070006500720073005f006700690072006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000073697a6500636c65617200

Import:
	Hold (0 args)
	GetLocator (2 args)
	Trace (1 args)
	CreateIntVector (1 args)
	irand (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_5 Op = 0x8 Vars = ()
		EVENT_6 Op = 0x99 Vars = ()


0x0: PushEmpty(object)
0x1: Call2 0xa4

0x2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(int, bool, object, int, int, int, int, int, int, int, int, int, int, int, int, int, int, bool, object, int, int, int, int, int, int, int, int, int, int, int, int, int)
0x9: Stack[-16] = (int) 0
0xa: Push("pt_spawn") // @poff=0
0xb: Push((int) 1)
0xc: Pop(1); Push(Stack[-18] + Stack[-1]);
0xd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe: @ GetLocator(Stack[-1], Stack[-16])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-15] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: GOTO 0x16

0x13: Push((int) 1)
0x14: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x15: GOTO 0xa

0x16: Push((int) 22)
0x17: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x19: Push("Not enough spawn points") // @poff=18
0x1a: @ Trace(Stack[-1])
0x1b: Pop(1)
0x1c: Return(); Pop(32)

0x1d: @ CreateIntVector(Stack[-14])
0x1e: Pop(0)
0x1f: Stack[-13] = (int) 1
0x20: Pop(0); Push((bool) Stack[-13] <= Stack[-16])
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: @@ add(Stack[-13]); Obj=14 // @poff=66
0x23: Pop(0)
0x24: Push((int) 1)
0x25: Stack[-14] = Stack[-14] + Stack[-1]; Pop(1);
0x26: GOTO 0x20

0x27: Stack[-12] = (int) 0
0x28: Push((int) 6)
0x29: Pop(1); Push((bool) Stack[-13] < Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x2b: @ irand(Stack[-11], Stack[-16])
0x2c: Pop(0)
0x2d: @@ get(Stack[-10], Stack[-11]); Obj=14 // @poff=70
0x2e: Pop(0)
0x2f: @@ remove(Stack[-11]); Obj=14 // @poff=74
0x30: Pop(0)
0x31: Push((int) -1)
0x32: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x33: PushEmpty(object, object, string, string, string)
0x34: PushEmpty(object)
0x35: Call2 0x9e

0x36: Stack[-1] = Stack[-5]
0x37: Pop(1)
0x38: Push("pt_spawn") // @poff=0
0x39: Stack[-4] = Stack[-1] + Stack[-16]; Pop(1);
0x3a: Stack[-2] = "pers_littleboy" // @poff=81
0x3b: Stack[-1] = "littleboy_mnogogrannik.xml" // @poff=111
0x3c: Call2 0xaa

0x3d: Pop(4)
0x3e: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x3f: Pop(1)
0x40: Push((int) 1)
0x41: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x42: GOTO 0x28

0x43: Stack[-9] = (int) 0
0x44: Push((int) 6)
0x45: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x47: @ irand(Stack[-8], Stack[-16])
0x48: Pop(0)
0x49: @@ get(Stack[-7], Stack[-8]); Obj=14 // @poff=70
0x4a: Pop(0)
0x4b: @@ remove(Stack[-8]); Obj=14 // @poff=74
0x4c: Pop(0)
0x4d: Push((int) -1)
0x4e: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x4f: PushEmpty(object, object, string, string, string)
0x50: PushEmpty(object)
0x51: Call2 0x9e

0x52: Stack[-1] = Stack[-5]
0x53: Pop(1)
0x54: Push("pt_spawn") // @poff=0
0x55: Stack[-4] = Stack[-1] + Stack[-13]; Pop(1);
0x56: Stack[-2] = "pers_littlegirl" // @poff=165
0x57: Stack[-1] = "littlegirl_mnogogrannik.xml" // @poff=197
0x58: Call2 0xaa

0x59: Pop(4)
0x5a: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x5b: Pop(1)
0x5c: Push((int) 1)
0x5d: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x5e: GOTO 0x44

0x5f: Stack[-6] = (int) 0
0x60: Push((int) 5)
0x61: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x63: @ irand(Stack[-5], Stack[-16])
0x64: Pop(0)
0x65: @@ get(Stack[-4], Stack[-5]); Obj=14 // @poff=70
0x66: Pop(0)
0x67: @@ remove(Stack[-5]); Obj=14 // @poff=74
0x68: Pop(0)
0x69: Push((int) -1)
0x6a: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x6b: PushEmpty(object, object, string, string, string)
0x6c: PushEmpty(object)
0x6d: Call2 0x9e

0x6e: Stack[-1] = Stack[-5]
0x6f: Pop(1)
0x70: Push("pt_spawn") // @poff=0
0x71: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x72: Stack[-2] = "pers_doberman" // @poff=253
0x73: Stack[-1] = "boy_mnogogrannik.xml" // @poff=123
0x74: Call2 0xaa

0x75: Pop(4)
0x76: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x77: Pop(1)
0x78: Push((int) 1)
0x79: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x7a: GOTO 0x60

0x7b: Stack[-3] = (int) 0
0x7c: Push((int) 5)
0x7d: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x7f: @ irand(Stack[-2], Stack[-16])
0x80: Pop(0)
0x81: @@ get(Stack[-1], Stack[-2]); Obj=14 // @poff=70
0x82: Pop(0)
0x83: @@ remove(Stack[-2]); Obj=14 // @poff=74
0x84: Pop(0)
0x85: Push((int) -1)
0x86: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x87: PushEmpty(object, object, string, string, string)
0x88: PushEmpty(object)
0x89: Call2 0x9e

0x8a: Stack[-1] = Stack[-5]
0x8b: Pop(1)
0x8c: Push("pt_spawn") // @poff=0
0x8d: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x8e: Stack[-2] = "pers_girl" // @poff=281
0x8f: Stack[-1] = "girl_mnogogrannik.xml" // @poff=209
0x90: Call2 0xaa

0x91: Pop(4)
0x92: @@@ add(Stack[-1]); Obj=0 // @poff=66
0x93: Pop(1)
0x94: Push((int) 1)
0x95: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x96: GOTO 0x7c

0x97: Return(); Pop(32)

0x98: Stack[-14] = 0
0x99: PushEmpty(object)
0x9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b: Call2 0xbc

0x9c: Pop(1)
0x9d: Return(); Pop(0)

0x9e: PushEmpty(object, object)
0x9f: @ self(Stack[-1])
0xa0: Pop(0)
0xa1: Stack[-1] = Stack[-3]
0xa2: Return(); Pop(2)

0xa3: Stack[-1] = 0
0xa4: PushEmpty(object, object)
0xa5: @ CreateObjectVector(Stack[-1])
0xa6: Pop(0)
0xa7: Stack[-1] = Stack[-3]
0xa8: Return(); Pop(2)

0xa9: Stack[-1] = 0
0xaa: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xab: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=301
0xac: Pop(0)
0xad: Pop(0); Push((bool) Stack[-4] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xaf: Push("Locator ") // @poff=312
0xb0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb1: Push(" doesn't exist") // @poff=330
0xb2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb3: @ Trace(Stack[-1])
0xb4: Pop(1)
0xb5: Stack[-1] = 0
0xb6: GOTO 0xb9

0xb7: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb8: Pop(0)
0xb9: Stack[-1] = Stack[-13]
0xba: Return(); Pop(8)

0xbb: Stack[-1] = 0
0xbc: PushEmpty(int, int, object, int, int, object)
0xbd: Push(Stack[-7])
0xbe: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xbf: @@ size(Stack[-3]); Obj=7 // @poff=360
0xc0: Pop(0)
0xc1: Stack[-2] = (int) 0
0xc2: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=70
0xc5: Pop(0)
0xc6: Push(Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: @ RemoveActor(Stack[-1])
0xc9: Pop(0)
0xca: Stack[-1] = 0
0xcb: Push((int) 1)
0xcc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcd: GOTO 0xc2

0xce: @@ clear(); Obj=7 // @poff=365
0xcf: Pop(0)
0xd0: Return(); Pop(6)

