#pragma once

#include <stdexcept>
#include <vector>


namespace gcufl {
	template <typename V>
	class Matrix {
	private:
		std::vector<std::size_t> dimensions;
		std::vector<V> values;

	public:
		Matrix(const std::vector<std::size_t>& dimensions) noexcept : dimensions(dimensions.begin(), dimensions.end()) {
			std::size_t size = 1;
			for (const std::size_t dimension : dimensions)
				size *= dimension;
			values.resize(size);
		}

		Matrix(const std::vector<std::size_t>& dimensions, const std::vector<V>& values) : dimensions(dimensions.begin(), dimensions.end()), values(values.begin(), values.end()) {
			std::size_t size = 1;
			for (const std::size_t dimension : dimensions)
				size *= dimension;
			if (size != values.size())
				throw std::runtime_error("Values do not match dimensions");
		}

		V& operator[](const std::vector<std::size_t>& indices) {
			if (indices.size() != dimensions.size())
				throw std::runtime_error("Indices do not match dimensions");
			std::size_t index = 0;
			for (std::size_t i = 0; i < indices.size(); ++i) {
				if (indices[i] >= dimensions[i])
					throw std::runtime_error("Index out of bounds");
				index = index * dimensions[i] + indices[i];
			}
			return values[index];
		}

		const V& operator[](const std::vector<std::size_t>& indices) const {
			if (indices.size() != dimensions.size())
				throw std::runtime_error("Indices do not match dimensions");
			std::size_t index = 0;
			for (std::size_t i = 0; i < indices.size(); ++i) {
				if (indices[i] >= dimensions[i])
					throw std::runtime_error("Index out of bounds");
				index = index * dimensions[i] + indices[i];
			}
			return values[index];
		}

		std::vector<V> getValues() const noexcept {
			return values;
		}

		std::vector<std::size_t> getDimensions() const noexcept {
			return dimensions;
		}
	};
}
