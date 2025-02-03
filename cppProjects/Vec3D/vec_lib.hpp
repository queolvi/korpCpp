namespace IPO_lib {
    class Vec3D {
    private:
        double x, y, z;
    public:
        Vec3D(double x = 0, double y = 0, double z = 0);
        Vec3D operator +=(const Vec3D& rhs);
        Vec3D operator -=(const Vec3D& rhs);
        Vec3D operator -() const;
        bool operator ==(const Vec3D& rhs) const;
        bool operator !=(const Vec3D& rhs) const;
        double norm() const;
        double projection(const Vec3D base) const;
        Vec3D koeff_product(double k) const;             
        bool is_zero() const;
        bool is_unit() const;
    };
}

IPO_lib::Vec3D operator+ (const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs);
IPO_lib::Vec3D operator- (const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs);
double scalar_product(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs); 
IPO_lib::Vec3D vector_product(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& rhs);
double mixed_product(const IPO_lib::Vec3D& lhs, const IPO_lib::Vec3D& mhs, const IPO_lib::Vec3D& rhs);

