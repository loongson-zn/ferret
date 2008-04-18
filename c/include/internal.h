#ifndef FRT_INTERNAL_H
#define FRT_INTERNAL_H

/* Constants */
#define EXCEPT_H         FRT_EXCEPT_H
#define EXIT             FRT_EXIT
#define HASH_MINSIZE     FRT_HASH_MINSIZE
#define HAS_GNUC_VARARGS FRT_HAS_GNUC_VARARGS
#define HAS_ISO_VARARGS  FRT_HAS_ISO_VARARGS
#define HAS_VARARGS      FRT_HAS_VARARGS
#define HS_MIN_SIZE      FRT_HS_MIN_SIZE
#define IS_C             FRT_IS_C
#define PQ_ADDED         FRT_PQ_ADDED
#define PQ_DROPPED       FRT_PQ_DROPPED
#define PQ_INSERTED      FRT_PQ_INSERTED
#define SLOW_DOWN        FRT_SLOW_DOWN
#define VEXIT            FRT_VEXIT
#define WIN              FRT_WIN

/* Types */
#define HashEntry               FerretHashEntry
#define HashKeyStatus           FerretHashKeyStatus
#define HashSet                 FerretHashSet
#define HashSetEntry            FerretHashSetEntry
#define HashTable               FerretHashTable
#define PriorityQueue           FerretPriorityQueue
#define PriorityQueueInsertEnum FerretPriorityQueueInsertEnum
#define Token                   FerretToken

/* Functions */
#define calloc            frt_calloc
#define clean_up          frt_clean_up
#define eq_ft             frt_eq_ft
#define exit              frt_exit
#define free_ft           frt_free_ft
#define h_clear           frt_h_clear
#define h_clone           frt_h_clone
#define h_clone_func_t    frt_h_clone_func_t
#define h_del             frt_h_del
#define h_del_int         frt_h_del_int
#define h_destroy         frt_h_destroy
#define h_each            frt_h_each
#define h_each_key_val_ft frt_h_each_key_val_ft
#define h_get             frt_h_get
#define h_get_int         frt_h_get_int
#define h_has_key         frt_h_has_key
#define h_has_key_int     frt_h_has_key_int
#define h_lookup          frt_h_lookup
#define h_lookup_ft       frt_h_lookup_ft
#define h_new             frt_h_new
#define h_new_int         frt_h_new_int
#define h_new_str         frt_h_new_str
#define h_rem             frt_h_rem
#define h_rem_int         frt_h_rem_int
#define h_set             frt_h_set
#define h_set_ext         frt_h_set_ext
#define h_set_int         frt_h_set_int
#define h_set_safe        frt_h_set_safe
#define h_set_safe_int    frt_h_set_safe_int
#define h_str_print_keys  frt_h_str_print_keys
#define hash_ft           frt_hash_ft
#define hs_add            frt_hs_add
#define hs_add_safe       frt_hs_add_safe
#define hs_clear          frt_hs_clear
#define hs_del            frt_hs_del
#define hs_destroy        frt_hs_destroy
#define hs_exists         frt_hs_exists
#define hs_free           frt_hs_free
#define hs_merge          frt_hs_merge
#define hs_new            frt_hs_new
#define hs_new_str        frt_hs_new_str
#define hs_orig           frt_hs_orig
#define hs_rem            frt_hs_rem
#define init              frt_init
#define lt_ft             frt_lt_ft
#define malloc            frt_malloc
#define micro_sleep       frt_micro_sleep
#define pq_clear          frt_pq_clear
#define pq_clone          frt_pq_clone
#define pq_destroy        frt_pq_destroy
#define pq_down           frt_pq_down
#define pq_free           frt_pq_free
#define pq_full           frt_pq_full
#define pq_insert         frt_pq_insert
#define pq_new            frt_pq_new
#define pq_pop            frt_pq_pop
#define pq_push           frt_pq_push
#define pq_top            frt_pq_top
#define progname          frt_progname
#define ptr_eq            frt_ptr_eq
#define ptr_hash          frt_ptr_hash
#define realloc           frt_realloc
#define setprogname       frt_setprogname
#define str_hash          frt_str_hash
#define tk_cmp            frt_tk_cmp
#define tk_destroy        frt_tk_destroy
#define tk_eq             frt_tk_eq
#define tk_new            frt_tk_new
#define tk_set            frt_tk_set
#define tk_set_no_len     frt_tk_set_no_len
#define vexit             frt_vexit

#endif
