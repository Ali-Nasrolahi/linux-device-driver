/**
 * @file scull.h
 * @author Ali Nasrolahi (a.nasrolahi01@gmail.com)
 * @brief Scull
 */

#ifndef _SCULL_H_
#define _SCULL_H_

#define SCULL_DEBUG

#undef PDEBUG /* undef it, just in case */
#ifdef SCULL_DEBUG
#ifdef __KERNEL__
/* This one if debugging is on, and kernel space */
#define PDEBUG(fmt, args...) printk(KERN_DEBUG "scull: " fmt, ##args)
#else
/* This one for user space */
#define PDEBUG(fmt, args...) fprintf(stderr, fmt, ##args)
#endif
#else
#define PDEBUG(fmt, args...) /* not debugging: nothing */
#endif

#undef PDEBUGG
#define PDEBUGG(fmt, args...) /* nothing: it's a placeholder */

#ifndef SCULL_MAJOR
#define SCULL_MAJOR 0 /* dynamic major by default */
#endif

#ifndef SCULL_NR_DEVS
#define SCULL_NR_DEVS 4 /* scull0 through scull3 */
#endif

#endif /*_SCULL_H*/